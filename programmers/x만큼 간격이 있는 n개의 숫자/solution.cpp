// https://school.programmers.co.kr/learn/courses/30/lessons/12954

#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int i = 1;

    while(n--) {
        answer.push_back(x * i);
        i++;
    }

    return answer;
}
