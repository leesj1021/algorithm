#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> strings, int n) {
    sort(strings.begin(), strings.end(),
         [n](const string& a, const string& b) {
             if (a[n] == b[n]) {
                 return a < b; // 같으면 문자열 사전순
             }
             return a[n] < b[n]; // 다르면 n번째 문자순
         });

    return strings;
}