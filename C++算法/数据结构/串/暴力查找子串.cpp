//#include<iostream>
//#include<string>
//using namespace std;
//
///*
//����S�ַ���pos�±��������ַ���T�������ص�һ���±�
//*/
//int Index(string S, string T, int pos) {
//	int lenS = S.length(),lenT = T.length();
//	int i = pos;
//	int j = 0;
//	while (i < lenS && j < lenT) {
//		if (S[i] == T[j]) {
//			++i;
//			++j;
//		}
//		else {
//			i = i - j + 2;
//			j = 0;
//		}
//	}
//	if (j >= lenT)
//		return i - lenT;
//	return -1;
//}
//
//int main() {
//	string S("goodgoogle"), T("google");
//	cout << Index(S, T, 0) << endl;
//	return 0;
//}