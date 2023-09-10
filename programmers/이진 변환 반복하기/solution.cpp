// https://school.programmers.co.kr/learn/courses/30/lessons/70129

#include <string>
#include <vector>

using namespace std;

string convert(int target) {
    string s = "";
    
    while (target > 0) {
        s = to_string(target & 1) + s;
        target >>= 1;
    }
    
    return s;
}

vector<int> solution(string s) {
    vector<int> answer;
    int count = 0;
    int deletes = 0;
    
    while (s.size() != 1) {
        int zeroCnts = 0;
        
        for (auto c: s) {
            if (c == '0') {
                zeroCnts++;
            }
        }
        
        deletes += zeroCnts;
        s = convert(s.size() - zeroCnts);
        count++;
    }
    
    answer.push_back(count);
    answer.push_back(deletes);
    
    return answer;
}
