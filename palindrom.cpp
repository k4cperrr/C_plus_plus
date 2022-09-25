#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a, i;
	string wyraz;
	cout << "podaj wyraz ";
	cin >> wyraz;
	for (i = 0, a = wyraz.length() - 1; i<a; i++, a--)
	{
		if (wyraz[i] != wyraz[a])
		{
			break;
		}
	}
		if (i>=a)
		{
			cout << "jest palindromem" << endl;
		}
		else 
		{
			cout << "nie jest palindromem" << endl;
		}
}