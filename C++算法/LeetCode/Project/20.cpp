//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<string>
//#include<stack>
//
//using namespace std;
//
///*
//����һ��ֻ���� '('��')'��'{'��'}'��'['��']' ���ַ������ж��ַ����Ƿ���Ч
//ʹ��ջ
//*/
//class Solution {
//public:
//	bool isValid(string s) {
//		//�ų��������
//		//if (s == "" || s[0] == ')' || s[0] == ']' || s[0] == '}') return false;
//
//		stack<char> stKh;
//		char temp;
//
//		/*
//		stPh��ʱ���s[i], ��ʱ��Ƚ�
//		*/
//		for (int i = 0; i < s.length(); ++i) {
//			if (!stKh.empty()) {
//				temp = stKh.top();
//				if (!isEqual(temp, s[i])) stKh.push(s[i]);
//				else
//					stKh.pop();
//			}
//			else
//				stKh.push(s[i]);
//		}
//		if (stKh.size() == 0) return true;
//		else
//			return false;
//	} 
//private:
//	bool isEqual(char a, char b); //�ж����������Ƿ���Ե���
//};
//
//bool Solution::isEqual(char a, char b){
//	//a��ջ����ֻ��Ϊ������ʱ�ſ��ܱ�����,  b���в�ȷ����
//	int i;
//	char Kh[6] = {'(',')','[',']','{','}'};
//	for (i = 0; i < 6; ++i) {
//		if (Kh[i] == a) break;
//	}
//	//�õ��±�i
//	if (i == 0 || i == 2 || i == 4) return Kh[i + 1] == b ? true : false;
//	return false;
//}
//
//int main() {
//	string str;
//	Solution S;
//	while (cin >> str) {
//		cout << S.isValid(str) << endl;
//	}
//	return 0;
//}