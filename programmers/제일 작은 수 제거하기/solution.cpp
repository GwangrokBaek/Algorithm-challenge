// https://school.programmers.co.kr/learn/courses/30/lessons/12935

#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = arr[0];
    int minIdx = 0;

    if (arr.size() == 1) {
        answer.push_back(-1);
        return answer;
    }

    answer.push_back(arr[0]);

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= min) {
            min = arr[i];
            minIdx = i;
        }
        answer.push_back(arr[i]);
    }

    answer.erase(answer.begin() + minIdx);

    return answer;
}
