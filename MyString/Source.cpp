/*
* Jack Utzerath
* CST-201
* My String
* 9/15/22
*/

#include "MyString.h"
#include <iostream>
using namespace std;



int main()
{
	MyString str("Nerd");
	MyString str2("School");
	str.showString();
	str.length();
	str << str;
	if (str == str2)
	{
		cout << "String 1 and 2 are equal" << endl;
	}
	else
		cout << "String 1 and 2 are not equal" << endl;
	str + str2;

}
