//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//
//using namespace std;
//
///*
//1000-01-01到2020-01-01
//*/
//int monthPd(int a, int b);
//vector<int> retDate(int a, int b, int c, int n) {
//	vector<int> ret;
//	int month; //month的上限
//	month = monthPd(a, b);
//	//month确定后,开始计算n天后情况
//	c += n;
//	while (c > month)
//	{
//		b += 1;
//		c = c - month;
//		if (b > 12) {
//			b = b - 12;
//			a += 1;
//		}
//		month = monthPd(a, b);
//	}
//	ret.push_back(a);
//	ret.push_back(b);
//	ret.push_back(c);
//	return ret;
//}
//
//int monthPd(int a, int b) {
//	int month = 0;
//	//判断month是30还是31
//	bool mFlag[12] = { true, false, true, false, true, false, true, true, false, true, false, true };
//	month = mFlag[b - 1] ? 31 : 30;
//	if (b == 2) month = (((a % 4 == 0) && (a % 100 != 0)) || a % 400 == 0) ? 29 : 28;
//	return month;
//}
//
//int main() {
//	int a, b, c, n;
//	vector<int> ret;
//	while (~scanf_s(" %d %d %d %d", &a, &b, &c, &n))
//	{
//		ret = retDate(a,b,c,n);
//		printf_s("%d-%02d-%02d\n", ret[0], ret[1], ret[2]);
//	}
//	return 0;
//}