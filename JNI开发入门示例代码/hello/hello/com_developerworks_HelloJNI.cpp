#include "com_developerworks_HelloJNI.h"
#include <stdio.h>
#include <string>
#include <iostream>

JNIEXPORT void JNICALL Java_com_developerworks_HelloJNI_sayHello
(JNIEnv* env, jobject obj)
{
   printf("Hello,JNI!\n");
}

JNIEXPORT jstring JNICALL Java_com_developerworks_HelloJNI_getLine
(JNIEnv* env, jobject obj, jstring prompt)
{
	const char* str;
	str = env->GetStringUTFChars(prompt, false);
	if (str == NULL) 
	{
		return NULL; /* OutOfMemoryError already thrown */
	}

	std::cout<<str<<std::endl;
	env->ReleaseStringUTFChars(prompt, str);
	char* tmpstr = "return string succeeded";
	jstring rtstr = env->NewStringUTF(tmpstr);

	return rtstr;
}

JNIEXPORT jint JNICALL Java_com_developerworks_HelloJNI_sumArray
(JNIEnv *env, jobject obj, jintArray arr)
{
	jint* carr = NULL;
	carr = env->GetIntArrayElements(arr, false);
	if (carr == NULL) 
	{
		return 0; /* exception occurred */
	}
	int size = env->GetArrayLength(arr);
	jint sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += carr[i];
	}
	env->ReleaseIntArrayElements(arr, carr, 0);
	return sum;
}
