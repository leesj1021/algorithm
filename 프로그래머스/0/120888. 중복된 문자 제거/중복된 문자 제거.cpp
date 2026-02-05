#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string) {
    string answer = "";
    vector<char>v;
    for(char c : my_string){
        if(find(v.begin(),v.end(),c)==v.end()){
            answer+=c;
            v.push_back(c);
        }
    }
    return answer;
}