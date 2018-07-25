#include "cppTest.h"

const char * TestClass::GetString()
{
	return stuff.c_str();
}
int TestClass::Add(int a, int b)
{
	return a + b;
}
void TestClass::AddToVec(char *data)
{
	vec.push_back(data);
}