#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    bool b = true;
    if(islower(s[0])){
        answer +=toupper(s[0]);
    }
    else{
        answer+=s[0];
    }
    for(int i =  1; i<s.size();i++){
        if(b==false){
            if(s[i]!=' '){
                answer +=toupper(s[i]);
                b=true;
            }
        
            else{
                answer+=' ';
            }
        }
        
        else if(s[i]==' '){
            b=false;
            answer+=" ";
        }
        else if(b==true){
            answer+=tolower(s[i]);
        }
        else{
            answer+=s[i];
        }
    }
    return answer;
}