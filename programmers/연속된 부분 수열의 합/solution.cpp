// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/178870?language=cpp

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void findSequence(vector<int> sequence, int k, int array[]) {
    int length = 1000002;
    int sum = 0;
    int start = 0;
    int end = 0;
    
    for (start = 0; start < sequence.size(); start++) {
        while ((sum < k) && (end < sequence.size())) {
            sum += sequence[end];
            end += 1;
        }
        
        if (sum == k && ((end - start + 1) < length)) {
            length = end - start + 1;
            array[0] = start;
            array[1] = end - 1;
        }
        
        sum -= sequence[start];
    }
    
    return;
}

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer;
    int array[2] = {0, 0};
    
    findSequence(sequence, k, array);
    
    answer.push_back(array[0]);
    answer.push_back(array[1]);
    
    return answer;
}