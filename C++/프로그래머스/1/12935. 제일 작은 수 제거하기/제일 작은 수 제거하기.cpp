#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int s = arr.size();
    int small;
    int index = 0;
    if(s==1){
        answer.push_back(-1);
    }else{
        small = arr[0];
        for(int i = 0;i<s;i++){
            if(arr[i]<small){
                small=arr[i];
                index = i;
            }
        }
        for(int i = 0;i<s;i++){
            if(i!=index){
                answer.push_back(arr[i]);
            }
        }
    }
    return answer;
}