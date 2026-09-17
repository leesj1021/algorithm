#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int maxOne=0;
    int maxTwo=0;
    for(int i = 0;i<sizes.size();i++){
        sort(sizes[i].begin(),sizes[i].end());
    }
    for(int i = 0;i<sizes.size();i++){
        if(sizes[i][0]>maxOne){
            maxOne=sizes[i][0];
        }
        if(sizes[i][1]>maxTwo){
            maxTwo=sizes[i][1];
        }
    }
    return maxOne*maxTwo;
}