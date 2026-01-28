#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int num=array[0];
    int index=0;
    for(int i=0;i<array.size();i++){
        if(array[i]>num){
            num=array[i];
            index=i;
        }
    }
    answer.push_back(num);
    answer.push_back(index);
    return answer;
}