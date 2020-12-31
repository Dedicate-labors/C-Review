//#include<cstdio>
//#include<iostream>
//#include<string>
//#include<set>
//
//using namespace std;
//
////找打那个奇妙的数字
////方法一：暴力破解
//int func1() {
//	int a = 0, count = 0;
//	int p, q; //存放a*a, 和 a*a*a
//	while (count != 10)
//	{
//		set<int> sz;
//		a++;
//		p = a * a;
//		q = a * a * a;
//		//分解p
//		while (p) {
//			sz.insert(p%10);
//			p = p / 10;
//		}
//		//分解q
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