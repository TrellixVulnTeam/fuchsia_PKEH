// File is automatically generated; do not modify.
// See tools/fidl/measure-tape/README.md

#include <lib/ui/scenic/cpp/commands_sizing.h>

#include <fuchsia/images/cpp/fidl.h>
#include <fuchsia/ui/gfx/cpp/fidl.h>
#include <fuchsia/ui/input/cpp/fidl.h>
#include <fuchsia/ui/scenic/cpp/fidl.h>
#include <fuchsia/ui/views/cpp/fidl.h>
#include <zircon/types.h>


namespace measure_tape {
namespace fuchsia {
namespace ui {
namespace scenic {

namespace {

class MeasuringTape {
 public:
  MeasuringTape() = default;

  void Measure(const ::fuchsia::images::ImageInfo& value) {
    num_bytes_ += FIDL_ALIGN(32);
  }

  void Measure(const ::fuchsia::ui::gfx::AddChildCmd& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::AddLayerCmd& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::AddLightCmd& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::AddPartCmd& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::AmbientLightArgs& value) {
    num_bytes_ += FIDL_ALIGN(4);
  }

  void Measure(const ::fuchsia::ui::gfx::BindMeshBuffersCmd& value) {
    num_bytes_ += FIDL_ALIGN(88);
  }

  void Measure(const ::fuchsia::ui::gfx::BoundingBox& value) {
    num_bytes_ += FIDL_ALIGN(24);
  }

  void Measure(const ::fuchsia::ui::gfx::BufferArgs& value) {
    num_bytes_ += FIDL_ALIGN(12);
  }

  void Measure(const ::fuchsia::ui::gfx::CameraArgs& value) {
    num_bytes_ += FIDL_ALIGN(4);
  }

  void Measure(const ::fuchsia::ui::gfx::CircleArgs& value) {
    num_bytes_ += FIDL_ALIGN(24);
    MeasureOutOfLine(value);
  }

  void MeasureOutOfLine(const ::fuchsia::ui::gfx::CircleArgs& value) {
    MeasureOutOfLine(value.radius);
  }

  void Measure(const ::fuchsia::ui::gfx::ClipNodeArgs& value) {
    num_bytes_ += FIDL_ALIGN(4);
  }

  void Measure(const ::fuchsia::ui::gfx::ColorRgb& value) {
    num_bytes_ += FIDL_ALIGN(12);
  }

  void Measure(const ::fuchsia::ui::gfx::ColorRgbValue& value) {
    num_bytes_ += FIDL_ALIGN(16);
  }

  void Measure(const ::fuchsia::ui::gfx::ColorRgba& value) {
    num_bytes_ += FIDL_ALIGN(4);
  }

  void Measure(const ::fuchsia::ui::gfx::ColorRgbaValue& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::Command& value) {
    num_bytes_ += 24;
    MeasureOutOfLine(value);
  }

