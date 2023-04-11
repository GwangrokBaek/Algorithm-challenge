// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/77484#

// 21m

#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zeroCounts = 0;
    int matchCounts = 0;
    map<int, bool> lottosMap;
    
    for (int i = 0; i < 6; i++) {
        if (lottos[i] == 0) {
            zeroCounts++;
        }
        
        lottosMap[lottos[i]] = true;
    }
    
    for (int i = 0; i < 6; i++) {
        if (lottosMap[win_nums[i]] == true) {
            matchCounts++;
        }
    }
    
    int highestRank = 7 - matchCounts - zeroCounts;
    int lowestRank = 7 - matchCounts;
    if (highestRank <= 1) {
        highestRank = 1;
    } else if (highestRank >= 6) {
        highestRank = 6;
    }
    
    if (lowestRank >= 6) {
        lowestRank = 6;
    }
    
    answer.push_back(highestRank);
    answer.push_back(lowestRank);
    
    return answer;
}