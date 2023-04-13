// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/92341

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>

#define IN 13
#define OUT 14

#define ACC 0
#define LAST 1
#define CNT 2

using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<string, vector<int>> timeMap;
    
    int basicTime = fees[0];
    int basicFee = fees[1];
    int unitTime = fees[2];
    int unitFee = fees[3];
    
    for (int i = 0; i < records.size(); i++) {
        int time = (records[i][0] - '0') * 600 + (records[i][1] - '0') * 60 + (records[i][3] - '0') * 10 + (records[i][4] - '0');
        string number = records[i].substr(6, 4);
        
        if (timeMap[number].size() == 0) {
            for (int j = 0; j < 3; j++) {
                timeMap[number].push_back(0);
            }
        }
        
        if (records[i].size() == IN) {
            timeMap[number][LAST] = time;
        } else if (records[i].size() == OUT) {
            timeMap[number][ACC] += (time - timeMap[number][LAST]);
        }
        
        timeMap[number][CNT]++;
    }
    
    for (auto &it: timeMap) {
        if (((it.second[CNT]) % 2) != 0) {
            it.second[ACC] += (1439 - it.second[LAST]);
        }
        
        int sum = 0;
        
        if (it.second[ACC] > basicTime) {
            it.second[ACC] -= basicTime;
            sum += basicFee;
            
            sum += (ceil(it.second[ACC] / (unitTime * 1.0)) * unitFee);
        } else {
            sum = basicFee;
        }
        
        answer.push_back(sum);
    }
    
    return answer;
}