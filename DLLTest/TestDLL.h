#include "wtypes.h"
#include "oleauto.h"
#include "atlbase.h"
#include <iostream>

class TestDLL
{
public:
	TestDLL();
	~TestDLL();
	void TestWrite(const char* string1, const char* string2, char* newString);
private:
};

extern "C" __declspec(dllexport) void* Create() {
	return (void*) new TestDLL();
}

extern "C" __declspec(dllexport) void TestWrite(TestDLL *testDLL, const char* string1, const char* string2, char* newString) {
	testDLL->TestWrite(string1, string2, newString);
	std::cout << string1 <<" " << string2<<" "<<newString;
}