//c++ program to flip the binary image horizontally
#include<bits/stdc++.h>
using namespace std;
//function to flip the matrix using two pointer technique
vector<vector<int>> flip_matrix(vector<vector<int>>matrix)
{
	for(int i=0;i<matrix.size();i++)
		{
			int left = 0;
			int right = matrix[i].size()-1;
			
			while( left <= right )
			{
				//conditions executes if compared elements are not equal
				if(matrix[i][left] == matrix[i][right])
				{
					// if element is 0 it becomes 1 if not it becomes 0
					matrix[i][left] = 1-matrix[i][left];
					matrix[i][right] = matrix[i][left];
				}
				left++;
				right--;
			}
		}
		//return matrix
		return matrix;
}
//Drive code
int main()
{
	// vector<vector<int>>matrix={{1,1,0},{1,0,1},{0,0,0}};
	vector<vector<int>> matrix;
    int row, column=3, a;
    cin>>row;
    // taking input into 2D vector from user
    for(int i=0 ; i<row ; i++) {
        //  cin>>column;
         vector<int> p;
         for(int j=0 ; j<column ; j++) {
              cin>>a;
              p.push_back(a);
         }
         matrix.push_back(p);
    }
	vector<vector<int>>v=flip_matrix(matrix);
	for(int i=0;i<matrix.size();i++)
	{
		for(int j=0;j<matrix[i].size();j++)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<'\n';
	}
}
