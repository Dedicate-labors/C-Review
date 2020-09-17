//#include<iostream>
//#include<vector>
//#include<cstdio>
//#include<cstdlib>
//#include<cmath>
//
//using namespace std;
//
//vector<vector<int>> retN(int &n) {
//	vector<vector<int>> ret;
//	for (int a = 1; a*a <= n; ++a) {
//		for (int b = a; a*a + b*b <= n; ++b) {
//			for (int c = b; a*a + b * b + c*c <= n; c++) {
//				if (a*a + b * b + c * c == n) {
//					ret.push_back({a, b, c});
//				}
//			}
//		}
//	}
//	return ret;
//}
//
//int main() {
//	int n;
//	vector<vector<int>> ret;
//	while (scanf_s("%d", &n) != EOF) {
//		ret = retN(n);
//		if (ret.size() >= 1) {
//			for (auto k : ret) {
//				cout << k[0] << " " << k[1] << " " << k[2] << endl;
//			}
//		}
//		else
//			printf("No Solution\n");
//	}
//	return 0;
//}