// https://school.programmers.co.kr/learn/courses/30/lessons/42842

#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int n = 1;
    int w = 1;
    int h = 1;

    while (n * n <= yellow) {
        if (yellow % n == 0) {
            w = yellow / n;

            if (w > n) {
                h = n;
            } else {
                h = w;
                w = n;
            }

            if (((w + 2) * 2 + (h * 2)) == brown) {
                answer.push_back(w + 2);
                answer.push_back(h + 2);
            }
        }
        n++;
    }


    return answer;
}
