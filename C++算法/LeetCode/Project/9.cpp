//#include<iostream>
//#include<string>
//#include<cctype>
//#include<sstream>
//#include<climits>
//using namespace std;
//
//class Solution {
//public:
//	bool isPalindrome(int x) {
//		if (x < 0) return false;
//		//֮����ת�����ַ���������x���ܵ�������
//		string strX = to_string(x); //תΪ�ַ���
//		string strXR = strX; 
//		int len = strX.length();
//		bool res = false;
//		for (int f = 0, l = len - 1; f < len; ++f, --l) {
//			res += (strX[f] ^ strXR[l]);
//		}
//		return !res;
//	}
//};
//
//int main() {
//	Solution s;
//	int num;
//	while(cin >> num){
//		cout << s.isPalindrome(num) << endl;
//	}
//	return 0;
//}