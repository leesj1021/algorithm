#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    int index = 1;
    
    sort(arr.begin(),arr.end());
    int max = arr[arr.size()-1];
    int using_max = max;
    while(true){
        bool b = true;
        for(int i = 0;i<arr.size()-1;i++){
            
            if(using_max%arr[i]==0){
                continue;
                
            }else{
                index++;
                using_max=index*max;
                b=false;
                break;
            }
        }
        if(b==true){
            answer=using_max;
            break;
        }
    }
    return answer;
}