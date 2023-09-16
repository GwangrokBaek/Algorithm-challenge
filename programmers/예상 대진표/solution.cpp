// https://school.programmers.co.kr/learn/courses/30/lessons/12985#

using namespace std;


int solution(int n, int a, int b)
{
    int answer = 0;

    if ( a > b ) {
        int temp = a;
        a = b;
        b = temp;
    }

    while (a != b) {
        answer++;

        if (a % 2 == 0) {
            a = a / 2;
        } else {
            a = a / 2 + 1;
        }

        if (b % 2 == 0) {
            b = b / 2;
        } else {
            b = b / 2 + 1;
        }
    }

    return answer;
}
