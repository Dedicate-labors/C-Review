//#include<cstdio>
//#include<vector>
//#include<iostream>
//
//using namespace std;
//
//static int ans = 0;
//
///*
//只考虑点数的情况下返回的组合数
////k是牌型，cnt用来计数已经有的牌
//*/
//void retNumCollect(int k, int cnt) {
//	if (cnt > 13 || k > 13)
//		return;
//	if (k == 13 && cnt == 13) {
//		ans++;
//		return;
//	}
//	for (int i = 0; i < 5; ++i) {
//		retNumCollect(k + 1, cnt + i);
//		//retNumCollect(牌类型,改类型的牌数目从0-4的情况)
//	}
//}
//
//int main() {
//	retNumCollect(0,0);
//	cout << ans << endl;
//	return 0;
//}