#include "pch.h"
#include "Test02.h"


Test02::Test02(const std::vector<std::string>& a_arrString)
	: ITest(a_arrString)
{
	// vector<string>�� ������ �޾Ƽ� ��ü�� �����ؾ� ����...
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
		cout << "�ڸ��� �Է� ����";
		return 0;
	}
	   	
	IntValue = atoi(s.c_str());

	return IntValue;
}

void Test02::Test()
{
	Test02 a{ {""} };

	// ���� �׽�Ʈ �ּ� 5���̻�
}