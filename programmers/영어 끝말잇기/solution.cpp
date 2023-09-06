// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/12981

#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    map<string, int> records;
    int iters = 0;
    char before = 'a';
    char now;
    
    for (int i = 0; i < words.size(); i++) {
        iters = (i / n) + 1;
        int size = words[i].size();
        now = words[i][0];
        
        if (records[words[i]]) {
            answer.push_back((i - (n * (iters - 1)) + 1));
            answer.push_back(iters);
            break;
        }
        
        if ((before != now) && (i != 0)) {
            answer.push_back((i - (n * (iters - 1)) + 1));
            answer.push_back(iters);
            break;
        }
        
        records[words[i]] = 1;
        before = words[i][size - 1];;
    }
    
    if (answer.size() == 0) {
        answer.push_back(0);
        answer.push_back(0);
    }

    return answer;
}