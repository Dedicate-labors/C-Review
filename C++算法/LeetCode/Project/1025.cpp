//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	//注：游戏双方都不放水
//	bool divisorGame(int N) {
//		//方法一：
//		//return N % 2 == 0; //是偶数就赢了
//		//方法二：递推，只要有一方能被判别为输，另一方一定能赢
//		vector<int> f(N+5, false); //f[i]的值代表N为i时，先手的输赢结果
//		f[1] = false;
//		f[2] = true;
//		for (int i = 3; i <= N; ++i) {
//			for (int j = 1; j < i; ++j) {
//				//j是因子，且f[i-j]的结果表示此时对手的输赢，如果
//				//是true，f[i]默认是false，是false就改为true
//				if (i % j == 0 && !f[i - j]) { 
//					f[i] = true;
//					break;
//				}
//			}
//		}
//		return f[N];
//	}
//};
//
//int main() {
//
//	return 0;
//}