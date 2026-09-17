#include <string>
#include <vector>

using namespace std;

string bin(int leng){
    string str = "";
    while (leng > 0) {
        str = char('0' + leng % 2) + str;
        leng /= 2;
    }
    
    return str;
}

vector<int> solution(string s) {
    vector<int> answer ={0,0};
    while(s!="1"){
        string ss="";
        for(int i = 0 ;i<s.size();i++){
            if(s[i]=='0'){
                answer[1]++;
            }
            else{
                ss+='1';
            }
        }
        
        s=bin(ss.length());
        answer[0]++;
    }
    return answer;
}