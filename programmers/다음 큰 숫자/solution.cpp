// https://school.programmers.co.kr/learn/courses/30/lessons/12911

int countOnes(int n) {
    int counts = 0;
    
    while (n > 0) {
        if (n & 1) counts++;
        n >>= 1;
    }
    
    return counts;
}

int solution(int n) {
    int answer = 0;
    int ones = countOnes(n);
    int target = n;
    
    while (target < 1000000) {
        target++;
        if (ones == countOnes(target)) {
            answer = target;
            break;
        }
    }
    
    return answer;
}
