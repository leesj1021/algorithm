#include <iostream>
#include <string>
using namespace std;

int solution(string s)
{
    string temp;
    temp.reserve(s.size());

    for (int i = 0; i < s.length(); i++) {
        if (!temp.empty() && temp.back() == s[i]) {
            temp.pop_back();
        } else {
            temp.push_back(s[i]);
        }
    }

    return temp.empty() ? 1 : 0;
}