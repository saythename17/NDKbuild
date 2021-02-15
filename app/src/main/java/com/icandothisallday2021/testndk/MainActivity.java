package com.icandothisallday2021.testndk;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;

import com.icandothisallday2021.ndklib.NativeWrapper;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        NativeWrapper nativeApi = new NativeWrapper();
        int result = nativeApi.nativeSum(5,10);
        Log.i("jniTest", ": " + result);

    }
}