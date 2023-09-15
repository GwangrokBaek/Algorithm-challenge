// https://school.programmers.co.kr/learn/courses/30/lessons/12928

#include <string>

using namespace std;

int solution(int n) {
    int answer = 0;
    int i = 0;
    
    while (i++ < n) {
        if ((n % i) == 0) {
            answer += i;
        }
    }
    
    return answer;
}
