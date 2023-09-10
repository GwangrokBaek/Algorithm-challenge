// https://school.programmers.co.kr/learn/courses/30/lessons/12924

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int end = 1;
    int sum = 0;
    
    for (int start = 1; start <= n; start++) {
        while (sum < n && end <= n) {
            sum += end;
            end++;
        }
        
        if (sum == n) {
            answer++;
        }
        
        sum -= start;
    }
    
    return answer;
}
