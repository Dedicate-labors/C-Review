//#include<iostream>
//using namespace std;
//
///*
//�˴�����Ӵ�T�ĸ���next����
//�˴������ϵĻ�������ͬ
//*/
//void get_next(string T,int next[]) {
//	int len = T.length();
//	int i = 0; //i��T��next���±�
//	int j = -1;
//	//��ʼ��i == 0�����
//	next[0] = -1;
//	while (i < len-1)
//	{
//		//j == -1��Ϊ�˵�һ�λ���j����ֵΪ-1��ʱ��׼����
//		//T[j]��ǰ׺�����ַ�����ǰһ���ַ�
//		//T[i]���Ǻ�׺�ַ�
//		if (j == -1 || T[j] == T[i]) {
//			++j;
//			++i;
//			//�������׷����±�Խ��
//			if (T[i] != T[j])
//				next[i] = j;
//			else
//				next[i] = next[j];
//		}
//		else
//			j = next[j];
//	}
//}
//
///*
//��֮ǰ�����ⷨ���񣬵������ⷨҪ���ݣ�KMP�����ݣ����Ժ�ʱ��
//*/
//int Index_KMP(string S, string T, int pos) {
//	int lenS = S.length(),lenT = T.length();
//	int *next  = new int[lenT]{ 0 };
//	get_next(T, next);
//
//	int i = pos; //S���±�
//	int j = 0; //T���±�
//	while (i < lenS && j < lenT) {
//		if (j == -1 || S[i] == T[j]) {
//			++i;
//			++j;
//		}
//		else
//			j = next[j];
//	}
//	//�˴��������п�����Խ����
//	delete []next;
//	if (j >= lenT)
//		return i - lenT;
//	return -1;
//}
//
//int main() {
//	string S("goodgoogle"), T("google");
//	cout << Index_KMP(S, T, 0) << endl;
//	return 0;
//}