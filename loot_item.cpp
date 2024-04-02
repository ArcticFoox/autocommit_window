//87694(programmers) BFS
#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<vector<int>> rectangle, int characterX, int characterY, int itemX, int itemY) {
    int answer = 0;
    
    characterX *= 2, characterY *= 2, itemX *= 2, itemY *= 2;
    vector<vector<int>> board(110, vector<int>(110));
    
    int x1, y1, x2, y2;
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    
    for(int i = 0; i < rectangle.size(); i++){
        for(int j = 0; j < rectangle[0].size(); j++)
            rectangle[i][j] = rectangle[i][j] * 2;

        x1 = rectangle[i][0], y1 = rectangle[i][1];
        x2 = rectangle[i][2], y2 = rectangle[i][3];

        for(int y = y1; y <= y2; y++)
            for(int x = x1; x <= x2; x++)
                board[y][x] = 1;
    }

    for(int i = 0; i < rectangle.size(); i++){
        x1 = rectangle[i][0], y1 = rectangle[i][1];
        x2 = rectangle[i][2], y2 = rectangle[i][3];

        for(int y = y1 + 1; y < y2; y++)
            for(int x = x1 + 1; x < x2; x++)
                board[y][x] = 0;
    }
    
    queue<pair<int, int>> q;
    q.emplace(characterY, characterX);
    while (!q.empty()){
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        if(y == itemY && x == itemX)
            break;

        for(int i = 0; i < 4; i++){
            int nextY = y + dy[i];
            int nextX = x + dx[i];

            if (board[nextY][nextX] == 1)
            {
                q.emplace(nextY, nextX);
                board[nextY][nextX] = board[y][x] + 1;
            }
        }
    }
    
    answer = board[itemY][itemX] / 2;
    return answer;
}