// https://school.programmers.co.kr/learn/courses/30/lessons/12916

#include <string>
using namespace std;

bool solution(string s)
{
    bool answer = false;
    int pCounts = 0;
    int yCounts = 0;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'p' || s[i] == 'P') {
            pCounts++;
        } else if (s[i] == 'y' || s[i] == 'Y') {
            yCounts++;
        }
    }
    
    if (pCounts == yCounts) {
        answer = true;
    }

    return answer;
}
