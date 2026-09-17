#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    int sum = 0;
    map<int, int> cnt;
    for(int i = 0 ; i<tangerine.size();i++){
        cnt[tangerine[i]]++;
    }
    vector<pair<int, int>> v(cnt.begin(), cnt.end());

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
    });
    
    for (auto p : v) {
        if(sum>=k){
            break;
        }else{
            sum+=p.second;
            answer++;
        }
    }
    return answer;
}