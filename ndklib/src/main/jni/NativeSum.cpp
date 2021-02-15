//
// Created by 박시온 on 2/15/21.
//

#include "com_icandothisallday2021_ndklib_NativeWrapper.h"
#include <jni.h>

extern "C" JNIEXPORT jint JNICALL Java_com_icandothisallday2021_ndklib_NativeWrapper_nativeSum
(JNIEnv *env, jobject obj, jint a, jint b)
{
    return a + b;
}


extern "C" JNIEXPORT jstring JNICALL Java_com_icandothisallday2021_ndklib_NativeWrapper_nativeString(JNIEnv *env, jobject thiz) {
    return (*env).NewStringUTF("Hello from JNI !Compiled with ABI ");
}