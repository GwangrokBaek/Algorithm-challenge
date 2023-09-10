// https://school.programmers.co.kr/learn/courses/30/lessons/12909

#include <string>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> bucket;
    
    for (auto c: s) {
        if ((!bucket.empty()) && (bucket.top() == '(') && (c == ')')) {
            bucket.pop();
        } else {
            bucket.push(c); 
        }
    }
    
    if (!bucket.empty()) {
        answer = false;
    }

    return answer;
}
