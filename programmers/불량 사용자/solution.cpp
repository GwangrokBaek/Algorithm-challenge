// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/64064

// 3h
// 조합 문제를 굳이 stl을 사용하려 풀려하지 말자.
// find 함수는 벡터도 탐색이 가능함.

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void find(bool idMap[8][8], int banIdx, int count, vector<int> choices, vector<vector<int>>& answerList) {
    if (banIdx == count) {
        sort(choices.begin(), choices.end());
        
        if (find(answerList.begin(), answerList.end(), choices) == answerList.end()) {
            answerList.push_back(choices);
        }
    }
    
    for (int i = 0; i < 8; i++) {
        if (idMap[banIdx][i]) {
            if (find(choices.begin(), choices.end(), i) == choices.end()) {
                choices.push_back(i);
                find(idMap, banIdx + 1, count, choices, answerList);
                choices.pop_back();
            }
        }
    }
}

int solution(vector<string> user_id, vector<string> banned_id) {
    int answer = 0;
    bool idMap[8][8] = {false};
    vector<int> choices;
    vector<vector<int>> answerList;
    
    for (int b = 0; b < banned_id.size(); b++) {
        for (int u = 0; u < user_id.size(); u++) {
            bool matched = true;
            if (user_id[u].size() == banned_id[b].size()) {
                for (int k = 0; k < user_id[u].size(); k++) {
                    if (banned_id[b][k] == '*') {
                        continue;
                    } else if (banned_id[b][k] != user_id[u][k]){
                        matched = false;
                        break;
                    }
                }
                
                if (matched) {
                    idMap[b][u] = true;
                }
            }
        }
    }
    
    find(idMap, 0, banned_id.size(), choices, answerList);
    answer = answerList.size();
    
    return answer;
}