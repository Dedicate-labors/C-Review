//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
////��ӡX
//void PrintX(int PanW, int H, int W) {
//	int start = 0, end = W - 1; //start�����*��ʼλ�ã�end���ұ�*����λ��
//	int i = 0, j, flag = H/2 + 1;
//	while (H--)
//	{
//		//ÿһ���Ϳˢ
//		for (i = 0; i < W; ++i) {
//			if (i == start || i == (end - PanW + 1)) {
//				j = i;
//				//û���ص�
//				if ((end - start) >= 2 * PanW - 1) {
//					for (i; i < j + PanW; ++i) cout << '*';
//					--i;
//				}
//				else {
//					//���ص� end - start < 2 * PanW - 1;
//					for (i; i <= j + (end - start); ++i) cout << '*';
//					--i;
//				}
//			}
//			else
//				cout << '.';
//		}
//		cout << endl;
//		//ÿˢ��һ��ͱ仯,Ϊ��һ��׼��
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
//	int m, n;//0 < m < n,��֤n��������3 < n < 1000
//	while (cin >> m >> n)
//	{
//		int w = m + 2 * (n / 2);
//		PrintX(m, n, w);
//	}
//	return 0;
//}