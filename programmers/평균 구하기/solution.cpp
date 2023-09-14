// https://school.programmers.co.kr/learn/courses/30/lessons/12944

#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    double sum = 0;

    for (auto it : arr) {
        sum += it;
    }

    answer = sum / arr.size();

    return answer;
}
