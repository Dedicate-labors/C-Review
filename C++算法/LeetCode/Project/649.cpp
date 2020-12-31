//#include<iostream>
//#include<vector>
//#include<string>
//#include<cstring>
//#include<unordered_map>
//#include<queue>
//using namespace std;
//
///*
//规则：两个阵营的参议员进行每轮按senate的顺序进行投票，除了投票还有两项权力中的一项
//1. 禁止一名参议员的权利，丧失所有权利，包括自己手中的票
//2. 如果参议员发现有权利投票的参议员都是同一个阵营的，他可以宣布胜利并决定在游戏中的有关变化。
//
//如果senate大小为n，以轮为基础的过程从给定顺序的第一个参议员开始到最后一个参议员结束，这一过程
//将持续到投票结束。所有失去权利的参议员将在过程中被跳过。
//
//既每轮所有的参议员按照顺序行使权力，直到最后全是自己人时，表明获胜
//*/
//
////方法一：先按照顺序尽量干掉还有权利的对手，余下没有有权利的就干掉还活着的，活下来的人继续。贪心？？
////直到剩下的全是自己人
//
//class Solution {
//public:
//	string predictPartyVictory(string senate) {
//		//bool数组 每轮结束后 做出subStr
//		int len = senate.length();
//		//全相等的情况
//		if (isSame(senate)) return getRet(senate[0]);
//
//		//不全相等的情况
//		vector<bool> isEffect(len, true); //代表当前序列还有活的人
//		int l = 0, r = 1;//l代表存活还有权利的人，r代表与其比较的存在,只要是活着的就行
//		while (true)
//		{
//			//一开始的l就必须是存活还有权利的人，r = (l+1) % len;
//			l = 0;
//			while (!isEffect[l] && l < len) l++;
//			r = (l + 1) % len;
//			while (l < len) {
//				//如果相等或者r是死的，都循环找下一个,一开始l和r肯定不等
//				while (senate[l] == senate[r] || !isEffect[r]) {
//					if (l == r) return getRet(senate[l]);
//					r = (r + 1) % len;
//				}
//				//找到第一个不相等的值
//				isEffect[r] = false; r = (r + 1) % len;
//
//				//找到下一个存活还有权利的人
//				l++;
//				while (!isEffect[l] && l < len) l++;
//				r = (l + 1) % len;
//			}
//		}
//	}
//
//	bool isSame(string subStr) {
//		char first = subStr[0];
//		int len = subStr.length();
//		for (int i = 1; i < len; ++i) {
//			if (first != subStr[i]) return false;
//		}
//		return true;
//	}
//
//	string getRet(char &first) {
//		if (first == 'R') return "Radiant";
//		else return "Dire";
//	}
//};
//
//int main()
//{
//	return 0;
//}