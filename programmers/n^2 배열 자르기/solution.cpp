// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/87390#

// 1h 10m

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    bool record = false;
    int start = 1 + (left / n);
    
    for (long long i = left + 1; i <= right + 1; i++) {
        long long value = i % n;
        
        if (value < start) {
            if (value == 0) {
                answer.push_back(n);
            } else {
                answer.push_back(start);
            }
        } else {
            answer.push_back(value);
        }
        
        if (value == 0) {
            start++;
        }
    }
    
    return answer;
}

// 시간 초과 알고리즘
//
// vector<int> solution(int n, long long left, long long right) {
//     vector<int> answer;
//     bool record = false;
//     int start = 1;
    
//     for (long long i = 1; i <= n * n; i++) {
//         long long value = i % n;
        
//         if (i == (left + 1)) {
//             record = true;
//         } else if (i > (right + 1)) {
//             break;
//         }
        
//         if (record) {
//             if (value < start) {
//                 if (value == 0) {
//                     answer.push_back(n);
//                 } else {
//                     answer.push_back(start);
//                 }
//             } else {
//                 answer.push_back(value);
//             }    
//         }
        
//         if (value == 0) {
//             start++;
//         }
//     }
    
//     return answer;
// }