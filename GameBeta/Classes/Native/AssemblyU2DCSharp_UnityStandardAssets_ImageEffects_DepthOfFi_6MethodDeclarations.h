﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated
struct DepthOfFieldDeprecated_t9_120;
// UnityEngine.RenderTexture
struct RenderTexture_t5_52;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_DepthOfFi_4.h"

// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::.ctor()
extern "C" void DepthOfFieldDeprecated__ctor_m9_767 (DepthOfFieldDeprecated_t9_120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::.cctor()
extern "C" void DepthOfFieldDeprecated__cctor_m9_768 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::CreateMaterials()
extern "C" void DepthOfFieldDeprecated_CreateMaterials_m9_769 (DepthOfFieldDeprecated_t9_120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::CheckResources()
extern "C" bool DepthOfFieldDeprecated_CheckResources_m9_770 (DepthOfFieldDeprecated_t9_120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnDisable()
extern "C" void DepthOfFieldDeprecated_OnDisable_m9_771 (DepthOfFieldDeprecated_t9_120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnEnable()
extern "C" void DepthOfFieldDeprecated_OnEnable_m9_772 (DepthOfFieldDeprecated_t9_120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::FocalDistance01(System.Single)
extern "C" float DepthOfFieldDeprecated_FocalDistance01_m9_773 (DepthOfFieldDeprecated_t9_120 * __this, float ___worldDist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::GetDividerBasedOnQuality()
extern "C" int32_t DepthOfFieldDeprecated_GetDividerBasedOnQuality_m9_774 (DepthOfFieldDeprecated_t9_120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::GetLowResolutionDividerBasedOnQuality(System.Int32)
extern "C" int32_t DepthOfFieldDeprecated_GetLowResolutionDividerBasedOnQuality_m9_775 (DepthOfFieldDeprecated_t9_120 * __this, int32_t ___baseDivider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void DepthOfFieldDeprecated_OnRenderImage_m9_776 (DepthOfFieldDeprecated_t9_120 * __this, RenderTexture_t5_52 * ___source, RenderTexture_t5_52 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::Blur(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness,System.Int32,System.Single)
extern "C" void DepthOfFieldDeprecated_Blur_m9_777 (DepthOfFieldDeprecated_t9_120 * __this, RenderTexture_t5_52 * ___from, RenderTexture_t5_52 * ___to, int32_t ___iterations, int32_t ___blurPass, float ___spread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::BlurFg(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness,System.Int32,System.Single)
extern "C" void DepthOfFieldDeprecated_BlurFg_m9_778 (DepthOfFieldDeprecated_t9_120 * __this, RenderTexture_t5_52 * ___from, RenderTexture_t5_52 * ___to, int32_t ___iterations, int32_t ___blurPass, float ___spread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::BlurHex(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32,System.Single,UnityEngine.RenderTexture)
extern "C" void DepthOfFieldDeprecated_BlurHex_m9_779 (DepthOfFieldDeprecated_t9_120 * __this, RenderTexture_t5_52 * ___from, RenderTexture_t5_52 * ___to, int32_t ___blurPass, float ___spread, RenderTexture_t5_52 * ___tmp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::Downsample(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void DepthOfFieldDeprecated_Downsample_m9_780 (DepthOfFieldDeprecated_t9_120 * __this, RenderTexture_t5_52 * ___from, RenderTexture_t5_52 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::AddBokeh(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C" void DepthOfFieldDeprecated_AddBokeh_m9_781 (DepthOfFieldDeprecated_t9_120 * __this, RenderTexture_t5_52 * ___bokehInfo, RenderTexture_t5_52 * ___tempTex, RenderTexture_t5_52 * ___finalTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::ReleaseTextures()
extern "C" void DepthOfFieldDeprecated_ReleaseTextures_m9_782 (DepthOfFieldDeprecated_t9_120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::AllocateTextures(System.Boolean,UnityEngine.RenderTexture,System.Int32,System.Int32)
extern "C" void DepthOfFieldDeprecated_AllocateTextures_m9_783 (DepthOfFieldDeprecated_t9_120 * __this, bool ___blurForeground, RenderTexture_t5_52 * ___source, int32_t ___divider, int32_t ___lowTexDivider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
