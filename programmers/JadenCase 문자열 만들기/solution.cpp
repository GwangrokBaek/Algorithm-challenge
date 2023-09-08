# https://school.programmers.co.kr/learn/courses/30/lessons/12951#

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    for (int i = 0; i < s.size(); i++) {
        if ((i == 0) && ((s[i] >= 'a') && s[i] <= 'z')) {
            answer.push_back((char)(s[i] - 32));
        } else if ((s[i-1] == ' ') && ((s[i] >= 'a') && s[i] <= 'z')) {
            answer.push_back((char)(s[i] - 32));
        } else if ((i != 0) && (s[i-1] != ' ') && ((s[i] >= 'A') && s[i] <= 'Z')) {
            answer.push_back((char)(s[i] + 32));
        } else {
            answer.push_back(s[i]);
        }        
    }
    
    return answer;
}
