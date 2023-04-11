// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/92334#

// 구현
// 50m
// 문자열 파싱에는 find + substr 조합 사용
// unique한 값 필요할때에는 vector + set 조합 사용

#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    
    map<string, int> reporterMap;
    map<string, vector<string>> reportedMap;
    set<string> uniqueReport;
    
    uniqueReport.insert(report.begin(), report.end());
    int current = 0;
    
    for (auto it=uniqueReport.begin(); it!=uniqueReport.end(); it++) {
        current = it->find(" ");
        
        if (current != string::npos) {
            string reporter = it->substr(0, current);
            string reported = it->substr(current + 1);
            
            reportedMap[reported].push_back(reporter);
        }
    }
    
    for (auto it=reportedMap.begin(); it!=reportedMap.end(); it++) {
        if (it->second.size() >= k) {
            for (int i = 0; i < it->second.size(); i++) {
                reporterMap[it->second[i]]++;
            }
        }
    }
    
    for (auto it=id_list.begin(); it!=id_list.end(); it++) {
        answer.push_back(reporterMap[*it]);
    }
    
    return answer;
}