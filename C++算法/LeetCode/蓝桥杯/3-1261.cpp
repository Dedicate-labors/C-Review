//#include<iostream>
//using namespace std;
//
////����num������(������������)
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
////����num������(������������),Ҫ����ż��
//int column(int num, int w, int r) {
//	bool flag = r % 2 == 0 ? true : false;//����Ϊfalse��ż��Ϊtrue
//	int a = (r - 1) * w + 1, b = r * w; //�����ͷ��β
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