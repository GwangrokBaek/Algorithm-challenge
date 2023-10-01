// https://school.programmers.co.kr/learn/courses/30/lessons/12933

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string orig;

    orig = to_string(n);
    vector<char> v(orig.begin(), orig.end());

    sort(v.begin(), v.end(), greater<char>());

    string conv(v.begin(), v.end());
    answer = stol(conv);

    return answer;
}
