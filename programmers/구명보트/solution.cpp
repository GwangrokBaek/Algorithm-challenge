// https://school.programmers.co.kr/learn/courses/30/lessons/42885#

#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int sum = 0;
    int next = 0;

    sort(people.begin(), people.end());

    for (int end = people.size() - 1; end >= next; end--) {
        sum += people[end];

        if (sum < limit) {
            for (int start = next; start <= end; start++) {
                sum += people[start];

                if (sum > limit) {
                    next = start;
                    answer++;
                    sum = 0;
                    break;
                } else {
                    next = start + 1;
                    answer++;
                    sum = 0;
                    break;
                }
            }
        } else if (sum == limit) {
            sum = 0;
            answer++;
        }
    }

    return answer;
}
