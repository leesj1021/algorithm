#include <string>
#include <vector>
#include <algorithm>

using namespace std;
string toBinary(unsigned int n, int width) {
    string result = "";

    do {
        result += char('0' + n % 2);
        n /= 2;
    } while (n > 0);

    
    while ((int)result.size() < width) {
        result += '0';
    }

    reverse(result.begin(), result.end());
    return result;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for(int i = 0;i<n;i++){
        string ans = "";
        string binary1 = toBinary(arr1[i],n);
        string binary2 = toBinary(arr2[i],n);
        for(int j = 0;j<n;j++){
            if(binary1[j]=='1'||binary2[j]=='1'){
                ans+='#';
            }else{
                ans+=' ';
            }
        }answer.push_back(ans);
    }
    
    return answer;
}