#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int answer = 0;
    int b1=box[0]/n;
    int b2=box[1]/n;
    int b3=box[2]/n;    
    return b1*b2*b3;
}