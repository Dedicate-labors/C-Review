//#include<cstdio>
//#include<vector>
//#include<iostream>
//
//using namespace std;
//
//static int ans = 0;
//
///*
//ֻ���ǵ���������·��ص������
////k�����ͣ�cnt���������Ѿ��е���
//*/
//void retNumCollect(int k, int cnt) {
//	if (cnt > 13 || k > 13)
//		return;
//	if (k == 13 && cnt == 13) {
//		ans++;
//		return;
//	}
//	for (int i = 0; i < 5; ++i) {
//		retNumCollect(k + 1, cnt + i);
//		//retNumCollect(������,�����͵�����Ŀ��0-4�����)
//	}
//}
//
//int main() {
//	retNumCollect(0,0);
//	cout << ans << endl;
//	return 0;
//}