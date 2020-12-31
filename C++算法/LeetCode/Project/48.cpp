//#include<iostream>
//#include<vector>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//
////题目：原地修改矩阵，旋转90°
////nxn二维矩阵M, 需要其他变量帮助，可以每行的修改嘿嘿
///*
//M[0][1] M[0][2] M[0][3]   
//M[1][1] M[1][2] M[1][3]	  
//M[2][1] M[2][2] M[2][3]   
//*/
//
////解法1：选择右上角斜线，从M[0][n-1]开始；交换第0行和第m-1列除M[0][m-1]的元素(镜像交换)；
////将第m-1列反转即可；
//
////右上角斜线元素个数为n个，变化过程：M[0][n-1]的行下标+1，列下标-1
////列下标全部减-1，-2即可达到对应行下标：swap(M[1][n-1],M[1-1][n-1-1])
////反转第n-1列，M[0][n-1] -> M[n-1][n-1],逐步交换
//class Solution {
//public:
//	void rotate(vector<vector<int>>& matrix) {
//		int n = matrix.size();
//		for (int i = 0, j = n-1; i < n; ++i,--j) {
//			int angle = matrix[i][j]; //斜上角元素 当前的(i,j)下标元素不能动
//			//遍历第j列，swap交换元素
//			int d = 1, k;
//			for (k = i + 1; k < n; ++k) {
//				swap(matrix[k][j], matrix[k-d][j-d]);
//				++d;
//			}
//			//反转整个第j列
//			reversal(matrix, j, n);
//		}
//	}
//
//	//反转整个第j列
//	void reversal(vector<vector<int>>& matrix,int j, int n) {
//		int left = 0, right = n - 1; //行下标
//		while (left < right)
//		{
//			swap(matrix[left][j], matrix[right][j]);
//			left++, right--;
//		}
//	}
//};
//
//int main()
//{
//	return 0;
//}