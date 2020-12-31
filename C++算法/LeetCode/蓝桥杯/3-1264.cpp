//#include<iostream>
//#include<vector>
//using namespace std;
//
///*
//通过观察知道1和10的位置是固定的，因为他们各自代表最大和最小
//使用多态规划
//*/
//
//int f[10][10];//所有第一行有 i 个数字，第二行有 j 个数字的方案的集合
//
////不是特别懂？？
//int main() {
//	f[0][0] = 1; //为空也是一种方案
//	for (int i = 0; i <= 5; i++) {
//		for (int j = 0; j <= 5; ++j) {
//			if (i - 1 >= j) f[i][j] += f[i - 1][j]; //i-1代表第一行的数目，必须大于第二行才启动
//			if (j) f[i][j] += f[i][j - 1];
//		}
//	}
//	cout << f[5][5] << endl;
//	return 0;
//}