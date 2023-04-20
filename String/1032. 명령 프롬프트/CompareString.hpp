#pragma once
#pragma warning(disable:4996) // C4996 에러를 무시
#include<iostream>
#include<string.h>
#include <vector>
#include<queue>
class CompareString{
public :
	CompareString(std::vector<std::string>& data,int size,int test_case);
	void run();

private : 
	std::vector<std::string> data;

	int size;
	int test_case;
};

