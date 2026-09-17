#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int sump = 0;
    int sumy = 0;
    for(int i = 0;i<s.size();i++){
        if(s[i]=='p'||s[i]=='P'){
            sump ++;
        }
        if(s[i]=='y'||s[i]=='Y'){
            sumy ++;
        }
    }
    if(sump!=sumy){
        answer=false;
    }
    return answer;
}