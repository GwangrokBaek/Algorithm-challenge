// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/150370#

// 구현
// 1h
// 날짜 비교 문제는 기준일을 정하고 해당 날짜까지의 day 계산을 비교하는 것이 쉬움

#include <string>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    vector<int> today_date(3);
    vector<int> privacy_date(3);
    map<char, int> termsMap;
    
    for(int i = 0; i < terms.size(); i++) {
        int period = atoi(terms[i].substr(2).c_str());
        termsMap.insert({terms[i][0], period});
    }
    
    today_date[0] = atoi(today.substr(0, 4).c_str());
    today_date[1] = atoi(today.substr(5, 2).c_str());
    today_date[2] = atoi(today.substr(8, 2).c_str());

    for (int i = 0; i < privacies.size(); i++) {
        privacy_date[0] = atoi(privacies[i].substr(0, 4).c_str());
        privacy_date[1] = atoi(privacies[i].substr(5, 2).c_str());
        privacy_date[2] = atoi(privacies[i].substr(8, 2).c_str());
        
        int period_terms = 28 * termsMap[privacies[i][11]];
        int period_privacy = ((privacy_date[0] - 2000) * 12 * 28) + ((privacy_date[1] - 1) * 28) + (privacy_date[2] - 1);
        int period_today = ((today_date[0] - 2000) * 12 * 28) + ((today_date[1] - 1) * 28) + (today_date[2] - 1);
        
        if (period_privacy + period_terms <= period_today) {
            answer.push_back(i + 1);
        }
    }
    
    
    return answer;
}