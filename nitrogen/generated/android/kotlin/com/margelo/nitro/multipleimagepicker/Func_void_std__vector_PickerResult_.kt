///
/// Func_void_std__vector_PickerResult_.kt
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

package com.margelo.nitro.multipleimagepicker

import androidx.annotation.Keep
import com.facebook.jni.HybridData
import com.facebook.proguard.annotations.DoNotStrip
import com.margelo.nitro.core.*
import dalvik.annotation.optimization.FastNative

/**
 * Represents the JavaScript callback `(result: array) => void`.
 * This is implemented in C++, via a `std::function<...>`.
 */
@DoNotStrip
@Keep
@Suppress("RedundantSuppression", "ConvertSecondaryConstructorToPrimary", "RedundantUnitReturnType", "KotlinJniMissingFunction", "ClassName", "unused")
class Func_void_std__vector_PickerResult_ {
  @DoNotStrip
  @Keep
  private val mHybridData: HybridData

  @DoNotStrip
  @Keep
  private constructor(hybridData: HybridData) {
    mHybridData = hybridData
  }

  /**
   * Converts this function to a Kotlin Lambda.
   * This exists purely as syntactic sugar, and has minimal runtime overhead.
   */
  fun toLambda(): (result: Array<PickerResult>) -> Unit = this::call

  /**
   * Call the given JS callback.
   * @throws Throwable if the JS function itself throws an error, or if the JS function/runtime has already been deleted.
   */
  @FastNative
  external fun call(result: Array<PickerResult>): Unit
}
