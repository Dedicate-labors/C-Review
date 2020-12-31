//#include<string>
//#include<iostream>
//#include<vector>
//#include<climits>
//
//using namespace std;
//
////目标对S拆分成F vetcor<int> 。还要满足斐波拉契规则，所以F.size() >= 3
////请注意，将字符串拆分成小块时，每个块的数字一定不要以零开头，除非这个块是数字 0 本身。
////暴力解法，设定F[0]的长度大小，再设定F[1]的大小，判断后面是否如期而至
////F[0]的长度设为l0,F[1]的长度设置为l1， F[2]的长度设置为l2， l2 >= (l1 > l0 ? l1:l0) 否则continue
////找到正确的l0,l2后退出上面的查找
//
//class Solution {
//public:
//	vector<int> splitIntoFibonacci(string S) {
//		int len = S.size(); //i和j、z是关于S的下标
//		vector<int> F;
//		for (int l0 = 1; l0 <= len / 2 && l0 <= 10; ++l0) {
//			//数字不能以0开头，除非这个块是数字 0 本身
//			if (l0 > 1 && S[0] == '0') break;
//			for (int l1 = 1; l1 <= len / 2 && l1 <= 10; ++l1) {
//				int l2 = len - l1 - l0;
//				if (l2 < (l1 > l0 ? l1 : l0)) continue;
//				//数字不能以0开头，除非这个块是数字 0 本身
//				if (l1 > 1 && S[l0] == '0') break;
//				if (func(S, 0, l0, l1))
//				{
//					//找到答案,先塞两个
//					int a = stoi(S.substr(0, l0)), b = stoi(S.substr(l0, l1));
//					F.emplace_back(a);
//					F.emplace_back(b);
//					int pos = l0 + l1;
//					retAns(F,0,pos,len-1);
//					return F;
//				}
//			}
//		}
//		return F;
//	}
//
//	//i是起始下标，l0, l1
//	bool func(string &S,const int & i, int l0, int l1) {
//		int j = i+l0, z = j + l1;//j,z作为F[1],F[2]在S中映射的下标
//
//		//如何返回true也要实现
//		if (z == S.size()) return true;
//		//判断l0,l1,l2目前长度基本是<=10位的,但还不够
//		long long F0, F1, temp;
//		if(l0)
//		F0 = stoll(S.substr(i, l0)), F1 = stoll(S.substr(j, l1));
//		temp = F0 + F1;
//		if (F0 > INT_MAX || F1 > INT_MAX || temp > INT_MAX) return false;
//		string F2 = to_string(temp);
//		int l2 = F2.size();
//
//		//判断要改下，F2才是判断依据
//		for (int j = 0;j < F2.size(); ++j) {
//			if (z >= S.size()) return false;
//			if (F2[j] != S[z++]) return false;
//		}
//		//假如F2是OK的，我们去搞F3...
//		return func(S, j, l1, l2);
//	}
//
//	void retAns(vector<int> &F,int i, int pos, int end) {
//		//开始从F2开始塞元素,pos目前处于F2下标
//		if (pos <= end) {
//			int F2 = F[i] + F[i + 1];
//			int l2 = to_string(F2).size();
//			F.emplace_back(F2);
//			retAns(F, i + 1, pos + l2, end);
//		}
//	}
//};
//
//
//int main()
//{
//	//Solution S;
//	//string str = "214748364721474836422147483641";
//	//S.splitIntoFibonacci(str);
//	return 0;
//}