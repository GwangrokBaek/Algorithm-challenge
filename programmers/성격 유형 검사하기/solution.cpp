// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/118666#

// 구현
// 23m

#include <string>
#include <vector>
#include <map>

using namespace std;

// R T / F C / M J / A N
// 4 <- base (minus 4)
// left <- 비동의, right <- 동의

void calculatePersonality(char cmp1, char cmp2, map<char, int> personalityMap, string *answer) {
    if (personalityMap[cmp1] > personalityMap[cmp2]) {
        answer->push_back(cmp1);
    } else {
        answer->push_back(cmp2);
    }
}

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    map<char, int> personalityMap;
    
    for (int i = 0; i < choices.size(); i++) {
        int score = choices[i] - 4;
        if (score == 0) {
            continue;
        } else if (score > 0) { // 동의
            personalityMap[survey[i][1]] += score;
        } else if (score < 0) { // 비동의
            personalityMap[survey[i][0]] += (score * -1);
        }
    }
    
    calculatePersonality('T', 'R', personalityMap, &answer);
    calculatePersonality('F', 'C', personalityMap, &answer);
    calculatePersonality('M', 'J', personalityMap, &answer);
    calculatePersonality('N', 'A', personalityMap, &answer);
    
    return answer;
}