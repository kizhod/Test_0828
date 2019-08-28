#pragma once
#include "pch.h"

class Test02 : ITest
{
	enum { LengthNum = 5, };

public:
	Test02(const std::vector<std::string>& a_arrString);
	~Test02();
	
	virtual void Test() override;
	
	int Pow(int num);
	int SecretNumber(int a);
	int StrToInt(std::string s);

public:
	int SecretNum = 0;
	int SumNum = 0;
	int IntValue = 0;
};
