#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    map<int, int> m;
    for(int i =1;i<=elements.size();i++){//1,2,3,4,5 길이 
        for(int j = 0 ;j<elements.size();j++){//시작index
            int sum = 0;
            for(int k = j;k<j+i;k++){
                
                sum += elements[k%elements.size()];
            
                
            }
            m[sum]++;
        }
    }
    
    
    return m.size();
}