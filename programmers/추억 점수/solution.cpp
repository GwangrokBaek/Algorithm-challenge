// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/176963

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map<string, int> peopleMap;
    
    for (uint8_t i = 0; i < name.size(); i++) {
        peopleMap.insert({name[i], yearning[i]});
    }
    
    for (uint8_t i = 0; i < photo.size(); i++) {
        int count = 0;
        for (uint8_t j = 0; j < photo[i].size(); j++) {
            count += peopleMap[photo[i][j]];
        }
        
        answer.push_back(count);
    }
    
    
    return answer;
}