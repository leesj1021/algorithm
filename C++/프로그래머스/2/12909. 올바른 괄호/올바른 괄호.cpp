#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int i = 0;
    for(char c :s){
        if(c=='('){
            i++;
        }else{
            i--;
            if(i<0){
                return false;
            }
        }
    }
    if(i!=0){
        answer=false;
    }
    

    return answer;
}