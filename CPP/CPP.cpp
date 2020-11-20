#include <iostream>
#include <cstring>
#include <string>
#include <stdexcept>
#include <vector>
using namespace std;

int iGlobal = 0;

template <typename T>
inline T const& Max(T const& a, T const& b)
{
	return a < b ? b : a;// return value
}

void VerifyBreakpoint()
{
	for (int i = 0; i < 50; i++)
	{
		iGlobal++; //set bp #2
		i++;
	}

	for (int i = 0; i < 50; i++)
	{
		i++;
	}
}

int VerifyEE()
{
	int a, b;
	int c;
	float f;

	a = 10;
	b = 20;
	c = a + b;

	f = 70.0 / 3.0;

	char greeting[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	char str1[11] = "Hello";
	char str2[11] = "World";
	char str3[11];

	//strcat(str1, str2);  //set bp #3
	//strcpy(str3, str1);

	enum Day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
	Day d = Monday;

	return 0; //set bp #4
}

int VerifyCallStack()
{
	int i = 39;
	int j = 20;
	Max(i, j);  //set bp #5

	double f1 = 13.5;
	double f2 = 20.7;
	Max(f1, f2);  //set bp #6

	string s1 = "Hello";
	string s2 = "World";
	Max(s1, s2);

	return 0;  //set bp #6
}

double division(int a, int b)
{
	if (b == 0)
	{
		throw "Division by zero condition!";
	}
	return (a / b);
}

int VerifyException()
{
	int x = 50;
	int y = 0;
	double z = 0;

	try {
		z = division(x, y);
		cout << z << endl;
	}
	catch (const char* msg) {
		cerr << msg << endl;
	}

	int c = 1 / y;

	vector<int> v(10);
	v.at(100) = 100;
	return 0;
}

int main()
{
	int i = 100000;
	while (i > 0) {
		cout << "Hello World!\n";  //set bp 
		;
	}
	VerifyBreakpoint();
	VerifyEE();
	VerifyCallStack();
	VerifyException();

	cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
