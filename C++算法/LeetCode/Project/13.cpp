//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
///*
//�����12��պ��෴��������������
//*/
//class Solution {
//public:
//	int romanToInt(string s) {
//		//����symbols
//		int now = 0, per = 0, ret = 0; //now��Ŀǰλ��per����һλ��ret�ǽ��
//		for (int i = 0; i < s.length(); i++)
//		{
//			now = chToInt(s[i]); //��ĳλתΪint
//			if (now <= per) ret += now;
//			else {
//				//ret��ʱ�����ϴε�perֵ
//				//�˴�����ı�����per��now��λ���е�ֵ(now - per)
//				//ret = ret - per + (now - per)
//				ret += (now - 2*per);
//			}
//			per = now;
//		}
//		return ret;
//	}
//private:
//	int values[7] = {1, 5, 10, 50, 100, 500, 1000};
//	char Roman[7] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
//	int chToInt(char ch);//ch->int
//};
//
//int Solution::chToInt(char ch) {
//	int i = 0;
//	for (i = 0; i < 7; i++) {
//		if (ch == Roman[i]) break;
//	}
//	return values[i];
//}
//
//int main() {
//	string s;
//	Solution S;
//	while (cin >> s) {
//		cout << S.romanToInt(s) << endl;
//	}
//	return 0;
//}