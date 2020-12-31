//#include <iostream>
//using namespace std;
//
//void Perm(int start, int end, int a[]) {
//	//得到全排列的一种情况，输出结果
//	if (start == end) {
//		for (int i = 0; i < end; i++)
//			cout << a[i] << ' ';
//		cout << endl;
//		return;
//	}
//	//解析：设数组为arry = {r1, r2, r3...rn},perm是获得排列结果
//	//1.遍历数组，保持r1, perm(2, n, arry),接着r2, perm(2, n, arry)...
//	//2.第一个swap负责交换， 第二个负责变回以满足第一个的swap
//	for (int i = start; i < end; i++) { //‘start’和end是不变的
//		swap(a[start], a[i]);      //交换
//		Perm(start + 1, end, a);   //分解为子问题a[start+1,...,end]的全排列
//		swap(a[i], a[start]);      //回溯
//	}
//}
//int main() {
//	int i, n, a[10];
//	while (cin >> n, n) {
//		for (i = 0; i < n; i++)
//		{
//			a[i] = i + 1;
//		}
//		Perm(0, n, a);
//	}
//	return 0;
//}
