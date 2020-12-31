//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
////打印X
//void PrintX(int PanW, int H, int W) {
//	int start = 0, end = W - 1; //start是左边*开始位置，end是右边*结束位置
//	int i = 0, j, flag = H/2 + 1;
//	while (H--)
//	{
//		//每一层的涂刷
//		for (i = 0; i < W; ++i) {
//			if (i == start || i == (end - PanW + 1)) {
//				j = i;
//				//没有重叠
//				if ((end - start) >= 2 * PanW - 1) {
//					for (i; i < j + PanW; ++i) cout << '*';
//					--i;
//				}
//				else {
//					//有重叠 end - start < 2 * PanW - 1;
//					for (i; i <= j + (end - start); ++i) cout << '*';
//					--i;
//				}
//			}
//			else
//				cout << '.';
//		}
//		cout << endl;
//		//每刷完一层就变化,为下一层准备
//		if (H >= flag) {
//			start++;
//			end--;
//		}
//		else {
//			start--;
//			end++;
//		}
//	}
//}
//
//int main() {
//	int m, n;//0 < m < n,保证n是奇数，3 < n < 1000
//	while (cin >> m >> n)
//	{
//		int w = m + 2 * (n / 2);
//		PrintX(m, n, w);
//	}
//	return 0;
//}