#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit) {
    sort(people.begin(), people.end());
    int answer = people.size();
    int i = 0;
    int j = (int)people.size() - 1;

    while (i < j) {
        if (people[i] + people[j] <= limit) {
            answer--;  
            i++;       
        }
        j--;           
    }

    return answer;
}