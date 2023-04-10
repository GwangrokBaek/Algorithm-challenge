// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/178871?language=cpp

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    map<string, int> playersMap;
    for (uint16_t i = 0; i < players.size(); i++) {
        playersMap.insert({players[i], i});
    }
    
    for (uint32_t i = 0; i < callings.size(); i++) {
        string callee = callings[i];
        uint16_t playerIdx = playersMap[callee];
        
        string temp = players[playerIdx - 1];
        players[playerIdx - 1] = players[playerIdx];
        playersMap[callee] = playerIdx - 1;
        
        players[playerIdx] = temp;
        playersMap[temp] = playerIdx;
    }
    
    return players;
}