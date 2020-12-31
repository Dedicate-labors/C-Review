//#include<iostream>
//using namespace std;
//
////交换两位数的个位和十位
//int Swap(int num) {
//	int a = num % 10;
//	int b = num / 10;
//	return a * 10 + b;
//}
//
//int main() {
//	int parent, son;
//	int count = 0;
//	for (parent = 10; parent <= 99; ++parent) {
//		son = parent - 27;
//		if (son >= 0) {
//			count += Swap(parent) == son ? 1 : 0;
//		}
//	}
//	cout << count << endl;
//	return 0;
//}