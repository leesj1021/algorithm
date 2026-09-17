#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int s = p.size();
    
    vector<int>v;
    int answer = 0;
    for(int i = 0 ; i<t.size()-s+1;i++){
        string st = "";
        for(int j = 0;j<s;j++){
            st=st+t[i+j];
        }
        if(stoll(st)<=stoll(p)){
            answer++;
        }
    }
    
    return answer;
}