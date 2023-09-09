// https://school.programmers.co.kr/learn/courses/30/lessons/12941

#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());
    
    while (A.size()) {
        if (A[0] < B[B.size() - 1]) {
            answer += A[0] * B[0];
            A.erase(A.begin());
            B.erase(B.begin());
        } else {
            answer += A[A.size() - 1] * B[B.size() - 1];
            A.pop_back();
            B.pop_back();
        }
    }

    return answer;
}
