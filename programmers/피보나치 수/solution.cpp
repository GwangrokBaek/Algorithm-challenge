// https://school.programmers.co.kr/learn/courses/30/lessons/12945

#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> memo[100000];

int fibonacci(int n) {
    if (n <= 2) {
        return 1;
    } else {
        memo[n] = (fibonacci(n - 2) + fibonacci(n - 1));
        return memo[n];  
    }
}

int solution(int n) {
    return fibonacci(n) % 1234567;
}
