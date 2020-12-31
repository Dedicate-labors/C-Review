//#include<string>
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//	//暴力破解
//	int numJewelsInStones(string J, string S) {
//		int count = 0;
//		int lenS = S.length();
//		for (int i = 0; i < lenS; ++i) {
//			if (isGem(S[i], J)) count++;
//		}
//		return count;
//	}
//	//解法二是用哈希存储J，但我觉得思路没变
//
//private:
//	bool isGem(char & ch, string & J);//判断是否为宝石
//};
//
//bool Solution::isGem(char & ch, string & J) {
//	for (int i = 0; i < J.length(); ++i) {
//		if (ch == J[i]) return true;
//	}
//	return false;
//}
//
//int main() {
//	string J, S;
//	Solution Obj;
//	while (cin >> J >> S)
//	{
//		cout << Obj.numJewelsInStones(J,S) << endl;
//	}
//	return 0;
//}