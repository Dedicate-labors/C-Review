//#include <iostream>
//#include<algorithm>
//
//using namespace std;
//
//void qpl(int a[], int start, int end)
//{
//	if (start == end)
//	{
//		for (int i = 0; i < end; ++i)
//		{
//			cout << a[i] << " ";
//		}
//		cout << endl;
//		return;
//	}
//	for (int i = start; i < end; ++i)
//	{
//		swap(a[i], a[start]);
//		qpl(a, start+1, end);
//		swap(a[i], a[start]);
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
//	}
//	qpl(a, 0, n);
//	delete []a;
//	return 0;
//}