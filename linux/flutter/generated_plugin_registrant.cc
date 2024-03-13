//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <native_pytorch/native_pytorch_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) native_pytorch_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "NativePytorchPlugin");
  native_pytorch_plugin_register_with_registrar(native_pytorch_registrar);
}
