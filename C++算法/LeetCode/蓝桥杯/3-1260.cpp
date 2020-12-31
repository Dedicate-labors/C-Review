//#include<iostream>
//using namespace std;
//
//void func(int i, int j) {
//	int sum = 0;
//	for (int k = 1; k <= 49; ++k) {
//		if (k == i || k == j) {
//			sum += k * (k + 1);
//			++k;
//		}
//		else {
//			sum += k;
//		}
//		if (sum > 2015) break;
//	}
//	if(sum == 2015)
//		cout << i << ' ' << j << endl;
//}
//
//int main() {
//	int i,j; //i代表第一个+号位置，j代表第二个+号位置
//	for (i = 1; i <= 46; ++i) {
//		for (j = i+2; j <= 49; ++j)
//			func(i, j);
//	}
//	return 0;
//}