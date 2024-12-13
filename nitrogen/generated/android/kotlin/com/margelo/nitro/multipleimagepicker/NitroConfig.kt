///
/// NitroConfig.kt
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

package com.margelo.nitro.multipleimagepicker

import androidx.annotation.Keep
import com.facebook.proguard.annotations.DoNotStrip
import com.margelo.nitro.core.*

/**
 * Represents the JavaScript object/struct "NitroConfig".
 */
@DoNotStrip
@Keep
data class NitroConfig(
  val mediaType: MediaType,
  val selectedAssets: Array<Result>,
  val selectBoxStyle: SelectBoxStyle,
  val selectMode: SelectMode,
  val numberOfColumn: Double?,
  val isPreview: Boolean?,
  val primaryColor: Double?,
  val allowedCamera: Boolean?,
  val allowSwipeToSelect: Boolean?,
  val spacing: Double?,
  val isHiddenPreviewButton: Boolean?,
  val isHiddenOriginalButton: Boolean?,
  val isShowPreviewList: Boolean?,
  val allowHapticTouchPreview: Boolean?,
  val allowedLimit: Boolean?,
  val maxVideo: Double?,
  val maxSelect: Double?,
  val maxVideoDuration: Double?,
  val minVideoDuration: Double?,
  val maxFileSize: Double?,
  val backgroundDark: Double?,
  val crop: PickerCropConfig?,
  val text: Text?,
  val language: Language,
  val theme: Theme,
  val presentation: Presentation
)
