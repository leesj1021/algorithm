#include <iostream>
#include<iomanip>
#include<string>
#include <algorithm>
#include <vector>
using namespace std;

bool group(string s) {
	char front = 0;
	bool seen[26] = { false };
	for (char c : s) {
		if (front != c) {
			if (seen[c - 'a']) return false; 
			seen[c - 'a'] = true;
			front = c;
		}
		else front = c;
	}
	return true;
}

int main()
{
	int a;
	int num = 0;
	cin >> a;
	for (int i = 0; i < a; i++) {
		string s;
		cin >> s;
		if (group(s) == true) {
			num++;
		}
	}
	cout << num;
	return 0;
}

