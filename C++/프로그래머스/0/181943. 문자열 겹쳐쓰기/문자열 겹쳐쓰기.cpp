#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    for(int i=0;i<my_string.length();i++){
        if(i==s){
            for(int j=0;j<overwrite_string.length();j++){
                answer+=overwrite_string[j];
                
            }
            i+=overwrite_string.length()-1;
        }
        else{
            answer+=my_string[i];
        }
    }
    
    return answer;
}