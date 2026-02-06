#include <iostream>
#include <string>
using namespace std;

float val(const string& s) {
    if (s == "A+") return 4.5f;
    if (s == "A0") return 4.0f;
    if (s == "B+") return 3.5f;
    if (s == "B0") return 3.0f;
    if (s == "C+") return 2.5f;
    if (s == "C0") return 2.0f;
    if (s == "D+") return 1.5f;
    if (s == "D0") return 1.0f;
    if (s == "F")  return 0.0f;
    return 0.0f;
}

int main() {
    string name, grade;
    float credit;

    float sum = 0.0f;    
    float total = 0.0f;  

    for (int i = 0; i < 20; i++) {
        cin >> name >> credit >> grade;
        if (grade == "P") continue;

        sum += credit * val(grade);
        total += credit;
    }

    cout << (sum / total);
    return 0;
}
