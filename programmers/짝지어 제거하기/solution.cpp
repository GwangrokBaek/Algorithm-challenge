# https://school.programmers.co.kr/learn/courses/30/lessons/12973

#include <string>
#include <vector>
using namespace std;

int solution(string s)
{
    int answer = 0;
    vector<char> v;

    v.push_back(s[0]);
    
    for (int i = 1; i < s.size(); i++) {
        if (v.size() && (v.back() == s[i])) {
            v.pop_back();
        } else {
            v.push_back(s[i]);
        }
    }
    
    if (!v.size()) {
        answer = 1;
    }

    return answer;
}
