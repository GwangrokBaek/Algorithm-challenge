// [문제 링크]: https://school.programmers.co.kr/learn/courses/30/lessons/172928

// [구현]
// 30m
// 입력 데이터의 사이즈가 작을 경우에는 대부분 구현 문제이니 알맞는 알고리즘 찾는다고 시간 낭비하지말고 일단 빨리 구현해내자.
// 다양한 STL을 각각 어떤 상황에서 사용하는 것이 좋은지 알아두는 것이 좋음.
// 좌표 문제는 while문과 temp 좌표에 대한 증감연산자를 활용하자.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer; // 세로, 가로
    int height = park.size();
    int width = park[0].size();
    
    for (int i = 0; i < height; i++) {
        int temp = park[i].find("S");
        if (temp != string::npos) {
            answer.push_back(i);
            answer.push_back(temp);
        }
    }
    
    for (int i = 0; i < routes.size(); i++) {
        vector<int> tempCoord = {answer[0], answer[1]};
        int distance = routes[i][2] - '0';
        bool wrongPos = false;
        
        while (distance--) {
            switch(routes[i][0]) {
                case 'E':
                    tempCoord[1]++;
                    break;
                case 'W':
                    tempCoord[1]--;
                    break;
                case 'N':
                    tempCoord[0]--;
                    break;
                case 'S':
                    tempCoord[0]++;
                    break;
            }
            
            if (park[tempCoord[0]][tempCoord[1]] == 'X') {
                wrongPos = true;
                break;
            } else {
                if ((tempCoord[0] < 0 || tempCoord[0] >= height) || (tempCoord[1] < 0 || tempCoord[1] >= width)) {
                    wrongPos = true;
                    break;
                }
            }
        }
        
        if (!wrongPos) {
            answer = tempCoord;
        }
    }
    
    return answer;
}