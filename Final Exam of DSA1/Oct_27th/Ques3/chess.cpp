#include<bits/stdc++.h> 
using namespace std;

int chess_board;
vector<pair<int, int>> movement = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};

bool isSafe(vector<vector<bool>> &board, int row, int col) {
    if (row >= 0 && col >= 0 && row < chess_board && col < chess_board && !board[row][col]) {
        for (const auto &x : movement) {
            int newRow = row + x.first;
            int newCol = col + x.second;
            if (newRow >= 0 && newCol >= 0 && newRow < chess_board && newCol < chess_board && board[newRow][newCol]) {
                return false;
            }
        }
        return true;
    }
    return false;
}

int cntOfDiffDisntWaysTheKnights(vector<vector<bool>> &board, int row, int col, int knights) {
    if (knights == chess_board) {
        return 1;
    }

    int wayOfPlaced = 0;

    for (int i = row; i < chess_board; i++) {
        for (int j = (i == row ? col : 0); j < chess_board; j++) {
            if (isSafe(board, i, j)) {
                board[i][j] = true;
                wayOfPlaced += cntOfDiffDisntWaysTheKnights(board, i, j, knights + 1);
                board[i][j] = false;
            }
        }
    }

    return wayOfPlaced;
}

void printN_KnightsValidConfig(vector<vector<bool>> &board, int row, int col, int knights, string currN_knights){
    if (knights == chess_board) {
        cout << currN_knights << " ";
        return;
    }

    for (int i = row; i < chess_board; i++) {
        for (int j = (i == row ? col : 0); j < chess_board; j++) {
            if (isSafe(board, i, j)) {
                board[i][j] = true;
                printN_KnightsValidConfig(board, i, j, knights + 1, currN_knights + "{" + to_string(i) + "-" + to_string(j) + "} ");
                board[i][j] = false;
            }
        }
    }
}

int main() {
    cin >> chess_board;
    vector<vector<bool>> board(chess_board, vector<bool>(chess_board, false));

    int ways = cntOfDiffDisntWaysTheKnights(board, 0, 0, 0);
    printN_KnightsValidConfig(board, 0, 0, 0, "");
	cout<<endl;
    cout << ways << endl;
    return 0;
}