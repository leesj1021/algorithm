#include <string>
#include <vector>

using namespace std;

int gcd(int a,int b){
    int v = 1;
    if(a==b){
        return a;
    }
    if(a>b){
        for(int i = 1 ;i<=b;i++){
            if(a%i==0&&b%i==0){
                v=i;
            }
        }
    }else{
        for(int i = 1 ; i<=a;i++){
            if(b%i==0&&a%i==0){
                v=i;
            }
        }
    }
    
    return v;
}

int lcm(int a,int b){
    if(a==b){
        return a;
    }
    if(a>b){
        int v = a;
        while(true){
            if(v%a==0&&v%b==0){
                return v;
            }else{
                v++;
            }        
        }
    }else{
        int v = b;
        while(true){
            if(v%a==0&&v%b==0){
                return v;
            }else{
                v++;
            }        
        }
    }
    
    
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    answer.push_back(gcd(n,m));
    answer.push_back(lcm(n,m));
    
    return answer;
}