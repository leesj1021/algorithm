#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string s) {
    int answer = 0;
    stringstream ss(s);
    string tok;
    int prev = 0;
    while (ss >> tok) {
        if (tok == "Z") {
            answer -= prev;
            prev = 0;
        } else {
            prev = stoi(tok);
            answer += prev;
        }
    }
    return answer;
}