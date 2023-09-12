// https://school.programmers.co.kr/learn/courses/30/lessons/12945

using namespace std;

int memo[100001] = {0,};

int fibonacci(int n) {
    memo[0] = 0;
    memo[1] = 1;
    
    for (int i = 2; i <= n; i++) {
        memo[i] = (memo[i - 1] + memo[i - 2]) % 1234567;
    }
    
    return memo[n];
}

int solution(int n) {
    return fibonacci(n);
}