  void MeasureOutOfLine(const ::fuchsia::ui::gfx::Command& value) {
    switch (value.Which()) {
      case ::fuchsia::ui::gfx::Command::Tag::kAddChild: {
        __attribute__((unused)) auto const& _add_child = value.add_child();
        Measure(_add_child);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kAddLayer: {
        __attribute__((unused)) auto const& _add_layer = value.add_layer();
        Measure(_add_layer);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kAddLight: {
        __attribute__((unused)) auto const& _add_light = value.add_light();
        Measure(_add_light);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kAddPart: {
        __attribute__((unused)) auto const& _add_part = value.add_part();
        Measure(_add_part);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kBindMeshBuffers: {
        __attribute__((unused)) auto const& _bind_mesh_buffers = value.bind_mesh_buffers();
        Measure(_bind_mesh_buffers);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kCreateResource: {
        __attribute__((unused)) auto const& _create_resource = value.create_resource();
        Measure(_create_resource);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kDetach: {
        __attribute__((unused)) auto const& _detach = value.detach();
        Measure(_detach);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kDetachChildren: {
        __attribute__((unused)) auto const& _detach_children = value.detach_children();
        Measure(_detach_children);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kDetachLight: {
        __attribute__((unused)) auto const& _detach_light = value.detach_light();
        Measure(_detach_light);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kDetachLights: {
        __attribute__((unused)) auto const& _detach_lights = value.detach_lights();
        Measure(_detach_lights);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kExportResource: {
        __attribute__((unused)) auto const& _export_resource = value.export_resource();
        Measure(_export_resource);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kImportResource: {
        __attribute__((unused)) auto const& _import_resource = value.import_resource();
        Measure(_import_resource);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kReleaseResource: {
        __attribute__((unused)) auto const& _release_resource = value.release_resource();
        Measure(_release_resource);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kRemoveAllLayers: {
        __attribute__((unused)) auto const& _remove_all_layers = value.remove_all_layers();
        Measure(_remove_all_layers);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kRemoveLayer: {
        __attribute__((unused)) auto const& _remove_layer = value.remove_layer();
        Measure(_remove_layer);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kScene_AddAmbientLight: {
        __attribute__((unused)) auto const& _scene__add_ambient_light = value.scene__add_ambient_light();
        Measure(_scene__add_ambient_light);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kScene_AddDirectionalLight: {
        __attribute__((unused)) auto const& _scene__add_directional_light = value.scene__add_directional_light();
        Measure(_scene__add_directional_light);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kScene_AddPointLight: {
        __attribute__((unused)) auto const& _scene__add_point_light = value.scene__add_point_light();
        Measure(_scene__add_point_light);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSendSizeChangeHintHack: {
        __attribute__((unused)) auto const& _send_size_change_hint_hack = value.send_size_change_hint_hack();
        Measure(_send_size_change_hint_hack);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetAnchor: {
        __attribute__((unused)) auto const& _set_anchor = value.set_anchor();
        Measure(_set_anchor);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetCamera: {
        __attribute__((unused)) auto const& _set_camera = value.set_camera();
        Measure(_set_camera);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetCameraClipSpaceTransform: {
        __attribute__((unused)) auto const& _set_camera_clip_space_transform = value.set_camera_clip_space_transform();
        Measure(_set_camera_clip_space_transform);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetCameraPoseBuffer: {
        __attribute__((unused)) auto const& _set_camera_pose_buffer = value.set_camera_pose_buffer();
        Measure(_set_camera_pose_buffer);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetCameraProjection: {
        __attribute__((unused)) auto const& _set_camera_projection = value.set_camera_projection();
        Measure(_set_camera_projection);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetCameraTransform: {
        __attribute__((unused)) auto const& _set_camera_transform = value.set_camera_transform();
        Measure(_set_camera_transform);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetClip: {
        __attribute__((unused)) auto const& _set_clip = value.set_clip();
        Measure(_set_clip);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetClipPlanes: {
        __attribute__((unused)) auto const& _set_clip_planes = value.set_clip_planes();
        Measure(_set_clip_planes);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetColor: {
        __attribute__((unused)) auto const& _set_color = value.set_color();
        Measure(_set_color);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetDisableClipping: {
        __attribute__((unused)) auto const& _set_disable_clipping = value.set_disable_clipping();
        Measure(_set_disable_clipping);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetDisplayColorConversion: {
        __attribute__((unused)) auto const& _set_display_color_conversion = value.set_display_color_conversion();
        Measure(_set_display_color_conversion);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetDisplayMinimumRgb: {
        __attribute__((unused)) auto const& _set_display_minimum_rgb = value.set_display_minimum_rgb();
        Measure(_set_display_minimum_rgb);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetDisplayRotation: {
        __attribute__((unused)) auto const& _set_display_rotation = value.set_display_rotation();
        Measure(_set_display_rotation);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetEnableViewDebugBounds: {
        __attribute__((unused)) auto const& _set_enable_view_debug_bounds = value.set_enable_view_debug_bounds();
        Measure(_set_enable_view_debug_bounds);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetEventMask: {
        __attribute__((unused)) auto const& _set_event_mask = value.set_event_mask();
        Measure(_set_event_mask);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetHitTestBehavior: {
        __attribute__((unused)) auto const& _set_hit_test_behavior = value.set_hit_test_behavior();
        Measure(_set_hit_test_behavior);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetImportFocus: {
        __attribute__((unused)) auto const& _set_import_focus = value.set_import_focus();
        Measure(_set_import_focus);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetLabel: {
        __attribute__((unused)) auto const& _set_label = value.set_label();
        Measure(_set_label);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetLayerStack: {
        __attribute__((unused)) auto const& _set_layer_stack = value.set_layer_stack();
        Measure(_set_layer_stack);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetLightColor: {
        __attribute__((unused)) auto const& _set_light_color = value.set_light_color();
        Measure(_set_light_color);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetLightDirection: {
        __attribute__((unused)) auto const& _set_light_direction = value.set_light_direction();
        Measure(_set_light_direction);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetMaterial: {
        __attribute__((unused)) auto const& _set_material = value.set_material();
        Measure(_set_material);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetOpacity: {
        __attribute__((unused)) auto const& _set_opacity = value.set_opacity();
        Measure(_set_opacity);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetPointLightFalloff: {
        __attribute__((unused)) auto const& _set_point_light_falloff = value.set_point_light_falloff();
        Measure(_set_point_light_falloff);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetPointLightPosition: {
        __attribute__((unused)) auto const& _set_point_light_position = value.set_point_light_position();
        Measure(_set_point_light_position);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetRenderer: {
        __attribute__((unused)) auto const& _set_renderer = value.set_renderer();
        Measure(_set_renderer);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetRendererParam: {
        __attribute__((unused)) auto const& _set_renderer_param = value.set_renderer_param();
        Measure(_set_renderer_param);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetRotation: {
        __attribute__((unused)) auto const& _set_rotation = value.set_rotation();
        Measure(_set_rotation);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetScale: {
        __attribute__((unused)) auto const& _set_scale = value.set_scale();
        Measure(_set_scale);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetShape: {
        __attribute__((unused)) auto const& _set_shape = value.set_shape();
        Measure(_set_shape);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetSize: {
        __attribute__((unused)) auto const& _set_size = value.set_size();
        Measure(_set_size);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetStereoCameraProjection: {
        __attribute__((unused)) auto const& _set_stereo_camera_projection = value.set_stereo_camera_projection();
        Measure(_set_stereo_camera_projection);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetTag: {
        __attribute__((unused)) auto const& _set_tag = value.set_tag();
        Measure(_set_tag);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetTexture: {
        __attribute__((unused)) auto const& _set_texture = value.set_texture();
        Measure(_set_texture);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetTranslation: {
        __attribute__((unused)) auto const& _set_translation = value.set_translation();
        Measure(_set_translation);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetViewHolderBoundsColor: {
        __attribute__((unused)) auto const& _set_view_holder_bounds_color = value.set_view_holder_bounds_color();
        Measure(_set_view_holder_bounds_color);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kSetViewProperties: {
        __attribute__((unused)) auto const& _set_view_properties = value.set_view_properties();
        Measure(_set_view_properties);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::kTakeSnapshotCmd: {
        __attribute__((unused)) auto const& _take_snapshot_cmd = value.take_snapshot_cmd();
        Measure(_take_snapshot_cmd);
        break;
      }
      case ::fuchsia::ui::gfx::Command::Tag::Invalid: {
        MaxOut();
        break;
      }
    }
  }

  void Measure(const ::fuchsia::ui::gfx::CompositorArgs& value) {
    num_bytes_ += FIDL_ALIGN(4);
  }

  void Measure(const ::fuchsia::ui::gfx::CreateResourceCmd& value) {
    num_bytes_ += FIDL_ALIGN(32);
    MeasureOutOfLine(value);
  }

  void MeasureOutOfLine(const ::fuchsia::ui::gfx::CreateResourceCmd& value) {
    MeasureOutOfLine(value.resource);
  }

  void Measure(const ::fuchsia::ui::gfx::DetachChildrenCmd& value) {
    num_bytes_ += FIDL_ALIGN(4);
  }

  void Measure(const ::fuchsia::ui::gfx::DetachCmd& value) {
    num_bytes_ += FIDL_ALIGN(4);
  }

  void Measure(const ::fuchsia::ui::gfx::DetachLightCmd& value) {
    num_bytes_ += FIDL_ALIGN(4);
  }

  void Measure(const ::fuchsia::ui::gfx::DetachLightsCmd& value) {
    num_bytes_ += FIDL_ALIGN(4);
  }

  void Measure(const ::fuchsia::ui::gfx::DirectionalLightArgs& value) {
    num_bytes_ += FIDL_ALIGN(4);
  }

  void Measure(const ::fuchsia::ui::gfx::DisplayCompositorArgs& value) {
    num_bytes_ += FIDL_ALIGN(4);
  }

  void Measure(const ::fuchsia::ui::gfx::EntityNodeArgs& value) {
    num_bytes_ += FIDL_ALIGN(4);
  }

  void Measure(const ::fuchsia::ui::gfx::ExportResourceCmdDeprecated& value) {
    num_bytes_ += FIDL_ALIGN(8);
    MeasureHandles(value);
  }

  void MeasureHandles(const ::fuchsia::ui::gfx::ExportResourceCmdDeprecated& value) {
    num_handles_ += 1;
  }

  void Measure(const ::fuchsia::ui::gfx::FactoredTransform& value) {
    num_bytes_ += FIDL_ALIGN(52);
  }

  void Measure(const ::fuchsia::ui::gfx::FloatValue& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::ImageArgs& value) {
    num_bytes_ += FIDL_ALIGN(40);
  }

  void Measure(const ::fuchsia::ui::gfx::ImagePipe2Args& value) {
    num_bytes_ += FIDL_ALIGN(4);
    MeasureHandles(value);
  }

  void MeasureHandles(const ::fuchsia::ui::gfx::ImagePipe2Args& value) {
    num_handles_ += 1;
  }

  void Measure(const ::fuchsia::ui::gfx::ImagePipeArgs& value) {
    num_bytes_ += FIDL_ALIGN(4);
    MeasureHandles(value);
  }

  void MeasureHandles(const ::fuchsia::ui::gfx::ImagePipeArgs& value) {
    num_handles_ += 1;
  }

  void Measure(const ::fuchsia::ui::gfx::ImagePipeCompositorArgs& value) {
    num_bytes_ += FIDL_ALIGN(4);
    MeasureHandles(value);
  }

  void MeasureHandles(const ::fuchsia::ui::gfx::ImagePipeCompositorArgs& value) {
    num_handles_ += 1;
  }

  void Measure(const ::fuchsia::ui::gfx::ImportResourceCmdDeprecated& value) {
    num_bytes_ += FIDL_ALIGN(12);
    MeasureHandles(value);
  }

  void MeasureHandles(const ::fuchsia::ui::gfx::ImportResourceCmdDeprecated& value) {
    num_handles_ += 1;
  }

  void Measure(const ::fuchsia::ui::gfx::LayerArgs& value) {
    num_bytes_ += FIDL_ALIGN(4);
  }

  void Measure(const ::fuchsia::ui::gfx::LayerStackArgs& value) {
    num_bytes_ += FIDL_ALIGN(4);
  }

  void Measure(const ::fuchsia::ui::gfx::MaterialArgs& value) {
    num_bytes_ += FIDL_ALIGN(4);
  }

  void Measure(const ::fuchsia::ui::gfx::Matrix4Value& value) {
    num_bytes_ += FIDL_ALIGN(68);
  }

  void Measure(const ::fuchsia::ui::gfx::MemoryArgs& value) {
    num_bytes_ += FIDL_ALIGN(24);
    MeasureHandles(value);
  }

  void MeasureHandles(const ::fuchsia::ui::gfx::MemoryArgs& value) {
    num_handles_ += 1;
  }

  void Measure(const ::fuchsia::ui::gfx::MeshArgs& value) {
    num_bytes_ += FIDL_ALIGN(1);
  }

  void Measure(const ::fuchsia::ui::gfx::MeshVertexFormat& value) {
    num_bytes_ += FIDL_ALIGN(12);
  }

  void Measure(const ::fuchsia::ui::gfx::OpacityNodeArgsHACK& value) {
    num_bytes_ += FIDL_ALIGN(4);
  }

  void Measure(const ::fuchsia::ui::gfx::PointLightArgs& value) {
    num_bytes_ += FIDL_ALIGN(4);
  }

  void Measure(const ::fuchsia::ui::gfx::Quaternion& value) {
    num_bytes_ += FIDL_ALIGN(16);
  }

  void Measure(const ::fuchsia::ui::gfx::QuaternionValue& value) {
    num_bytes_ += FIDL_ALIGN(20);
  }

  void Measure(const ::fuchsia::ui::gfx::RectangleArgs& value) {
    num_bytes_ += FIDL_ALIGN(48);
    MeasureOutOfLine(value);
  }

  void MeasureOutOfLine(const ::fuchsia::ui::gfx::RectangleArgs& value) {
    MeasureOutOfLine(value.width);
    MeasureOutOfLine(value.height);
  }

  void Measure(const ::fuchsia::ui::gfx::ReleaseResourceCmd& value) {
    num_bytes_ += FIDL_ALIGN(4);
  }

  void Measure(const ::fuchsia::ui::gfx::RemoveAllLayersCmd& value) {
    num_bytes_ += FIDL_ALIGN(4);
  }

  void Measure(const ::fuchsia::ui::gfx::RemoveLayerCmd& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::RendererArgs& value) {
    num_bytes_ += FIDL_ALIGN(4);
  }

  void Measure(const ::fuchsia::ui::gfx::RendererParam& value) {
    num_bytes_ += 24;
    MeasureOutOfLine(value);
  }

  void MeasureOutOfLine(const ::fuchsia::ui::gfx::RendererParam& value) {
    switch (value.Which()) {
      case ::fuchsia::ui::gfx::RendererParam::Tag::kEnableDebugging: {
        __attribute__((unused)) auto const& _enable_debugging = value.enable_debugging();
        num_bytes_ += 8;
        break;
      }
      case ::fuchsia::ui::gfx::RendererParam::Tag::kReserved: {
        __attribute__((unused)) auto const& _reserved = value.reserved();
        num_bytes_ += 8;
        break;
      }
      case ::fuchsia::ui::gfx::RendererParam::Tag::kShadowTechnique: {
        __attribute__((unused)) auto const& _shadow_technique = value.shadow_technique();
        num_bytes_ += 8;
        break;
      }
      case ::fuchsia::ui::gfx::RendererParam::Tag::Invalid: {
        MaxOut();
        break;
      }
    }
  }

  void Measure(const ::fuchsia::ui::gfx::ResourceArgs& value) {
    num_bytes_ += 24;
    MeasureOutOfLine(value);
  }

  void MeasureOutOfLine(const ::fuchsia::ui::gfx::ResourceArgs& value) {
    switch (value.Which()) {
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kAmbientLight: {
        __attribute__((unused)) auto const& _ambient_light = value.ambient_light();
        Measure(_ambient_light);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kBuffer: {
        __attribute__((unused)) auto const& _buffer = value.buffer();
        Measure(_buffer);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kCamera: {
        __attribute__((unused)) auto const& _camera = value.camera();
        Measure(_camera);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kCircle: {
        __attribute__((unused)) auto const& _circle = value.circle();
        Measure(_circle);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kClipNode: {
        __attribute__((unused)) auto const& _clip_node = value.clip_node();
        Measure(_clip_node);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kCompositor: {
        __attribute__((unused)) auto const& _compositor = value.compositor();
        Measure(_compositor);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kDirectionalLight: {
        __attribute__((unused)) auto const& _directional_light = value.directional_light();
        Measure(_directional_light);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kDisplayCompositor: {
        __attribute__((unused)) auto const& _display_compositor = value.display_compositor();
        Measure(_display_compositor);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kEntityNode: {
        __attribute__((unused)) auto const& _entity_node = value.entity_node();
        Measure(_entity_node);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kImage: {
        __attribute__((unused)) auto const& _image = value.image();
        Measure(_image);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kImagePipe: {
        __attribute__((unused)) auto const& _image_pipe = value.image_pipe();
        Measure(_image_pipe);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kImagePipe2: {
        __attribute__((unused)) auto const& _image_pipe2 = value.image_pipe2();
        Measure(_image_pipe2);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kImagePipeCompositor: {
        __attribute__((unused)) auto const& _image_pipe_compositor = value.image_pipe_compositor();
        Measure(_image_pipe_compositor);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kLayer: {
        __attribute__((unused)) auto const& _layer = value.layer();
        Measure(_layer);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kLayerStack: {
        __attribute__((unused)) auto const& _layer_stack = value.layer_stack();
        Measure(_layer_stack);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kMaterial: {
        __attribute__((unused)) auto const& _material = value.material();
        Measure(_material);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kMemory: {
        __attribute__((unused)) auto const& _memory = value.memory();
        Measure(_memory);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kMesh: {
        __attribute__((unused)) auto const& _mesh = value.mesh();
        Measure(_mesh);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kOpacityNode: {
        __attribute__((unused)) auto const& _opacity_node = value.opacity_node();
        Measure(_opacity_node);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kPointLight: {
        __attribute__((unused)) auto const& _point_light = value.point_light();
        Measure(_point_light);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kRectangle: {
        __attribute__((unused)) auto const& _rectangle = value.rectangle();
        Measure(_rectangle);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kRenderer: {
        __attribute__((unused)) auto const& _renderer = value.renderer();
        Measure(_renderer);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kRoundedRectangle: {
        __attribute__((unused)) auto const& _rounded_rectangle = value.rounded_rectangle();
        Measure(_rounded_rectangle);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kScene: {
        __attribute__((unused)) auto const& _scene = value.scene();
        Measure(_scene);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kShapeNode: {
        __attribute__((unused)) auto const& _shape_node = value.shape_node();
        Measure(_shape_node);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kStereoCamera: {
        __attribute__((unused)) auto const& _stereo_camera = value.stereo_camera();
        Measure(_stereo_camera);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kVariable: {
        __attribute__((unused)) auto const& _variable = value.variable();
        Measure(_variable);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kView: {
        __attribute__((unused)) auto const& _view = value.view();
        Measure(_view);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kView3: {
        __attribute__((unused)) auto const& _view3 = value.view3();
        Measure(_view3);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::kViewHolder: {
        __attribute__((unused)) auto const& _view_holder = value.view_holder();
        Measure(_view_holder);
        break;
      }
      case ::fuchsia::ui::gfx::ResourceArgs::Tag::Invalid: {
        MaxOut();
        break;
      }
    }
  }

  void Measure(const ::fuchsia::ui::gfx::RoundedRectangleArgs& value) {
    num_bytes_ += FIDL_ALIGN(144);
    MeasureOutOfLine(value);
  }

  void MeasureOutOfLine(const ::fuchsia::ui::gfx::RoundedRectangleArgs& value) {
    MeasureOutOfLine(value.width);
    MeasureOutOfLine(value.height);
    MeasureOutOfLine(value.top_left_radius);
    MeasureOutOfLine(value.top_right_radius);
    MeasureOutOfLine(value.bottom_right_radius);
    MeasureOutOfLine(value.bottom_left_radius);
  }

  void Measure(const ::fuchsia::ui::gfx::SceneAddAmbientLightCmd& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::SceneAddDirectionalLightCmd& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::SceneAddPointLightCmd& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::SceneArgs& value) {
    num_bytes_ += FIDL_ALIGN(4);
  }

  void Measure(const ::fuchsia::ui::gfx::SendSizeChangeHintCmdHACK& value) {
    num_bytes_ += FIDL_ALIGN(12);
  }

  void Measure(const ::fuchsia::ui::gfx::SetAnchorCmd& value) {
    num_bytes_ += FIDL_ALIGN(20);
  }

  void Measure(const ::fuchsia::ui::gfx::SetCameraClipSpaceTransformCmd& value) {
    num_bytes_ += FIDL_ALIGN(16);
  }

  void Measure(const ::fuchsia::ui::gfx::SetCameraCmd& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::SetCameraPoseBufferCmd& value) {
    num_bytes_ += FIDL_ALIGN(32);
  }

  void Measure(const ::fuchsia::ui::gfx::SetCameraProjectionCmd& value) {
    num_bytes_ += FIDL_ALIGN(12);
  }

  void Measure(const ::fuchsia::ui::gfx::SetCameraTransformCmd& value) {
    num_bytes_ += FIDL_ALIGN(52);
  }

  void Measure(const ::fuchsia::ui::gfx::SetClipCmd& value) {
    num_bytes_ += FIDL_ALIGN(12);
  }

  void Measure(const ::fuchsia::ui::gfx::SetClipPlanesCmd& value) {
    num_bytes_ += FIDL_ALIGN(24);
    MeasureOutOfLine(value);
  }

  void MeasureOutOfLine(const ::fuchsia::ui::gfx::SetClipPlanesCmd& value) {
    num_bytes_ += FIDL_ALIGN(value.clip_planes.size() * 16);
  }

  void Measure(const ::fuchsia::ui::gfx::SetColorCmd& value) {
    num_bytes_ += FIDL_ALIGN(12);
  }

  void Measure(const ::fuchsia::ui::gfx::SetDisableClippingCmd& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::SetDisplayColorConversionCmdHACK& value) {
    num_bytes_ += FIDL_ALIGN(64);
  }

  void Measure(const ::fuchsia::ui::gfx::SetDisplayMinimumRgbCmdHACK& value) {
    num_bytes_ += FIDL_ALIGN(1);
  }

  void Measure(const ::fuchsia::ui::gfx::SetDisplayRotationCmdHACK& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::SetEnableDebugViewBoundsCmd& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::SetEventMaskCmd& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::SetHitTestBehaviorCmd& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::SetImportFocusCmdDEPRECATED& value) {
    num_bytes_ += FIDL_ALIGN(1);
  }

  void Measure(const ::fuchsia::ui::gfx::SetLabelCmd& value) {
    num_bytes_ += FIDL_ALIGN(24);
    MeasureOutOfLine(value);
  }

  void MeasureOutOfLine(const ::fuchsia::ui::gfx::SetLabelCmd& value) {
    num_bytes_ += FIDL_ALIGN(value.label.length());
  }

  void Measure(const ::fuchsia::ui::gfx::SetLayerStackCmd& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::SetLightColorCmd& value) {
    num_bytes_ += FIDL_ALIGN(20);
  }

  void Measure(const ::fuchsia::ui::gfx::SetLightDirectionCmd& value) {
    num_bytes_ += FIDL_ALIGN(20);
  }

  void Measure(const ::fuchsia::ui::gfx::SetMaterialCmd& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::SetOpacityCmd& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::SetPointLightFalloffCmd& value) {
    num_bytes_ += FIDL_ALIGN(12);
  }

  void Measure(const ::fuchsia::ui::gfx::SetPointLightPositionCmd& value) {
    num_bytes_ += FIDL_ALIGN(20);
  }

  void Measure(const ::fuchsia::ui::gfx::SetRendererCmd& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::SetRendererParamCmd& value) {
    num_bytes_ += FIDL_ALIGN(32);
    MeasureOutOfLine(value);
  }

  void MeasureOutOfLine(const ::fuchsia::ui::gfx::SetRendererParamCmd& value) {
    MeasureOutOfLine(value.param);
  }

  void Measure(const ::fuchsia::ui::gfx::SetRotationCmd& value) {
    num_bytes_ += FIDL_ALIGN(24);
  }

  void Measure(const ::fuchsia::ui::gfx::SetScaleCmd& value) {
    num_bytes_ += FIDL_ALIGN(20);
  }

  void Measure(const ::fuchsia::ui::gfx::SetShapeCmd& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::SetSizeCmd& value) {
    num_bytes_ += FIDL_ALIGN(16);
  }

  void Measure(const ::fuchsia::ui::gfx::SetStereoCameraProjectionCmd& value) {
    num_bytes_ += FIDL_ALIGN(140);
  }

  void Measure(const ::fuchsia::ui::gfx::SetTagCmd& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::SetTextureCmd& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::SetTranslationCmd& value) {
    num_bytes_ += FIDL_ALIGN(20);
  }

  void Measure(const ::fuchsia::ui::gfx::SetViewHolderBoundsColorCmd& value) {
    num_bytes_ += FIDL_ALIGN(20);
  }

  void Measure(const ::fuchsia::ui::gfx::SetViewPropertiesCmd& value) {
    num_bytes_ += FIDL_ALIGN(56);
  }

  void Measure(const ::fuchsia::ui::gfx::ShapeNodeArgs& value) {
    num_bytes_ += FIDL_ALIGN(4);
  }

  void Measure(const ::fuchsia::ui::gfx::StereoCameraArgs& value) {
    num_bytes_ += FIDL_ALIGN(4);
  }

  void Measure(const ::fuchsia::ui::gfx::TakeSnapshotCmdDEPRECATED& value) {
    num_bytes_ += FIDL_ALIGN(8);
    MeasureHandles(value);
  }

  void MeasureHandles(const ::fuchsia::ui::gfx::TakeSnapshotCmdDEPRECATED& value) {
    num_handles_ += 1;
  }

  void Measure(const ::fuchsia::ui::gfx::Value& value) {
    num_bytes_ += 24;
    MeasureOutOfLine(value);
  }

  void MeasureOutOfLine(const ::fuchsia::ui::gfx::Value& value) {
    switch (value.Which()) {
      case ::fuchsia::ui::gfx::Value::Tag::kColorRgb: {
        __attribute__((unused)) auto const& _color_rgb = value.color_rgb();
        Measure(_color_rgb);
        break;
      }
      case ::fuchsia::ui::gfx::Value::Tag::kColorRgba: {
        __attribute__((unused)) auto const& _color_rgba = value.color_rgba();
        Measure(_color_rgba);
        break;
      }
      case ::fuchsia::ui::gfx::Value::Tag::kDegrees: {
        __attribute__((unused)) auto const& _degrees = value.degrees();
        num_bytes_ += 8;
        break;
      }
      case ::fuchsia::ui::gfx::Value::Tag::kMatrix4x4: {
        __attribute__((unused)) auto const& _matrix4x4 = value.matrix4x4();
        Measure(_matrix4x4);
        break;
      }
      case ::fuchsia::ui::gfx::Value::Tag::kQuaternion: {
        __attribute__((unused)) auto const& _quaternion = value.quaternion();
        Measure(_quaternion);
        break;
      }
      case ::fuchsia::ui::gfx::Value::Tag::kTransform: {
        __attribute__((unused)) auto const& _transform = value.transform();
        Measure(_transform);
        break;
      }
      case ::fuchsia::ui::gfx::Value::Tag::kVariableId: {
        __attribute__((unused)) auto const& _variable_id = value.variable_id();
        num_bytes_ += 8;
        break;
      }
      case ::fuchsia::ui::gfx::Value::Tag::kVector1: {
        __attribute__((unused)) auto const& _vector1 = value.vector1();
        num_bytes_ += 8;
        break;
      }
      case ::fuchsia::ui::gfx::Value::Tag::kVector2: {
        __attribute__((unused)) auto const& _vector2 = value.vector2();
        Measure(_vector2);
        break;
      }
      case ::fuchsia::ui::gfx::Value::Tag::kVector3: {
        __attribute__((unused)) auto const& _vector3 = value.vector3();
        Measure(_vector3);
        break;
      }
      case ::fuchsia::ui::gfx::Value::Tag::kVector4: {
        __attribute__((unused)) auto const& _vector4 = value.vector4();
        Measure(_vector4);
        break;
      }
      case ::fuchsia::ui::gfx::Value::Tag::Invalid: {
        MaxOut();
        break;
      }
    }
  }

  void Measure(const ::fuchsia::ui::gfx::VariableArgs& value) {
    num_bytes_ += FIDL_ALIGN(32);
    MeasureOutOfLine(value);
  }

  void MeasureOutOfLine(const ::fuchsia::ui::gfx::VariableArgs& value) {
    MeasureOutOfLine(value.initial_value);
  }

  void Measure(const ::fuchsia::ui::gfx::Vector2Value& value) {
    num_bytes_ += FIDL_ALIGN(12);
  }

  void Measure(const ::fuchsia::ui::gfx::Vector3Value& value) {
    num_bytes_ += FIDL_ALIGN(16);
  }

  void Measure(const ::fuchsia::ui::gfx::ViewArgs& value) {
    num_bytes_ += FIDL_ALIGN(24);
    MeasureHandles(value);
    MeasureOutOfLine(value);
  }

  void MeasureOutOfLine(const ::fuchsia::ui::gfx::ViewArgs& value) {
    if (value.debug_name) {
      num_bytes_ += FIDL_ALIGN(value.debug_name->length());
    }
  }

  void MeasureHandles(const ::fuchsia::ui::gfx::ViewArgs& value) {
    MeasureHandles(value.token);
  }

  void Measure(const ::fuchsia::ui::gfx::ViewArgs3& value) {
    num_bytes_ += FIDL_ALIGN(32);
    MeasureHandles(value);
    MeasureOutOfLine(value);
  }

  void MeasureOutOfLine(const ::fuchsia::ui::gfx::ViewArgs3& value) {
    if (value.debug_name) {
      num_bytes_ += FIDL_ALIGN(value.debug_name->length());
    }
  }

  void MeasureHandles(const ::fuchsia::ui::gfx::ViewArgs3& value) {
    MeasureHandles(value.token);
    MeasureHandles(value.control_ref);
    MeasureHandles(value.view_ref);
  }

  void Measure(const ::fuchsia::ui::gfx::ViewHolderArgs& value) {
    num_bytes_ += FIDL_ALIGN(24);
    MeasureHandles(value);
    MeasureOutOfLine(value);
  }

  void MeasureOutOfLine(const ::fuchsia::ui::gfx::ViewHolderArgs& value) {
    if (value.debug_name) {
      num_bytes_ += FIDL_ALIGN(value.debug_name->length());
    }
  }

  void MeasureHandles(const ::fuchsia::ui::gfx::ViewHolderArgs& value) {
    MeasureHandles(value.token);
  }

  void Measure(const ::fuchsia::ui::gfx::ViewProperties& value) {
    num_bytes_ += FIDL_ALIGN(52);
  }

  void Measure(const ::fuchsia::ui::gfx::mat4& value) {
    num_bytes_ += FIDL_ALIGN(64);
  }

  void Measure(const ::fuchsia::ui::gfx::vec2& value) {
    num_bytes_ += FIDL_ALIGN(8);
  }

  void Measure(const ::fuchsia::ui::gfx::vec3& value) {
    num_bytes_ += FIDL_ALIGN(12);
  }

  void Measure(const ::fuchsia::ui::gfx::vec4& value) {
    num_bytes_ += FIDL_ALIGN(16);
  }

  void Measure(const ::fuchsia::ui::input::Command& value) {
    num_bytes_ += 24;
    MeasureOutOfLine(value);
  }

  void MeasureOutOfLine(const ::fuchsia::ui::input::Command& value) {
    switch (value.Which()) {
      case ::fuchsia::ui::input::Command::Tag::kSendKeyboardInput: {
        __attribute__((unused)) auto const& _send_keyboard_input = value.send_keyboard_input();
        Measure(_send_keyboard_input);
        break;
      }
      case ::fuchsia::ui::input::Command::Tag::kSendPointerInput: {
        __attribute__((unused)) auto const& _send_pointer_input = value.send_pointer_input();
        Measure(_send_pointer_input);
        break;
      }
      case ::fuchsia::ui::input::Command::Tag::kSetHardKeyboardDelivery: {
        __attribute__((unused)) auto const& _set_hard_keyboard_delivery = value.set_hard_keyboard_delivery();
        Measure(_set_hard_keyboard_delivery);
        break;
      }
      case ::fuchsia::ui::input::Command::Tag::kSetParallelDispatch: {
        __attribute__((unused)) auto const& _set_parallel_dispatch = value.set_parallel_dispatch();
        Measure(_set_parallel_dispatch);
        break;
      }
      case ::fuchsia::ui::input::Command::Tag::Invalid: {
        MaxOut();
        break;
      }
    }
  }

  void Measure(const ::fuchsia::ui::input::KeyboardEvent& value) {
    num_bytes_ += FIDL_ALIGN(32);
  }

  void Measure(const ::fuchsia::ui::input::PointerEvent& value) {
    num_bytes_ += FIDL_ALIGN(48);
  }

  void Measure(const ::fuchsia::ui::input::SendKeyboardInputCmd& value) {
    num_bytes_ += FIDL_ALIGN(40);
  }

  void Measure(const ::fuchsia::ui::input::SendPointerInputCmd& value) {
    num_bytes_ += FIDL_ALIGN(56);
  }

  void Measure(const ::fuchsia::ui::input::SetHardKeyboardDeliveryCmd& value) {
    num_bytes_ += FIDL_ALIGN(1);
  }

  void Measure(const ::fuchsia::ui::input::SetParallelDispatchCmd& value) {
    num_bytes_ += FIDL_ALIGN(1);
  }

  void Measure(const ::fuchsia::ui::scenic::Command& value) {
    num_bytes_ += 24;
    MeasureOutOfLine(value);
  }

  void MeasureOutOfLine(const ::fuchsia::ui::scenic::Command& value) {
    switch (value.Which()) {
      case ::fuchsia::ui::scenic::Command::Tag::kGfx: {
        __attribute__((unused)) auto const& _gfx = value.gfx();
        Measure(_gfx);
        break;
      }
      case ::fuchsia::ui::scenic::Command::Tag::kInput: {
        __attribute__((unused)) auto const& _input = value.input();
        Measure(_input);
        break;
      }
      case ::fuchsia::ui::scenic::Command::Tag::kViews: {
        __attribute__((unused)) auto const& _views = value.views();
        Measure(_views);
        break;
      }
      case ::fuchsia::ui::scenic::Command::Tag::Invalid: {
        MaxOut();
        break;
      }
    }
  }

  void Measure(const ::fuchsia::ui::views::Command& value) {
    num_bytes_ += 24;
    MeasureOutOfLine(value);
  }

  void MeasureOutOfLine(const ::fuchsia::ui::views::Command& value) {
    switch (value.Which()) {
      case ::fuchsia::ui::views::Command::Tag::kEmpty: {
        __attribute__((unused)) auto const& _empty = value.empty();
        num_bytes_ += 8;
        break;
      }
      case ::fuchsia::ui::views::Command::Tag::Invalid: {
        MaxOut();
        break;
      }
    }
  }

  void Measure(const ::fuchsia::ui::views::ViewHolderToken& value) {
    num_bytes_ += FIDL_ALIGN(4);
    MeasureHandles(value);
  }

  void MeasureHandles(const ::fuchsia::ui::views::ViewHolderToken& value) {
    num_handles_ += 1;
  }

  void Measure(const ::fuchsia::ui::views::ViewRef& value) {
    num_bytes_ += FIDL_ALIGN(4);
    MeasureHandles(value);
  }

  void MeasureHandles(const ::fuchsia::ui::views::ViewRef& value) {
    num_handles_ += 1;
  }

  void Measure(const ::fuchsia::ui::views::ViewRefControl& value) {
    num_bytes_ += FIDL_ALIGN(4);
    MeasureHandles(value);
  }

  void MeasureHandles(const ::fuchsia::ui::views::ViewRefControl& value) {
    num_handles_ += 1;
  }

  void Measure(const ::fuchsia::ui::views::ViewToken& value) {
    num_bytes_ += FIDL_ALIGN(4);
    MeasureHandles(value);
  }

  void MeasureHandles(const ::fuchsia::ui::views::ViewToken& value) {
    num_handles_ += 1;
  }

  Size Done() {
    if (maxed_out_) {
      return Size(ZX_CHANNEL_MAX_MSG_BYTES, ZX_CHANNEL_MAX_MSG_HANDLES);
    }
    return Size(num_bytes_, num_handles_);
  }

private:
  void MaxOut() { maxed_out_ = true; }

  bool maxed_out_ = false;
  int64_t num_bytes_ = 0;
  int64_t num_handles_ = 0;
};

}  // namespace

Size Measure(const ::fuchsia::ui::scenic::Command& value) {
  MeasuringTape tape;
  tape.Measure(value);
  return tape.Done();
}


}  // scenic
}  // ui
}  // fuchsia
}  // measure_tape
