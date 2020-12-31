//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//
////方法二是使用：双指针中的尾指针进行解决，通过下标比较没有被删除的字符，逐个比较这些没被删除的
//class Solution {
//public:
//	//有退格#的效果，通过该下标实现
//	bool backspaceCompare(string S, string T) {
//		string SChange = change(S);
//		cout << SChange << endl;
//		string TChange = change(T);
//		cout << TChange << endl;
//		return SChange == TChange ? true : false;
//	}
//
//	//temp还可能是空哦！！
//	string change(string &temp) {
//		int pos = 0;// 当前字符应该录入位置，但上面没有字符
//		vector<char> ret;
//		for (auto ch : temp) {
//			if (ch != '#') {
//				ret.push_back(ch);
//				pos++;
//			}
//			else if (pos > 0) {
//				pos--;
//				ret.pop_back();
//			}
//			//pos <= 0就不做其他操作
//		}
//		return string(ret.begin(), ret.end());
//	}
//};
//
//int main() {
//	Solution Sol;
//	string S, T;
//	while (cin >> S >> T) {
//		cout << Sol.backspaceCompare(S, T) << endl;
//	}
//	return 0;
//}