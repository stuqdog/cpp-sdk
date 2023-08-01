#include "viam/sdk/common/pose_in_frame.hpp"
#include "viam/sdk/common/proto_type.hpp"
#include "viam/sdk/common/utils.hpp"
#include "viam/sdk/services/motion/motion.hpp"
#include "viam/sdk/spatialmath/geometry.hpp"
#include <memory>
#include <viam/sdk/services/motion/server.hpp>

namespace viam {
namespace sdk {

MotionServer::MotionServer() : ResourceServer(std::make_shared<ResourceManager>()){};
MotionServer::MotionServer(std::shared_ptr<ResourceManager> manager) : ResourceServer(manager){};

::grpc::Status MotionServer::Move(::grpc::ServerContext* context,
                                  const ::viam::service::motion::v1::MoveRequest* request,
                                  ::viam::service::motion::v1::MoveResponse* response) {
    if (!request) {
        return ::grpc::Status(::grpc::StatusCode::INVALID_ARGUMENT,
                              "Called [Move] without a request");
    };

    const std::shared_ptr<Resource> rb = resource_manager()->resource(request->name());
    if (!rb) {
        return grpc::Status(grpc::UNKNOWN, "resource not found: " + request->name());
    }

    const std::shared_ptr<Motion> motion = std::dynamic_pointer_cast<Motion>(rb);

    PoseInFrame destination = PoseInFrame::from_proto(request->destination());
    Name name = Name::from_proto(request->component_name());
    std::unique_ptr<WorldState> ws;
    if (request->has_world_state()) {
        ws = std::make_unique<WorldState>(WorldState::from_proto(request->world_state()));
    }

    std::unique_ptr<Motion::constraints> constraints;
    if (request->has_constraints()) {
        constraints = std::make_unique<Motion::constraints>(
            Motion::constraints::from_proto(request->constraints()));
    }

    AttributeMap extra;
    if (request->has_extra()) {
        extra = struct_to_map(request->extra());
    }
    const bool success = motion->move(std::move(destination),
                                      std::move(name),
                                      std::move(ws),
                                      std::move(constraints),
                                      std::move(extra));
    response->set_success(success);

    return ::grpc::Status();
};

::grpc::Status MotionServer::MoveOnMap(::grpc::ServerContext* context,
                                       const ::viam::service::motion::v1::MoveOnMapRequest* request,
                                       ::viam::service::motion::v1::MoveOnMapResponse* response) {
    if (!request) {
        return ::grpc::Status(::grpc::StatusCode::INVALID_ARGUMENT,
                              "Called [MoveOnMap] without a request");
    };

    const std::shared_ptr<Resource> rb = resource_manager()->resource(request->name());
    if (!rb) {
        return grpc::Status(grpc::UNKNOWN, "resource not found: " + request->name());
    }

    const std::shared_ptr<Motion> motion = std::dynamic_pointer_cast<Motion>(rb);

    const auto& destination = pose::from_proto(request->destination());
    const auto& component_name = Name::from_proto(request->component_name());
    const auto& slam_name = Name::from_proto(request->slam_service_name());

    AttributeMap extra;
    if (request->has_extra()) {
        extra = struct_to_map(request->extra());
    }
    bool success = motion->move_on_map(destination, component_name, slam_name, extra);

    response->set_success(success);

    return ::grpc::Status();
};

::grpc::Status MotionServer::MoveOnGlobe(
    ::grpc::ServerContext* context,
    const ::viam::service::motion::v1::MoveOnGlobeRequest* request,
    ::viam::service::motion::v1::MoveOnGlobeResponse* response) {
    if (!request) {
        return ::grpc::Status(::grpc::StatusCode::INVALID_ARGUMENT,
                              "Called [MoveOnGlobe] without a request");
    };

    const std::shared_ptr<Resource> rb = resource_manager()->resource(request->name());
    if (!rb) {
        return grpc::Status(grpc::UNKNOWN, "resource not found: " + request->name());
    }

    const std::shared_ptr<Motion> motion = std::dynamic_pointer_cast<Motion>(rb);

    const auto& destination = geo_point::from_proto(request->destination());
    const auto& component_name = Name::from_proto(request->component_name());
    const auto& movement_sensor_name = Name::from_proto(request->movement_sensor_name());
    std::vector<geo_obstacle> obstacles;
    for (const auto& proto_obstacle : request->obstacles()) {
        const auto& obstacle = geo_obstacle::from_proto(proto_obstacle);
        obstacles.push_back(obstacle);
    }
    double* linear_meters_per_sec;
    if (request->has_linear_meters_per_sec()) {
        *linear_meters_per_sec = request->linear_meters_per_sec();
    }
    double* angular_deg_per_sec;
    if (request->has_angular_deg_per_sec()) {
        *angular_deg_per_sec = request->angular_deg_per_sec();
    }
    double* heading;
    if (request->has_heading()) {
        *heading = request->heading();
    }
    AttributeMap extra;
    if (request->has_extra()) {
        extra = struct_to_map(request->extra());
    }

    bool success = motion->move_on_globe(destination,
                                         component_name,
                                         movement_sensor_name,
                                         obstacles,
                                         heading,
                                         linear_meters_per_sec,
                                         angular_deg_per_sec,
                                         extra);

    response->set_success(success);

    return ::grpc::Status();
};

::grpc::Status MotionServer::MoveSingleComponent(
    ::grpc::ServerContext* context,
    const ::viam::service::motion::v1::MoveSingleComponentRequest* request,
    ::viam::service::motion::v1::MoveSingleComponentResponse* response) {
    if (!request) {
        return ::grpc::Status(::grpc::StatusCode::INVALID_ARGUMENT,
                              "Called [MoveSingleComponent] without a request");
    };

    const std::shared_ptr<Resource> rb = resource_manager()->resource(request->name());
    if (!rb) {
        return grpc::Status(grpc::UNKNOWN, "resource not found: " + request->name());
    }

    const std::shared_ptr<Motion> motion = std::dynamic_pointer_cast<Motion>(rb);

    const auto& destination = PoseInFrame::from_proto(request->destination());
    const auto& component_name = Name::from_proto(request->component_name());
    const auto& world_state = WorldState::from_proto(request->world_state());
    AttributeMap extra;
    if (request->has_extra()) {
        extra = struct_to_map(request->extra());
    }

    bool success = motion->move_single_component(destination, component_name, world_state, extra);

    response->set_success(success);

    return ::grpc::Status();
};

::grpc::Status MotionServer::GetPose(::grpc::ServerContext* context,
                                     const ::viam::service::motion::v1::GetPoseRequest* request,
                                     ::viam::service::motion::v1::GetPoseResponse* response) {
    if (!request) {
        return ::grpc::Status(::grpc::StatusCode::INVALID_ARGUMENT,
                              "Called [GetPose] without a request");
    };

    const std::shared_ptr<Resource> rb = resource_manager()->resource(request->name());
    if (!rb) {
        return grpc::Status(grpc::UNKNOWN, "resource not found: " + request->name());
    }

    const std::shared_ptr<Motion> motion = std::dynamic_pointer_cast<Motion>(rb);

    const auto& component_name = Name::from_proto(request->component_name());
    const std::string& destination_frame = request->destination_frame();
    std::vector<WorldState::transform> supplemental_transforms;
    for (const auto& proto_transform : request->supplemental_transforms()) {
        supplemental_transforms.push_back(WorldState::transform::from_proto(proto_transform));
    }
    AttributeMap extra;
    if (request->has_extra()) {
        extra = struct_to_map(request->extra());
    }

    PoseInFrame pose =
        motion->get_pose(component_name, destination_frame, supplemental_transforms, extra);

    *response->mutable_pose() = pose.to_proto();

    return ::grpc::Status();
};

::grpc::Status MotionServer::DoCommand(::grpc::ServerContext* context,
                                       const ::viam::common::v1::DoCommandRequest* request,
                                       ::viam::common::v1::DoCommandResponse* response) {
    if (!request) {
        return ::grpc::Status(::grpc::StatusCode::INVALID_ARGUMENT,
                              "Called [DoCommand] without a request");
    };

    const std::shared_ptr<Resource> rb = resource_manager()->resource(request->name());
    if (!rb) {
        return grpc::Status(grpc::UNKNOWN, "resource not found: " + request->name());
    }

    const std::shared_ptr<Motion> motion = std::dynamic_pointer_cast<Motion>(rb);
    const AttributeMap result = motion->do_command(struct_to_map(request->command()));

    *response->mutable_result() = map_to_struct(result);

    return ::grpc::Status();
};

void MotionServer::register_server(std::shared_ptr<Server> server) {
    server->register_service(this);
}

}  // namespace sdk
}  // namespace viam
