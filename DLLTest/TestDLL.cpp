#include "pch.h"
#include "TestDLL.h"
#include "windows.h"
#include <string>

TestDLL::TestDLL() {}
void TestDLL:: TestWrite(const char* string1, const char* string2, char* newString) {
	std::string str = std::string(string1) + std::string(string2);
	#pragma warning(suppress : 4996)
	strcpy(newString, str.c_str());
}