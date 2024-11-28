///
/// HybridMultipleImagePickerSpecSwift.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include "HybridMultipleImagePickerSpec.hpp"

// Forward declaration of `HybridMultipleImagePickerSpecCxx` to properly resolve imports.
namespace MultipleImagePicker { class HybridMultipleImagePickerSpecCxx; }

// Forward declaration of `NitroConfig` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct NitroConfig; }
// Forward declaration of `MediaType` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class MediaType; }
// Forward declaration of `Result` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct Result; }
// Forward declaration of `ResultType` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class ResultType; }
// Forward declaration of `Crop` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct Crop; }
// Forward declaration of `SelectBoxStyle` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class SelectBoxStyle; }
// Forward declaration of `SelectMode` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class SelectMode; }
// Forward declaration of `Presentation` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class Presentation; }
// Forward declaration of `PickerCropConfig` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct PickerCropConfig; }
// Forward declaration of `Text` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct Text; }
// Forward declaration of `Language` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class Language; }
// Forward declaration of `Theme` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class Theme; }

#include "NitroConfig.hpp"
#include "MediaType.hpp"
#include <vector>
#include "Result.hpp"
#include <string>
#include <optional>
#include "ResultType.hpp"
#include "Crop.hpp"
#include "SelectBoxStyle.hpp"
#include "SelectMode.hpp"
#include "Presentation.hpp"
#include "PickerCropConfig.hpp"
#include "Text.hpp"
#include "Language.hpp"
#include "Theme.hpp"
#include <functional>

#if __has_include(<NitroModules/HybridContext.hpp>)
#include <NitroModules/HybridContext.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

#include "MultipleImagePicker-Swift-Cxx-Umbrella.hpp"

namespace margelo::nitro::multipleimagepicker {

  /**
   * The C++ part of HybridMultipleImagePickerSpecCxx.swift.
   *
   * HybridMultipleImagePickerSpecSwift (C++) accesses HybridMultipleImagePickerSpecCxx (Swift), and might
   * contain some additional bridging code for C++ <> Swift interop.
   *
   * Since this obviously introduces an overhead, I hope at some point in
   * the future, HybridMultipleImagePickerSpecCxx can directly inherit from the C++ class HybridMultipleImagePickerSpec
   * to simplify the whole structure and memory management.
   */
  class HybridMultipleImagePickerSpecSwift: public virtual HybridMultipleImagePickerSpec {
  public:
    // Constructor from a Swift instance
    explicit HybridMultipleImagePickerSpecSwift(const MultipleImagePicker::HybridMultipleImagePickerSpecCxx& swiftPart):
      HybridObject(HybridMultipleImagePickerSpec::TAG),
      _swiftPart(swiftPart) { }

  public:
    // Get the Swift part
    inline MultipleImagePicker::HybridMultipleImagePickerSpecCxx getSwiftPart() noexcept { return _swiftPart; }

  public:
    // Get memory pressure
    inline size_t getExternalMemorySize() noexcept override {
      return _swiftPart.getMemorySize();
    }

  public:
    // Properties
    

  public:
    // Methods
    inline void openPicker(const NitroConfig& config, const std::function<void(const std::vector<Result>& /* result */)>& resolved, const std::function<void(double /* reject */)>& rejected) override {
      _swiftPart.openPicker(config, resolved, rejected);
    }

  private:
    MultipleImagePicker::HybridMultipleImagePickerSpecCxx _swiftPart;
  };

} // namespace margelo::nitro::multipleimagepicker
