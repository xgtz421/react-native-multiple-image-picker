///
/// NitroPreviewConfig.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/JSIConverter.hpp>)
#include <NitroModules/JSIConverter.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif
#if __has_include(<NitroModules/NitroDefines.hpp>)
#include <NitroModules/NitroDefines.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

// Forward declaration of `Language` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class Language; }

#include "Language.hpp"

namespace margelo::nitro::multipleimagepicker {

  /**
   * A struct which can be represented as a JavaScript object (NitroPreviewConfig).
   */
  struct NitroPreviewConfig {
  public:
    Language language     SWIFT_PRIVATE;

  public:
    explicit NitroPreviewConfig(Language language): language(language) {}
  };

} // namespace margelo::nitro::multipleimagepicker

namespace margelo::nitro {

  using namespace margelo::nitro::multipleimagepicker;

  // C++ NitroPreviewConfig <> JS NitroPreviewConfig (object)
  template <>
  struct JSIConverter<NitroPreviewConfig> {
    static inline NitroPreviewConfig fromJSI(jsi::Runtime& runtime, const jsi::Value& arg) {
      jsi::Object obj = arg.asObject(runtime);
      return NitroPreviewConfig(
        JSIConverter<Language>::fromJSI(runtime, obj.getProperty(runtime, "language"))
      );
    }
    static inline jsi::Value toJSI(jsi::Runtime& runtime, const NitroPreviewConfig& arg) {
      jsi::Object obj(runtime);
      obj.setProperty(runtime, "language", JSIConverter<Language>::toJSI(runtime, arg.language));
      return obj;
    }
    static inline bool canConvert(jsi::Runtime& runtime, const jsi::Value& value) {
      if (!value.isObject()) {
        return false;
      }
      jsi::Object obj = value.getObject(runtime);
      if (!JSIConverter<Language>::canConvert(runtime, obj.getProperty(runtime, "language"))) return false;
      return true;
    }
  };

} // namespace margelo::nitro
