// https://school.programmers.co.kr/learn/courses/30/lessons/12939

#include <string>
#include <sstream>
#include <limits.h>

using namespace std;

string solution(string s) {
    string answer = "";
    stringstream ss(s);
    string temp;
    
    int min = INT_MAX;
    int max = INT_MIN;
    
    while (getline(ss, temp, ' ')) {
        int target = stoi(temp);
        
        if (target > max) {
            max = target;
        }
        
        if (target < min) {
            min = target;
        }
     }
    
    answer = to_string(min) + " " + to_string(max);
    
    return answer;
}
