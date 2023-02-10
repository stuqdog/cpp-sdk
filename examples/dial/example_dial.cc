#include <grpcpp/client_context.h>
#include <grpcpp/grpcpp.h>
#include <unistd.h>

#include <cstddef>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

#include "../../src/gen/component/camera/v1/camera.grpc.pb.h"
#include "../../src/gen/robot/v1/robot.grpc.pb.h"
#include "../../src/gen/robot/v1/robot.pb.h"
#include "../../src/robot/client.hpp"
#include "../../src/rpc/dial.hpp"
#include "component/camera/v1/camera.pb.h"

using viam::robot::v1::Status;

extern "C" void* init_rust_runtime();
extern "C" int free_rust_runtime(void* ptr);
extern "C" void free_string(char* s);
// extern "C" char* dial(const char* uri, const char* payload, bool allow_insecure, void* ptr);

int main() {
    // const char* uri = "webrtc-test-main.jkek76kqnh.viam.cloud";
    const char* uri = "<your uri here>";
    DialOptions dial_options;
    // std::string payload = "ytexnwei4fu1xv9csoqxfv4ckl3htsb49mzzey5t15xo9swy";
    std::string payload = "<your payload here>";
    Credentials credentials(payload);
    dial_options.credentials = credentials;
    boost::optional<DialOptions> opts(dial_options);
    std::string address(uri);
    ViamChannel channel = dial(uri, opts);
    Options options = Options(1, opts);
    // std::cout << "Creating robot client" << std::endl;
    std::cout << "CREATING ROBOT" << std::endl;
    // std::shared_ptr<RobotClient> robot = RobotClient::at_address(address, options);
    //  std::cout << "Created robot client, trying to make camera stub" << std::endl;
    //// CR erodkin: this ain't good!
    std::cout << "REFRESH" << std::endl;
    // robot->refresh();
    std::cout << "GETTING RESOURCE NAMES" << std::endl;
    // std::vector<ResourceName>* resource_names = robot->resource_names();
    //  ResourceName the_one_we_care_about = resource_names->at(0);
    //  for (ResourceName resource : *resource_names) {
    //  std::cout << "Resource name: " << resource.name() << resource.type() << resource.subtype()
    //<< std::endl;
    // }
    //  std::vector<Status> status_plural = robot->get_status();
    //  std::cout << "Status plural len " << status_plural.size() << std::endl;
    //  for (Status s : status_plural) {
    //  std::cout << " Status! " << s.name().subtype() << std::endl;
    // }

    // std::vector<ResourceName> just_one = std::vector<ResourceName>();
    // just_one.push_back(the_one_we_care_about);
    // std::vector<Status> status_singular = robot->get_status(just_one);
    // std::cout << "Status singular len " << status_singular.size() << std::endl;
    // for (Status s : status_singular) {
    // std::cout << " Status! " << s.name().subtype() << std::endl;
    //}
    std::cout << "CREATING CAMERA STUB" << std::endl;
    std::unique_ptr<viam::component::camera::v1::CameraService::Stub> camera_stub =
        viam::component::camera::v1::CameraService::NewStub(channel.channel);
    std::cout << "CREATed CAMERA STUB" << std::endl;

    viam::component::camera::v1::GetImageRequest req;
    req.set_name("color");
    req.set_mime_type("image/png");
    //*req.mutable_name() = "intelrealsense:colorcomponentcamera";
    //*req.mutable_mime_type() = "image/png";
    viam::component::camera::v1::GetImageResponse resp;
    grpc::ClientContext ctx;
    std::cout << "GET IMAGE CALL" << std::endl;
    camera_stub->GetImage(&ctx, req, &resp);
    std::cout << "GOT AN IMAGE. How big is it??" << resp.image().size() << std::endl;

    std::cout << "Closing robot" << std::endl;
    // robot->close();
    return 0;
}
