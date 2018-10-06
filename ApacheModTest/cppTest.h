#pragma once

#include <string>
#include <vector>

class TestClass
{
	int x,y;
	std::vector<std::string> vec;
	std::string stuff;
public:
	const char * GetString();
	int Add(int a,int b);
	void AddToVec(char *data);

};