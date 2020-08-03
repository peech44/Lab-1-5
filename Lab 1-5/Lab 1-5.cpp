// Lab 1-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//inwza007
//inwza007ohmygodness
#include <iostream>
#include <string>
using namespace std;
//get low char
void set_lower(string& a, int& l);
//set true char delete special type
void set_char(string& a, int& l);
//set l check char
void set_l(string& a, int& l);
//process palindrome
void show(string& a, int& l, int& x);

int main()
{
	int l;
	int x;
	string a;

	cout << "Enter word: ";
	getline(cin, a);
	//get low char
	set_lower(a, l);
	//set true char delete special type
	set_char(a, l);

	//set l check char
	set_l(a, l);
	//process palindrome
	show(a, l, x);

	system("pause");
	return 0;
}

void set_lower(string& a, int& l) {
	//use tolower for small char
	for (int i = 0; i < a.size(); i++) {
		a[i] = (tolower(a[i]));
	}
}

void set_char(string& a, int& l) {
	//use code to ignore special type and use .erase
	for (int i = 0; i < a.size(); i++) {
		if (!((a[i] >= 65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122))) {
			a.erase(i, 1);
			i--;
		}
	}

}

void set_l(string& a, int& l) {
	//for seach length
	for (l = 0; a[l] != '\0'; l++);
	cout << "L is " << l << endl;
}

void show(string& a, int& l, int& x) {
	//check x=0 if x[0] == x[last] and ....
	//so we have x = l/2 and that is palindrome
	for (x = 0; (x < l / 2) && (a[x] == a[l - x - 1]); x++);//check palindrome
	cout << "x is " << x << endl;
	if (x == l / 2)
		cout << a << endl << "It is a Palindrome" << endl;
	else
		cout << a << endl << "It is Not a palindrome" << endl;
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
