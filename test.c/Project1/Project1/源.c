#include<iostream>
#include<vector>
#include<ctime>
using namespace std;

void InitArray(vector<vector<int>>& V)
{
	int row,input;
	cout << "请输入数组的行" << endl;
	cin >> row;
	cout << "请输入数组内容" << endl;
	for (int i = 0; i < row; i++)
	{
		vector<int>v;
		for (int j = 0; j < row; j++)
		{
			cin >> input;
			v.push_back(input);
		}
		V.push_back(v);
	}
}

void RandArray(vector<vector<int>>& V)
{
	srand((unsigned int)time(NULL));
	int row;
	cout << "请输入数组的行:" << endl;
	cin >> row;
	for (int i = 0; i < row; i++)
	{
		vector<int>v;
		for (int j = 0; j < row; j++)
		{
			v.push_back(rand()%10);
		}
		V.push_back(v);
	}
}
void RotateArray(vector<vector<int>>& V)
{
	int row = V.size();
	for (int i = 0; i < row/2; i++)
	{
		for (int k = 0; k < row; k++)
		{
			int temp = V[i][k];
			V[i][k] = V[row-i-1][k];
			V[row-i-1][k] = temp;
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int k = 0; k < i; k++)
		{
			int temp = V[i][k];
			V[i][k] = V[k][i];
			V[k][i] = temp;
		}
	}
}
void PrintArray(vector<vector<int>> V)
{
	for (vector<vector<int>>::iterator it = V.begin(); it != V.end(); it++)
	{
		for (vector<int>::iterator itt = (*it).begin(); itt != (*it).end(); itt++)
			cout << *itt << "   ";
			cout << endl;
	}
}
int main()
{
	vector<vector<int>>v;
    //InitArray(v);
	RandArray(v);
	cout << "旋转前的数组为:" << endl;
	PrintArray(v);
	RotateArray(v);
	cout << "旋转后的数组为:" << endl;
	PrintArray(v);
}
