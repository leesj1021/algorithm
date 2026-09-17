#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    string min = "";
    string max = "";
    for(int i = 0 ; i<s.length();i++){
        if(s[i]>='a'&&s[i]<='z'){
            min+=s[i];
        }else{
            max+=s[i];
        }
    }
    sort(min.begin(),min.end());
    reverse(min.begin(),min.end());
    sort(max.begin(),max.end());
    reverse(max.begin(),max.end());
    
    answer+=min;
    answer+=max;
    return answer;
}