package com.developerworks;

public class HelloJNI {

    public native void sayHello();

    public native String getLine(String prompt);

    public native int sumArray(int[] intArray);

}
