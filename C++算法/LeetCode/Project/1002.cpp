//#include<vector>
//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//
//class Solution {
//public:
//	vector<string> commonChars(vector<string>& A) {
//		string temp = A[0];
//		int len = temp.length();
//		char *str = new char[len+5];
//		vector<string> ret; //作为结果返回
//		temp.copy(str, len, 0);
//
//		//对str进行循环
//		int i, j;
//		string c;
//		for (i = 0; i < len; ++i) {
//			for (j = 1; j < A.size(); ++j) {
//				int pos = A[j].find(str[i]);
//				if (pos == -1) break;
//				else A[j].erase(pos, 1);
//			}
//			if (j == A.size()) {
//				c = str[i];
//				ret.push_back(c);
//			}
//		}
//		return ret;
//	}
//};
//
//int main() {
//	vector<string> vecs{ "cool","lock","cook" };
//	Solution S;
//	S.commonChars(vecs);
//	return 0;
//}