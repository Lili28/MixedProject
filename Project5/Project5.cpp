// Project5.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "Project5.h"


extern "C" __declspec(dllexport) int TheAdd(int a, int b) {
	return a + b;
}

extern "C" __declspec(dllexport) int TheSub(int c, int d) {
	return c - d;
}

//// This is an example of an exported variable
//PROJECT5_API int nProject5=0;
//
//// This is an example of an exported function.
//PROJECT5_API int fnProject5(void)
//{
//    return 0;
//}
//
//// This is the constructor of a class that has been exported.
//CProject5::CProject5()
//{
//    return;
//}
