//#include<cstdio>
//#include<iostream>
//#include<string>
//#include<set>
//
//using namespace std;
//
////�Ҵ��Ǹ����������
////����һ�������ƽ�
//int func1() {
//	int a = 0, count = 0;
//	int p, q; //���a*a, �� a*a*a
//	while (count != 10)
//	{
//		set<int> sz;
//		a++;
//		p = a * a;
//		q = a * a * a;
//		//�ֽ�p
//		while (p) {
//			sz.insert(p%10);
//			p = p / 10;
//		}
//		//�ֽ�q
//		while (q) {
//			sz.insert(q%10);
//			q = q / 10;
//		}
//		count = sz.size();
//	}
//	return a;
//}
//
//int main() {
//	cout << func1() << endl;
//	return 0;
//}