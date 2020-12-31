//#include<iostream>
//using namespace std;
//
////计算num所在行(从上往下数的)
//int row(int num, int w) {
//	int a, b, r = 1;
//	do {
//		a = (r - 1) * w + 1;
//		b = r * w;
//		if (num >= a && num <= b) return r;
//		r++;
//	} while (true);
//}
//
////计算num所在列(从左往右数的),要看奇偶了
//int column(int num, int w, int r) {
//	bool flag = r % 2 == 0 ? true : false;//奇数为false，偶数为true
//	int a = (r - 1) * w + 1, b = r * w; //求出开头结尾
//	int col = 0;
//	if (flag) {
//		//b > a
//		col = b - num + 1; 
//	}
//	else {
//		//a < b
//		col = num - a + 1;
//	}
//	return col;
//}
//
//int main() {
//	int w, m, n;
//	int row1, row2, col1, col2;
//	while (cin >> w >> m >> n)
//	{
//		row1 = row(m,w);
//		col1 = column(m, w, row1);
//		row2 = row(n, w);
//		col2 = column(n, w, row2);
//		cout << abs(col2 - col1) + abs(row2 - row1) << endl;
//	}
//	return 0;
//}