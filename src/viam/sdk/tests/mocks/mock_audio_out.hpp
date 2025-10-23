#pragma once

#include <viam/sdk/common/audio.hpp>
#include <viam/sdk/common/proto_value.hpp>
#include <viam/sdk/components/audio_out.hpp>
#include <viam/sdk/resource/resource.hpp>

namespace viam {
namespace sdktests {
namespace audioout {

using viam::sdk::AudioOut;
using namespace viam::sdk;

class MockAudioOut : public AudioOut {
   public:
    void play(std::vector<uint8_t> const& audio_data,
              boost::optional<audio_info> info,
              const sdk::ProtoStruct& extra) override;
    audio_properties get_properties(const sdk::ProtoStruct& extra) override;
    viam::sdk::ProtoStruct do_command(const viam::sdk::ProtoStruct& command) override;
    std::vector<GeometryConfig> get_geometries(const ProtoStruct& extra) override;

    static std::shared_ptr<MockAudioOut> get_mock_audio_out();

    MockAudioOut(std::string name) : AudioOut(std::move(name)) {}

    using AudioOut::get_geometries;
    using AudioOut::get_properties;
    using AudioOut::play;

    audio_properties properties_;
    viam::sdk::ProtoStruct map_;
    std::vector<GeometryConfig> geometries_;
    std::vector<uint8_t> last_played_audio_;
    boost::optional<audio_info> last_played_audio_info_;
};

audio_properties fake_properties();

}  // namespace audioout
}  // namespace sdktests
}  // namespace viam
