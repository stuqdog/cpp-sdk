#include <common/v1/common.pb.h>
#include <spatialmath/orientation.h>

#include <string>
#include <tuple>

enum GeometryType {
	box,
	sphere,
	point,
	unknown,
};

struct GeometryConfig {
	GeometryType geometry_type;
	double x;
	double y;
	double z;
	double r;
	// TODO: if and when RDK makes more explicit use of ox/oy/oz, we should
	// do the same here
	double o_x;
	double o_y;
	double o_z;
	OrientationConfig orientation_config;
	std::string label;
	viam::common::v1::Geometry to_proto();
	viam::common::v1::RectangularPrism box_proto();
	viam::common::v1::Sphere sphere_proto();
	viam::common::v1::Pose pose_proto();
};

viam::common::v1::Sphere GeometryConfig::sphere_proto() {
	viam::common::v1::Sphere sphere;
	sphere.set_radius_mm(r);
	return sphere;
}

viam::common::v1::RectangularPrism GeometryConfig::box_proto() {
	viam::common::v1::RectangularPrism box;
	viam::common::v1::Vector3 vec3;
	vec3.set_x(x);
	vec3.set_y(y);
	vec3.set_z(z);
	*box.mutable_dims_mm() = vec3;
	return box;
}

viam::common::v1::Pose GeometryConfig::pose_proto() {
	viam::common::v1::Pose pose;
	pose.set_x(x);
	pose.set_y(y);
	pose.set_z(z);
	pose.set_o_x(0);
	pose.set_o_y(0);
	pose.set_o_z(1);
	pose.set_theta(0);
	return pose;
}

viam::common::v1::Geometry GeometryConfig::to_proto() {
	viam::common::v1::Geometry geometry_;
	*geometry_.mutable_label() = label;
	switch (geometry_type) {
		case box: {
			*geometry_.mutable_box() = box_proto();
			return geometry_;
		}
		case sphere: {
			*geometry_.mutable_sphere() = sphere_proto();
			return geometry_;
		}
		case point: {
			*geometry_.mutable_center() = pose_proto();
			viam::common::v1::Sphere sphere;
			sphere.set_radius_mm(0);
			*geometry_.mutable_sphere() = sphere;

			return geometry_;
		}
		case unknown: {
			if (x == 0 && y == 0 && z == 0) {
				*geometry_.mutable_box() = box_proto();
			} else {
				*geometry_.mutable_sphere() = sphere_proto();
			}
			return geometry_;
		}
	}
};