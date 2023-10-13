// https://school.programmers.co.kr/learn/courses/30/lessons/12943

int collatz(long num, int depth) {
    while (depth <= 500) {
        if (num % 2 == 0) {
            num /= 2;
        } else {
            num = num * 3 + 1;
        }
        
        if (num == 1) {
            return depth;
        } else {
            depth++;
        }
    }
    
    return -1;
}

int solution(int num) {
    int answer = 0;
    
    if (num != 1) {
        answer = collatz(num, 1);
    }
    
    return answer;
}
