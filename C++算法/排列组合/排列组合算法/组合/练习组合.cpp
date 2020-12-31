//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//void printEachResult(int t[], int index, int total) {
//
//	for (int i = 0; i < total; ++i) {
//		if ((index >> i) & 1 == 1) {
//			cout << t[i] << " ";
//		}
//	}
//	cout << endl;
//}
//
//void qzh(int a[], int n)
//{
//	for (int i = 0; i < (1 << n); ++i)
//	{
//		//for (int j = 0; j < n; ++j)
//		//{
//		//	if ((i >> j) & 1 == 1)
//		//	{
//		//		cout << a[j] << " ";
//		//	}
//		//}
//		//cout << endl;
//		printEachResult(a, i, n);
//	}
//}
//
//int main()
//{
//	int n, *a;
//	cin >> n;
//	a = new int[n];
//	for (int i = 0; i < n; ++i)
//	{
//		a[i] = i + 1;
//		cout << a[i];
//	}
//	cout << endl;
//	//cout << (1 << n) << " : " << (n << 1) << endl;
//	qzh(a, n);
//	delete a;
//	delete[]a;
//}