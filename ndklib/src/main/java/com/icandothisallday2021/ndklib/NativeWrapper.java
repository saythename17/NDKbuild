package com.icandothisallday2021.ndklib;

public class NativeWrapper {
    static {
        System.loadLibrary("ndklib");
    }
    public native int nativeSum(int a, int b);
}
