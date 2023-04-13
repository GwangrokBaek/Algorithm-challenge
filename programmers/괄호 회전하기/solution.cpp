// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/76502

// 57m

#include <string>
#include <deque>
#include <stack>

using namespace std;

bool check(deque<char> dq, stack<char> bucket) {
    bool result = false;
    
    while (dq.size()) {
        char temp = dq.front();
        dq.pop_front();
        
        if (temp != ']' && temp != ')' && temp != '}') {
            bucket.push(temp);
        } else {
            if (!bucket.empty()) {
                switch (bucket.top()) {
                    case '[':
                        if (temp == ']') {
                            bucket.pop();
                        }
                        break;
                    case '{':
                        if (temp == '}') {
                            bucket.pop();
                        }
                        break;
                    case '(':
                        if (temp == ')') {
                            bucket.pop();
                        }
                        break;
                }   
            } else {
                return false;
            }
        }
    }
    
    if (bucket.size() == 0) {
        result = true;
    }
    return result;
}

int solution(string s) {
    int answer = 0;
    int length = s.size();
    
    deque<char> dq(s.begin(), s.end());
    int count = 0;
    
    for (int i = 0; i < length; i++) {
        stack<char> bucket;
        
        if(check(dq, bucket)) {
            answer++;
        }
        
        char front = dq.front();
        dq.pop_front();
        dq.push_back(front);
    }
    
    return answer;
}