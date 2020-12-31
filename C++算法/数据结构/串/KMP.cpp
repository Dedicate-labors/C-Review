//#include<iostream>
//using namespace std;
//
///*
//此处获得子串T的改良next数组
//此处与书上的会有所不同
//*/
//void get_next(string T,int next[]) {
//	int len = T.length();
//	int i = 0; //i是T和next的下标
//	int j = -1;
//	//初始化i == 0的情况
//	next[0] = -1;
//	while (i < len-1)
//	{
//		//j == -1是为了第一次或者j被赋值为-1的时候准备的
//		//T[j]是前缀单个字符或者前一个字符
//		//T[i]则是后缀字符
//		if (j == -1 || T[j] == T[i]) {
//			++j;
//			++i;
//			//这里容易发生下标越界
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
//和之前暴力解法很像，但暴力解法要回溯，KMP不回溯，所以耗时少
//*/
//int Index_KMP(string S, string T, int pos) {
//	int lenS = S.length(),lenT = T.length();
//	int *next  = new int[lenT]{ 0 };
//	get_next(T, next);
//
//	int i = pos; //S的下标
//	int j = 0; //T的下标
//	while (i < lenS && j < lenT) {
//		if (j == -1 || S[i] == T[j]) {
//			++i;
//			++j;
//		}
//		else
//			j = next[j];
//	}
//	//此处报错最有可能是越界了
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