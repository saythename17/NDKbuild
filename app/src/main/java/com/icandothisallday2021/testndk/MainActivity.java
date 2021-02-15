package com.icandothisallday2021.testndk;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;

import com.icandothisallday2021.ndklib.NativeWrapper;

public class MainActivity extends AppCompatActivity {
    TextView jniText;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        jniText = findViewById(R.id.stringJNI);

        NativeWrapper nativeApi = new NativeWrapper();
        int result = nativeApi.nativeSum(5,10);
        Log.i("jniTest", ": " + result);

        String stringFromJNI = nativeApi.nativeString();
        jniText.setText(stringFromJNI);
    }
}