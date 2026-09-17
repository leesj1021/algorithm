#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i = 0 ;i <s.size();i++){
        if(s[i]==' '){
            answer+=' ';
        }else{
            if(s[i]>='a'&&s[i]<='z'){
                if((s[i]+n)>'z'){
                    answer+=('a'+s[i]+n-'z'-1);
                }else{
                    answer+=s[i]+n;
                }
            }else{
                if((s[i]+n)>'Z'){
                    answer+=('A'+s[i]+n-'Z'-1);
                }else{
                    answer+=s[i]+n;
                }
            }
        }
    }
    return answer;
}