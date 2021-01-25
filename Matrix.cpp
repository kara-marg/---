#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int m = 20;
	int n = 25;
	int** matrix;
	matrix = new int* [m];
	matrix = new int* [m];
	matrix[m][n];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			matrix = new int* [n];
			matrix = new int* [j];
			matrix[i][j] = i + j;
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (matrix[i][j] > 0)
			{
				cout << matrix[i][j] << endl;
			}

		}
	}
}