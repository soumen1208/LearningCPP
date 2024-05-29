#include <bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector < int > & histo) {
    stack < int > st;
    int maxA = 0;
    int n = histo.size();
    for (int i = 0; i <= n; i++) {
        while (!st.empty() && (i == n || histo[st.top()] >= histo[i])) {
            int height = histo[st.top()];
            st.pop();
            int width;
            if (st.empty())
                width = i;
            else
                width = i - st.top() - 1;
            maxA = max(maxA, width * height);
        }
        st.push(i);
    }
    return maxA;
}
int maximalAreaOfSubMatrixOfAll1(vector<vector<int>> &mat, int n, int m) {
    // Write your code here.
    int maxArea = 0;
    vector<int> height(m, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == 1) height[j]++;
            else height[j] = 0;
        }
        int area = largestRectangleArea(height);
        maxArea = max(maxArea, area);
    }
    return maxArea;
}

int main() {

    // vector<vector<int>> mat = {
    //     {1, 0, 1, 0, 0}, {1, 0, 1, 1, 1},
    //     {1, 1, 1, 1, 1}, {1, 0, 0, 1, 0}
    // };
    // int n = 4, m = 5;

    // int row,col;
    // cin>>row>>col;
    // vector<vector<int>>matrix;
    // for(int i=0;i<row;i++){
    //    vector<int>temp;
    //   for(int j=0;j<col;j++){
    //   int val;
    //    cin>>val;
    //    temp.push_back(val);
    // }
    //   matrix.push_back(temp);
    // }
    int row, col;
    cin>>row>>col;
    vector<vector<int>>matrix;
    for (int i=0; i<row; i++)
    {
        vector<int>temp;
        for (int j=0; j<col; j++)
        {
            int value;
            cin>>value;
            temp.push_back(value);
        }
        matrix.push_back(temp);
    }
    int maxArea = maximalAreaOfSubMatrixOfAll1(matrix, row, col);
    cout<< maxArea;
    return 0;
}   