#pragma once

#include <viam/sdk/components/base.hpp>
#include <viam/sdk/components/component.hpp>
#include <viam/sdk/components/motor.hpp>
#include <viam/sdk/config/resource.hpp>
#include <viam/sdk/resource/reconfigurable.hpp>
#include <viam/sdk/resource/resource.hpp>

using namespace viam::sdk;

// `MyBase` inherits from the `Base` class defined in the viam C++ SDK and
// implements some of the relevant methods along with `reconfigure`. It also
// specifies a static `validate` method that checks config validity.
class MyBase : public Base, public Reconfigurable {
   public:
    MyBase(const Dependencies& deps, const ResourceConfig& cfg) : Base(cfg.name()) {
        this->reconfigure(deps, cfg);
    };
    void reconfigure(const Dependencies& deps, const ResourceConfig& cfg) override;
    static std::vector<std::string> validate(ResourceConfig cfg);

    bool is_moving() override;
    void stop(const ProtoStruct& extra) override;
    void set_power(const Vector3& linear,
                   const Vector3& angular,
                   const ProtoStruct& extra) override;

    ProtoStruct do_command(const ProtoStruct& command) override;
    std::vector<GeometryConfig> get_geometries(const ProtoStruct& extra) override;
    Base::properties get_properties(const ProtoStruct& extra) override;

    void move_straight(int64_t distance_mm, double mm_per_sec, const ProtoStruct& extra) override {
        throw std::runtime_error("move_straight unimplemented");
    }
    void spin(double angle_deg, double degs_per_sec, const ProtoStruct& extra) override {
        throw std::runtime_error("spin unimplemented");
    }
    void set_velocity(const Vector3& linear,
                      const Vector3& angular,
                      const ProtoStruct& extra) override {
        throw std::runtime_error("set_velocity unimplemented");
    }

   private:
    std::shared_ptr<Motor> left_;
    std::shared_ptr<Motor> right_;
};
