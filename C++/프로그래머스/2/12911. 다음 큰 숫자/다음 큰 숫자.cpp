#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string bin(int a){
    string str = "";
    while(a>0){
        str+=to_string(a%2);
        a/=2;
    }
    reverse(str.begin(),str.end());
    return str;
}

int solution(int n) {
    string answer = "";
    int sum=0;
    string ori = bin(n);
    for(int i = 0;i<ori.size();i++){
        if(ori[i]=='1'){
            sum ++;
        }
    }
    if(sum==ori.size()){
        answer+="10";
        for(int i = 1; i<ori.size();i++){
            answer +='1';
        }
    }
    else{
        while(true){
            n++;
            int sumOne=0;
            string oriPlusOne = bin(n);
            for(int i = 0 ;i <oriPlusOne.size();i++){
                if(oriPlusOne[i]=='1'){
                    sumOne ++;
                }
            }if(sumOne==sum){
                
                return n;
            }
            
        }
    }
    int an=stoi(answer,nullptr,2);
    return an;
}