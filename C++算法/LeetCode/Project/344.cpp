//#include<string>
//#include<vector>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	//����ʹ�ö���ռ䣬ԭ�ؽ��
//	void reverseString(vector<char>& s) {
//		int n = s.size();
//		int i = 0, j = n - 1;
//		for (i, j; i < j; i++, j--) {
//			swap(s[i], s[j]);
//		}
//		for_each(s.begin(), s.end(), [](char c) { cout << c << ' '; });
//	}
//};
//
//int main() {
//	Solution S;
//	vector<char> vec = { 'h','e','l','l','o' };
//	S.reverseString(vec);
//	return 0;
//}