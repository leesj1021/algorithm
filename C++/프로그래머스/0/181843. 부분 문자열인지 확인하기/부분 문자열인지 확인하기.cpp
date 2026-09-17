#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) {
    int answer = 0;
    int size = target.size();
    bool b = false;
    for(int i = 0;i<my_string.size();i++){
        if(my_string[i]==target[0]){
            b= true;
            for(int j = 1;j<size;j++){
                if(my_string[i+j]==target[j])
                    continue;
                else {
                    b= false;
                    break;
                }
            }
            if(b==1)
                return 1;
        }
    }
    return 0;
}