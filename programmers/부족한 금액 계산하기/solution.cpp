// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/82612

// DP
// 5m

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long total = 0;
    
    int times = 0;
    
    while(count--) {
        times++;
        total += (price * times);
    }
    
    answer = total - money;
    if (answer <= 0) {
        answer = 0;
    }

    return answer;
}