//#include<cstdio>
//#include<vector>
//#include<algorithm>
//#include<string>
//#include<iostream>
//
//using namespace std;
//
//static int ans = 0;
//
//int func() {
//	vector<string> v;
//	int sum = 0;
//	string str = "aaabbbbccccc";
//	do {
//		vector<string>::iterator it;
//		for (it = v.begin(); it != v.end(); ++it) {
//			//��Ѱ��ʧ�ܷ���string::npos ֵΪ4294967295
//			//�ҵ���break
//			if ((*it).find(str, 0) != string::npos) {
//				break;
//			}
//		}
//		if (it != v.end()) continue;
//		//�������it == v.end()  ���������һ��itѰ�ҵ�ʱ��?���ᷢ������������Ϊit�˳�ʱ��û��++������it != v.end()
//		string str2 = str + str;  //��������ת����Ե��
//		v.push_back(str2);
//		reverse(str2.begin(), str2.end()); //�������ⷭת��Ե��
//		v.push_back(str2);
//		sum++;
//	} while (next_permutation(str.begin(), str.end()));
//	return sum;
//}
//
//int main() {
//	printf("%d\n", func());
//	return 0;
//}