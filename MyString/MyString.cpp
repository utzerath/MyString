/*
* Jack Utzerath
* CST-201
* My String
* 9/15/22
*/

#include "MyString.h"
#include <iostream>

MyString::MyString()
{
	arrLength = 0;
	maxArrLength = 0;
	myArray2 = new char[arrLength];
	

}

MyString::MyString(string yourString)
{
	arrLength = 0;
	maxArrLength = 0;
	myArray2 = new char[arrLength];
	for (int i = 0; i < yourString.length(); i++)
	{
		arrLength++;
		maxArrLength++;
		
		myArray2[i] = yourString[i];

	}
}

int MyString::ensureCapacity(MyString& s)
{

	//Take the first mystring and ensure it has space for more
	int n = maxArrLength + s.arrLength;
	
	return n;
	
}
MyString::MyString(MyString& copy)
{
	for (int i = 0; i < arrLength; i++)
	{
		myArray2[i] = copy.myArray2[i];
	}
}

void MyString::showString()
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << myArray2[i];
	}
	cout << endl;
	
}

int MyString::length()
{
	cout << arrLength << endl;
	return arrLength;
}

//to String
void MyString::operator<<(MyString& s)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << myArray2[i];
	}
	cout << endl;
}



bool MyString::operator==(MyString& s)
{
	bool truth;
	if (s.arrLength > arrLength || s.arrLength < arrLength)
	{
		return false;

	}
	
	for (int i = 0; i < arrLength; i++)
	{
		if (myArray2[i] != s.myArray2[i])
		{
			return false;
		}
	}
	return true;
}

bool MyString::operator<(MyString& s)
{
	return true;
}
bool MyString::operator>(MyString& s)
{
	return false;
}

/*MyString MyString::toLower()
{
	
}
MyString MyString::toUpper()
{

}
*/
void MyString::substring(int)
{

}

void MyString::substring(int n, int m)
{

}

void MyString::indexOf(MyString& s)
{

}

void MyString::lastIndexOf(MyString& s)
{

}


void MyString::operator+(MyString& s)
{
	
	int capacity = ensureCapacity(s);
	char temp[20];
	for (int i = 0; i < arrLength; i++)
	{
		temp[i] = myArray2[i];

	}
	delete[] myArray2;
	myArray2[capacity];

	for (int i = 0; i < arrLength; i++)
	{
		myArray2[i] = temp[i];
		//myArray2[i + arrLength] = s.myArray2[i];

	}

	showString();
}




