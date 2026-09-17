#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> v;
    stringstream ss(s);
    int word = 0;
    while(ss >> word){
        v.push_back(word);
    }
    int max = v[0];
    int min = v[0];
    for(int i = 0 ;i<v.size();i++){
        if(v[i]>max){
            max=v[i];
        }
        if(v[i]<min){
            min = v[i];
        }
    }
    answer=answer+to_string(min);
    answer+=" ";
    answer+=to_string(max);
    return answer;
}