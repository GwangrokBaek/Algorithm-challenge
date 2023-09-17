// https://school.programmers.co.kr/learn/courses/30/lessons/12953

#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    int multiplier = 0;
    
    sort(arr.begin(), arr.end(), greater<int>());
    
    while (true) {
        bool flag = true;
        multiplier++;
        
        answer = arr[0] * multiplier;
        
        for (int i = 1; i < arr.size(); i++) {
            if (answer % arr[i] != 0) {
                flag = false;
                break;
            }
        }
        
        if (flag) break;
    }
    
    return answer;
}
