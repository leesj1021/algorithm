#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    bool open =false ;
    int openNum = 0;
    bool close = false;
    int closeNum = 0;
    
    if(s[0]==')'){
        answer = false;
    }
    for(int i = 0 ;i<s.size();i++){
        if(s[i]=='('){
            openNum++;
        }else{
            closeNum++;
        }
        if(openNum<closeNum){
        answer = false;
    }
    }
    if(s[s.size()-1]=='('){
        answer = false;
    }
    if(openNum!=closeNum){
        answer = false;
    }

    return answer;
}