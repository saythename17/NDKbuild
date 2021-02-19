//
// Created by 박시온 on 2/15/21.
//

#include "com_icandothisallday2021_ndklib_NativeWrapper.h"
#include <jni.h>
#include <android/log.h>

#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG  , "libnav", __VA_ARGS__)

extern "C" JNIEXPORT jint JNICALL Java_com_icandothisallday2021_ndklib_NativeWrapper_nativeSum
(JNIEnv *env, jobject obj, jint a, jint b)
{
    return a + b;
}


extern "C" JNIEXPORT jstring JNICALL Java_com_icandothisallday2021_ndklib_NativeWrapper_nativeString(JNIEnv *env, jobject thiz) {
    return (*env).NewStringUTF("Hello from JNI !Compiled with ABI ");
}

extern "C" JNIEXPORT jfloatArray JNICALL Java_com_icandothisallday2021_ndklib_NativeWrapper_nativeArray
(JNIEnv *env, jobject obj, jfloatArray floats)
{
//    int size = env->GetArrayLength(floats);
////    jfloatArray result= (env)->NewFloatArray(size);
//    jfloatArray result = floats;
//    jfloat* test = (*env).GetFloatArrayElements(floats, NULL);
//
//    jfloat arr[size];
//    for (int i = 0; i < size; ++i) {
//        arr[i] = test[i]*2;
////        result = arr[i];
//    }
//    result = reinterpret_cast<jfloatArray>(env->GetFloatArrayElements(
//            reinterpret_cast<jfloatArray>(arr), reinterpret_cast<jboolean *>(true)));
    int size = env->GetArrayLength(floats);
    jfloatArray result = env->NewFloatArray(size);

    float* test = env->GetFloatArrayElements(floats, NULL);
    for(int i = 0; i < size; ++i){
        *(test+i) *= 2.0;
        LOGD("XXX| %d : %f",i, *(test+i));
    }


    env->SetFloatArrayRegion(result,0, size,test);

    return result;
}
