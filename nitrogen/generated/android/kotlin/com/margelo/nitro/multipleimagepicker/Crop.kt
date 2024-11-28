///
/// Crop.kt
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

package com.margelo.nitro.multipleimagepicker

import androidx.annotation.Keep
import com.facebook.proguard.annotations.DoNotStrip
import com.margelo.nitro.core.*

/**
 * Represents the JavaScript object/struct "Crop".
 */
@DoNotStrip
@Keep
data class Crop(
  val width: Double,
  val height: Double,
  val offsetX: Double,
  val offsetY: Double,
  val aspectRatio: Double
)
