//#include<iostream>
//#include <algorithm> 
//#include <vector> 
//
//using namespace std;
//
////0,1组合来表达
////这个是用数学原理实现的，所以快速简单
//
//void printEachResult(int t[], int index, int total) {
//
//	for (int i = 0; i < total; ++i) {
//		if ((index >> i) & 1 == 1) {
//			cout << t[i] << " ";
//		}
//	}
//	cout << endl;
//}
//
//void combination(int t[], int count) {
//	//cout 不变
//	for (int i = 0; i < (1 << count); ++i) {
//		printEachResult(t, i, count);
//	}
//}
//
//
//int main()
//{
//	const int N = 3;
//	int t[N] = { 1, 2, 3 };
//	combination(t, N);
//	system("pause");
//	return 0;
//}