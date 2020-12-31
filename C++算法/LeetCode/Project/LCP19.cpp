//#include<string>
//#include<vector>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	/*
//	使用多态规划解题
//	n行3列的表格，0，1，2分别代表前红，黄，后红
//	f[i][0] = f[i-1][0] + isYellow(i); //状态0是前红，所以i如果是黄色要改成红色isYellow(i)true为1
//	f[i][1] = min(f[i-1][0],f[i-1][1]) + isRed(i); //状态1是黄色，我们需要将第 ii 片叶子变成黄色，而
//	第 i-1i−1 片叶子既可以处于 j=1j=1 的状态，也可以处于 j=0j=0 的状态，我们选择其中的较小值
//	。。。
//	f[0][0] = isYellow(0), 第一个必须是红色的，所以判断后直接赋值
//	对于状态 f[i][j] 而言，它包含了leaves[0..i] 共 i+1 片叶子以及 j+1 个状态，因此 叶子的数
//	量必须大于等于状态的数量，即满足 i ≥j。这样一来，所有 i < j 的状态 f[i][j]都是不符合要求的。
//	*/
//	int minimumOperations(string leaves) {
//		int n = leaves.length();
//		vector<vector<int>> f(n, vector<int>(3));
//		//为黄色，直接+1，代表改成红色的操作
//		f[0][0] = (leaves[0] == 'y'); 
//		f[0][1] = f[0][2] = f[1][2] = INT_MAX; //i < j是不符合要求的，所以设置为最大值
//		for (int i = 1; i < n; ++i) {
//			int isRed = (leaves[i] == 'r');
//			int isYellow = (leaves[i] == 'y');
//			f[i][0] = f[i - 1][0] + isYellow; //前红
//			f[i][1] = min(f[i - 1][0], f[i - 1][1]) + isRed;//黄 状态1，只要两片叶子就可以开始
//			if (i >= 2) { //状态二至少要三片叶子才考虑，这是从逻辑考虑的
//				f[i][2] = min(f[i-1][1], f[i-1][2]) + isYellow;
//			}
//		}
//		return f[n - 1][2];
//	}
//
//	//解法二：前缀和 + 动态规划 ,一种出于整体的算法，要看懂去leetcode题解
//	int minimumOperations2(string leaves) {
//		int n = leaves.length();
//		int g = (leaves[0] == 'y' ? 1 : -1);
//		int gmin = g;
//		int ans = INT_MAX;
//		for (int i = 1; i < n; ++i) {
//			int isYellow = (leaves[i] == 'y');
//			g += 2 * isYellow - 1;
//			if (i != n - 1) {
//				ans = min(ans, gmin - g);
//			}
//		}
//		return ans + (g + n) / 2;
//	}
//};
//
//int main() {
//	Solution S;
//	string str;
//	while (cin >> str) {
//		cout << S.minimumOperations(str) << endl;
//	}
//	return 0;
//}