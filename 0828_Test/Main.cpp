#include "pch.h"


template<typename T>
[[nodiscard]] T Input()
{
	T val;

	while (true)
	{
		cin >> val;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');

			cout << typeid(T).name() << " : 입력 에러" << endl;
		}
		else { break; }
	}

	cin.ignore(INT_MAX, '\n');
	return val;
}


int main(int n, const char* ar[])
{

	//int a = Input<int>();
	//
	//cout << a << endl;
	//
	//std::string s = Input<std::string>();
	//
	//cout << s << endl;


	// Test02
	vector<string> vc_Test02;
	vc_Test02.push_back("932746");
	vc_Test02.push_back("93274");
	vc_Test02.push_back("88978");
	vc_Test02.push_back("13275");
	vc_Test02.push_back("56779");

	Test02 t2(vc_Test02);
	cout << "SecretNumber_1 : " << t2.SecretNumber(t2.StrToInt(vc_Test02[0])) << endl;
	cout << "SecretNumber_2 : " << t2.SecretNumber(t2.StrToInt(vc_Test02[1])) << endl;
	cout << "SecretNumber_3 : " << t2.SecretNumber(t2.StrToInt(vc_Test02[2])) << endl;
	cout << "SecretNumber_4 : " << t2.SecretNumber(t2.StrToInt(vc_Test02[2])) << endl;
	cout << "SecretNumber_5 : " << t2.SecretNumber(t2.StrToInt(vc_Test02[2])) << endl;
	

	//

	getchar();

	return 0;
}
