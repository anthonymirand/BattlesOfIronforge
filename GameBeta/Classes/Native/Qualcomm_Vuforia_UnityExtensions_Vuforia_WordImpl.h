﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Vuforia.Image
struct Image_t6_79;
// Vuforia.RectangleData[]
struct RectangleDataU5BU5D_t6_141;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableImpl.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__6.h"

// Vuforia.WordImpl
struct  WordImpl_t6_140  : public TrackableImpl_t6_36
{
	// System.String Vuforia.WordImpl::mText
	String_t* ___mText_2;
	// UnityEngine.Vector2 Vuforia.WordImpl::mSize
	Vector2_t5_67  ___mSize_3;
	// Vuforia.Image Vuforia.WordImpl::mLetterMask
	Image_t6_79 * ___mLetterMask_4;
	// Vuforia.VuforiaManagerImpl/ImageHeaderData Vuforia.WordImpl::mLetterImageHeader
	ImageHeaderData_t6_107  ___mLetterImageHeader_5;
	// Vuforia.RectangleData[] Vuforia.WordImpl::mLetterBoundingBoxes
	RectangleDataU5BU5D_t6_141* ___mLetterBoundingBoxes_6;
};