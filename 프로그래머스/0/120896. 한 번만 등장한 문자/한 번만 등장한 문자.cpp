#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int siz=s.length();
    vector<int>alphabet(26,0);
    for(int i=0;i<siz;i++){
        alphabet[int(s[i])-97]++;
    }
    for(int j=0;j<26;j++){
        if(alphabet[j]==1){
            answer+=char(j+97);
        }
    }
    return answer;
}