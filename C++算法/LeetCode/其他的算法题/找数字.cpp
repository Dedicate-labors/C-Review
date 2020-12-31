////1.给定无序整数数组，其构成方式如下：
////首先给出1到n这n个连续不重复的数，随机移除其中一个数，再随机将剩下的数中的一个数重复一次，最后打乱当前得到的数组。请找出这两个数。
////输入：3 5 6 5 4 1（构成方式：n = 6，初始数组1 2 3 4 5 6，移除2，重复5，打乱得3 5 6 5 4 1）
////输出 2 5
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<iterator>
//#include<numeric>
//#include<unordered_set>
//using namespace std;
//
//vector<int> findNums(int sz[],int len) {
//	int sum = accumulate(sz, sz+len, 0);
//	int diff = (1+len)*len / 2 - sum;
//	//diff正负不能判断
//	//寻找缺少或者重复的
//	unordered_set<int> occ;
//	int i;
//	for (i = 0; i < len && !occ.count(sz[i]); ++i) {
//		occ.insert(sz[i]);
//	}
//	//寻找到重复的就停下
//	vector<int> ret;
//	ret.emplace_back(sz[i]);
//	ret.emplace_back(sz[i]+diff);
//	return ret;
//}
//
//int main() {
//	int sz[] = {3, 5, 6, 5, 4, 1};
//	vector<int> ret;
//	ret = findNums(sz, sizeof(sz)/sizeof(int));
//	for_each(ret.begin(), ret.end(), [](int &num) {cout << num << ' ';});
//	return 0;
//}
