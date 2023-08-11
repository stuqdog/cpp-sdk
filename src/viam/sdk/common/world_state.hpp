#pragma once

#include "viam/sdk/common/pose_in_frame.hpp"
#include <common/v1/common.pb.h>

#include <viam/sdk/spatialmath/geometry.hpp>

namespace viam {
namespace sdk {

class WorldState {
   public:
    struct geometries_in_frame {
        std::vector<GeometryConfig> geometries;
        std::string reference_frame;
    };

    // CR erodkin: this should probably not live in `WorldState`
    struct transform {
        std::string reference_frame;
        PoseInFrame pose_in_observer_frame;
        std::shared_ptr<GeometryConfig> physical_object;

        common::v1::Transform to_proto() const;
        static transform from_proto(const common::v1::Transform& proto);
        transform() {}
    };

    common::v1::WorldState to_proto() const;
    static WorldState from_proto(const common::v1::WorldState& ws);

    WorldState() {}
    WorldState(std::vector<geometries_in_frame> obstacles, std::vector<transform> transforms)
        : obstacles_(obstacles), transforms_(transforms) {}

    // CR erodkin: docstring comment all this. maybe a separate ticket?
   private:
    std::vector<geometries_in_frame> obstacles_;
    std::vector<transform> transforms_;
};

}  // namespace sdk
}  // namespace viam
