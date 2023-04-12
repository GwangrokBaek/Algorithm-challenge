// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/92335

// 1h30m
// 소수 계산은 제곱근에 대해서까지만 체크하면 됨.
// split은 stringstream, while, getline 활용.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

vector<string> split(string input, char delimiter) {
    vector<string> result;
    stringstream ss(input);
    string temp;
    
    while (getline(ss, temp, delimiter)) {
        if (temp != "") {
            result.push_back(temp);   
        }
    }
    
    return result;
}

bool isPrimeLong(long x){
    if (x == 1) return false;
    for(long i = 2; i * i <= x; ++i){
        if (x % i == 0) return false;
    }
    return true;
}

int solution(int n, int k) {
    int answer = -1;
    string converted = "";
    
    // n을 k진수로 변환
    while(n>0) {
        converted += to_string(n%k);
        n /= k;
    }
    reverse(converted.begin(), converted.end());
    
    vector<string> primes = split(converted, '0');
    
    answer = 0;
    for (int i = 0; i < primes.size(); i++) {
        if (isPrimeLong(stol(primes[i]))) {
            answer++;
        }
    }
    
    return answer;
}