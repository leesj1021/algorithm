#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    double a = (double)num1/(double)num2;
    int answer = a*1000;
    return answer;
}