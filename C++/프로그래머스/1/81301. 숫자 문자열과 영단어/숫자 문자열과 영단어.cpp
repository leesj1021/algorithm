#include <string>
#include <map>
using namespace std;

int solution(string s) {
    string answer = ""; // 0이 아니라 빈 문자열
    string alp = "";

    map<string, int> m = {
        {"zero", 0}, {"one", 1}, {"two", 2},
        {"three", 3}, {"four", 4}, {"five", 5},
        {"six", 6}, {"seven", 7}, {"eight", 8},
        {"nine", 9}
    };

    for (char ch : s) {
        if (ch >= '0' && ch <= '9') {
            answer += ch;
        } else {
            alp += ch;

            auto it = m.find(alp);
            if (it != m.end()) {
                answer += to_string(it->second);
                alp="";
            }
        }
    }

    return stoi(answer);
}