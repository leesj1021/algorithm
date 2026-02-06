#include <string>
#include <vector>

using namespace std;
vector<string> morse = {
    ".-","-...","-.-.","-..",".","..-.","--.","....","..",
    ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
    "...","-","..-","...-",".--","-..-","-.--","--.."
};

char toChar(string code) {
    for (int i = 0; i < 26; i++) {
        if (morse[i] == code)
            return 'a' + i;
    }
    return '?';
}

string solution(string letter) {
    string answer = "";
    string sol="";
    int s=letter.length();
    for(int j=0;j<s;j++){
        if(letter[j]==' '){
            sol+=toChar(answer);
            answer="";
        }
        else{
            answer+=letter[j];
        }
    }
    if(answer!=""){
        sol+=toChar(answer);
    }
    return sol;
}