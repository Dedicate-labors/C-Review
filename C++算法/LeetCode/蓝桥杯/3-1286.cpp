//#include<vector>
//#include<iostream>
//#include<cmath>
//#include<cstdio>
//#include<set>
//using namespace std;
//
////选择出一个Path，Path只有5格
//int table[10];
//int ans = 0; //解决方案次数
//
////测试5个格子满足规则的,如果是连通的，随便选一个格子，可以走到任意一处
//bool test(int step) {
//	set<int> walk;//用来模拟走路
//	walk.insert(table[0]);
//	int k, max;
//	for (int i = 1; i < step; i++) {
//		//判断walk中的格子能否到i表示的格子
//		set<int>::iterator end = walk.end();
//		set<int>::iterator start = walk.begin();
//		while (start != end) {
//			k = abs(*start - table[i]);
//
//			max = *start > table[i] ? *start : table[i];
//			if (k == 1 && (max == 5 || max == 9)) {
//				++start;
//				continue;
//			}
//
//			if (k == 1 || k == 4) {
//				walk.insert(table[i]);
//			}
//			start++;
//		}
//	}
//
//	//顺着大小再来一次
//	for (int i = 4; i >= 0; --i) {
//		//判断walk中的格子能否到i表示的格子
//		set<int>::iterator end = walk.end();
//		set<int>::iterator start = walk.begin();
//		while (start != end) {
//			k = abs(*start - table[i]);
//
//			max = *start > table[i] ? *start : table[i];
//			if (k == 1 && (max == 5 || max == 9)) {
//				++start;
//				continue;
//			}
//
//			if (k == 1 || k == 4) {
//				walk.insert(table[i]);
//			}
//			start++;
//		}
//	}
//	for (int i = 1; i < step; i++) {
//		//判断walk中的格子能否到i表示的格子
//		set<int>::iterator end = walk.end();
//		set<int>::iterator start = walk.begin();
//		while (start != end) {
//			k = abs(*start - table[i]);
//
//			max = *start > table[i] ? *start : table[i];
//			if (k == 1 && (max == 5 || max == 9)) {
//				++start;
//				continue;
//			}
//
//			if (k == 1 || k == 4) {
//				walk.insert(table[i]);
//			}
//			start++;
//		}
//	}
//	//顺着大小再来一次
//	for (int i = 4; i >= 0; --i) {
//		//判断walk中的格子能否到i表示的格子
//		set<int>::iterator end = walk.end();
//		set<int>::iterator start = walk.begin();
//		while (start != end) {
//			k = abs(*start - table[i]);
//
//			max = *start > table[i] ? *start : table[i];
//			if (k == 1 && (max == 5 || max == 9)) {
//				++start;
//				continue;
//			}
//
//			if (k == 1 || k == 4) {
//				walk.insert(table[i]);
//			}
//			start++;
//		}
//	}
//	if (walk.size() != 5) return false;
//	else return true;
//}
//
////step表示下标，但只走5步;n表示总共的格子数
//void dfs(int n, int step) {
//	if (step == 5) {
//		if (test(step)) {
//			ans++;
//			for (int j = 0; j < step; ++j) {
//				cout << table[j] << ' ';
//			}
//			cout << endl;
//		}
//		return;
//	}
//
//	for (int i = n; i >= 1; --i) {
//		table[step] = i;
//		dfs(i-1,step + 1);
//	}
//}
//
////还是dfs问题，查看是否连接在一起，通过格子的value规律
////eg:6和其相邻的value差距分别是1，3，4，5
////注意还有重复的剪法
////看出来此题应该是个组合C12-5并且要满足上面的value规则
//int main() {
//	dfs(12, 0);
//	cout << ans << endl;	
//	return 0;
//}
