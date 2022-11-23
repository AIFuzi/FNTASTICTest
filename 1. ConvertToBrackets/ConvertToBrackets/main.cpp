#include <iostream>
#include <string>

using namespace std;

string ConvertToBrack(string str)
{
	const char* strArr = str.c_str();
	string lowStr;
	string result;

	for (int i = 0; i < str.length(); i++) lowStr += tolower(strArr[i]);
	
	for (int i = 0; i < lowStr.length(); i++)
	{
		if (count(lowStr.begin(), lowStr.end(), tolower(strArr[i])) > 1) result += ")";
		else result += "(";
	}

	return(result);
}

int main()
{
	setlocale(LC_ALL, "Rus");
	
	string word;
	while (true)
	{
		cout << "¬ведите слово: ";
		getline(cin, word);

		cout << "–езультат: " << ConvertToBrack(word) << endl;
	}

	system("pause");
	return 0;
}