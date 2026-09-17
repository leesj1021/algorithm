#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    for(int i=0;i<is_suffix.size();i++){
        if(my_string[my_string.size()-i-1]==is_suffix[is_suffix.size()-i-1]){
            continue;
        }else 
            return 0;
    }
    return 1;
}