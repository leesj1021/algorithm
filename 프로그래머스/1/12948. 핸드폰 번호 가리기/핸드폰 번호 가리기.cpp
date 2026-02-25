#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string phone_number) {
    string answer = "";
    reverse(phone_number.begin(),phone_number.end());
    for(int i=4;i<phone_number.length();i++){
        phone_number[i]='*';
    }
    reverse(phone_number.begin(),phone_number.end());
    return phone_number;
}