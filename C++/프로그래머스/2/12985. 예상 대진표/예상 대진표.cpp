#include <iostream>

using namespace std;
int div(int n){
    if(n%2==0){
        n/=2;
    }else{
        n=n/2+1;
    }
    return n;
}
int solution(int n, int a, int b)
{
    int answer = 1;
    
    while(true){
        if(div(a)==div(b)){
            return answer;
        }
        a=div(a);
        b=div(b);
        n=n/2;
        answer++;
    }
    
}