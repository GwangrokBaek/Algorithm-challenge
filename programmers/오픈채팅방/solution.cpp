// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/42888

#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    map<string, string> userMap;
    
    int uidIdx = 0;
    int nickIdx = 0;
    
    for (int i = 0; i < record.size(); i++) {
        uidIdx = record[i].find(" ");
        nickIdx = record[i].find(" ", uidIdx + 1);
        
        if (record[i][0] != 'L') {
            userMap[record[i].substr(uidIdx, nickIdx - uidIdx)] = record[i].substr(nickIdx + 1);
        }
    }
    
    for (int i = 0; i < record.size(); i++) {
        bool skip = false;
        uidIdx = record[i].find(" ");
        nickIdx = record[i].find(" ", uidIdx + 1);
        string uid = record[i].substr(uidIdx, nickIdx - uidIdx);
        string action;
        
        switch(record[i][0]) {
            case 'E':
                action = "님이 들어왔습니다.";
                break;
            case 'L':
                action = "님이 나갔습니다.";
                break;
            default:
                skip = true;
                break;
        }
        
        if (!skip) {
            answer.push_back(userMap[uid] + action);
        }
    }
    
    
    
    return answer;
}