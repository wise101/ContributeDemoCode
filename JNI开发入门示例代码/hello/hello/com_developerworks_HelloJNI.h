/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_developerworks_HelloJNI */

#ifndef _Included_com_developerworks_HelloJNI
#define _Included_com_developerworks_HelloJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_developerworks_HelloJNI
 * Method:    sayHello
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_developerworks_HelloJNI_sayHello
  (JNIEnv *, jobject);

/*
 * Class:     com_developerworks_HelloJNI
 * Method:    getLine
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_developerworks_HelloJNI_getLine
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_developerworks_HelloJNI
 * Method:    sumArray
 * Signature: ([I)I
 */
JNIEXPORT jint JNICALL Java_com_developerworks_HelloJNI_sumArray
  (JNIEnv *, jobject, jintArray);

#ifdef __cplusplus
}
#endif
#endif
