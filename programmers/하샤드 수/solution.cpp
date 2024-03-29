// https://school.programmers.co.kr/learn/courses/30/lessons/12947

using namespace std;

bool solution(int x) {
    bool answer = false;
    int temp = x;
    int sum = 0;

    while (temp > 0) {
        sum += (temp % 10);
        temp /= 10;
    }
    
    if ((x % sum) == 0) {
        answer = true;
    }
    
    return answer;
}
