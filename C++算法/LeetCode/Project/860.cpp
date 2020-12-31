//#include<iostream>
//#include<vector>
//#include<map>
//using namespace std;
//
////题解思路和我一样，只不过写的更加确定
//
//class Solution {
//public:
//	//按照bills的顺序做生意，每次赚5元，多余的钱要退回
//	//一开始没有钱，只有货
//	//myaccount = 0, first > 5 return false;
//	//first == 5, account += 5
//	//second > 5, (second - 5) 相比于 myaccount
//	bool lemonadeChange(vector<int>& bills) {
//		int len = bills.size(); //第一笔交易
//		if (len == 0 || bills[0] > 5) return false;
//
//		map<int, int> account; //三种类型的票子，每种票子的数目
//		account[5] = 1;
//		account[10] = 0;
//		account[20] = 0;
//		int sum = 5; //总数
//
//		for (int i = 1; i < len; ++i) {
//			//加入bills[i]这张票子，找回(bills[i]-5)
//			int retLin = (bills[i] - 5);
//			if (retLin > sum) return false;
//			//开始测试是否能找零 0 5 15，只需要处理5， 15
//			if (retLin == 0) account[5] += 1;
//			if (retLin == 5) {
//				if (account[5] > 0) { account[5] -= 1; account[10] += 1; }
//				else return false;
//			}
//			if (retLin == 15) {
//				//查看account中的10元，5元是否足够，account[20] += 1;
//				//优先去选择10元，之后再选择5元
//				if (account[10] > 0) { retLin -= 10; account[10] -= 1; }
//				//剩余的retLin使用5元找补
//				while (retLin) {
//					if (account[5] > 0) {
//						retLin -= 5;
//						account[5] -= 1;
//					}
//					else
//						return false;
//				}
//				account[20] += 1;
//			}
//			//找零成功
//			sum += 5;
//		}
//		return true;
//	}
//};
//
//int main()
//{
//	Solution S;
//	vector<int> bills = { 5,5,10,10,5,20,5,10,5,5 };
//	S.lemonadeChange(bills);
//	return 0;
//}