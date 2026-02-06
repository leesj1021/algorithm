#include <string>
#include <vector>

using namespace std;
int fac(int a){
    if(a==0) return 1;
    else{
        return a*fac(a-1);
    }
}
int solution(int n) {
    int answer = 0;
    int i=1;
    while(fac(i)<=n){
        i++;
        
    }
    return i-1;
}