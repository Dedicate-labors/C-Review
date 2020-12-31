//#include<iostream>
//#include<vector>
//using namespace std;
//
////递归
//int func(int n) {
//	//n是现在的饮料瓶数，sum是总和
//	if (n < 3) return n;
//	int m = n / 3, k = n % 3;
//
//	return (n-k) + func(m + k);
//}
//
//int main() {
//	int n;
//	while (cin >> n) {
//		cout << func(n) << endl;
//	}
//	return 0;
//}