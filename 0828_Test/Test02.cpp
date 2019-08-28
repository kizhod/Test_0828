#include "pch.h"
#include "Test02.h"


Test02::Test02(const std::vector<std::string>& a_arrString)
	: ITest(a_arrString)
{
	// vector<string>을 무엇을 받아서 객체를 생성해야 할지...
}

Test02::~Test02()
{

}

int Test02::Pow(int num)
{
	int TempNum = num;

	for (int i = 1; i <= 1; i++)
	{
		num = num * TempNum;
	}
	return num;
}

int Test02::SecretNumber(int a)
{
	int Temp = a;

	for(int i =0; i<LengthNum; i++)
	{
		SumNum += Pow(Temp % 10);
		Temp /= 10;
	}

	SecretNum = SumNum;

	SecretNum %= 10;

	return SecretNum;
}

int Test02::StrToInt(std::string s)
{
	if (s.size() != 5)
	{
		cout << "자릿수 입력 오류";
		return 0;
	}
	   	
	IntValue = atoi(s.c_str());

	return IntValue;
}

void Test02::Test()
{
	Test02 a{ {""} };

	// 각종 테스트 최소 5개이상
}