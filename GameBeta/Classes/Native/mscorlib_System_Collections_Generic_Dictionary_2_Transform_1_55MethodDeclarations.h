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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>>
struct Transform_1_t1_1992;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_32.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m1_17641_gshared (Transform_1_t1_1992 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1_17641(__this, ___object, ___method, method) (( void (*) (Transform_1_t1_1992 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1_17641_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t1_1983  Transform_1_Invoke_m1_17642_gshared (Transform_1_t1_1992 * __this, int32_t ___key, TrackableResultData_t6_101  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1_17642(__this, ___key, ___value, method) (( KeyValuePair_2_t1_1983  (*) (Transform_1_t1_1992 *, int32_t, TrackableResultData_t6_101 , const MethodInfo*))Transform_1_Invoke_m1_17642_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m1_17643_gshared (Transform_1_t1_1992 * __this, int32_t ___key, TrackableResultData_t6_101  ___value, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1_17643(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1_1992 *, int32_t, TrackableResultData_t6_101 , AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m1_17643_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t1_1983  Transform_1_EndInvoke_m1_17644_gshared (Transform_1_t1_1992 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1_17644(__this, ___result, method) (( KeyValuePair_2_t1_1983  (*) (Transform_1_t1_1992 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m1_17644_gshared)(__this, ___result, method)
