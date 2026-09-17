#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<string> dict;

    for (int i = 0; i < words.size(); i++) {
        auto it = find(dict.begin(), dict.end(), words[i]);


        if (it != dict.end()) {
            return {i % n + 1, i / n + 1};
        }

        if (i > 0 && words[i].front() != words[i - 1].back()) {
            return {i % n + 1, i / n + 1};
        }

        dict.push_back(words[i]);
    }

    return {0, 0};
}