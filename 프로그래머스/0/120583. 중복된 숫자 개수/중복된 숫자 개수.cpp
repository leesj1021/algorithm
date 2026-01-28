#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    vector<int>v(1000,0);
    for(int i=0;i<array.size();i++){
        v[array[i]]++;
    }
    answer=v[n];
    return answer;
}