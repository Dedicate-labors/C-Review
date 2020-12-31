//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int a[10]; //存放数字
//bool vis[10]; //表明0-9那些数字那些能用
//int ans = 0;
//
//bool test(int *a) {//判断是否符合条件
//	if (
//		abs(a[0] - a[1]) > 1 && abs(a[0] - a[3]) > 1 && abs(a[0] - a[4]) > 1 && abs(a[0] - a[5]) > 1 &&
//		//数字0与相邻数字的差的绝对值大于1
//		abs(a[1] - a[2]) > 1 && abs(a[1] - a[4]) > 1 && abs(a[1] - a[5]) > 1 && abs(a[1] - a[6]) > 1 && //数字1
//		abs(a[2] - a[5]) > 1 && abs(a[2] - a[6]) > 1 && //数字2
//		abs(a[3] - a[4]) > 1 && abs(a[3] - a[7]) > 1 && abs(a[3] - a[8]) > 1 && //数字3
//		abs(a[4] - a[5]) > 1 && abs(a[4] - a[7]) > 1 && abs(a[4] - a[8]) > 1 && abs(a[4] - a[9]) > 1 && //数字4
//		abs(a[5] - a[6]) > 1 && abs(a[5] - a[8]) > 1 && abs(a[5] - a[9]) > 1 && //数字5
//		abs(a[6] - a[9]) > 1 && //数字6
//		abs(a[7] - a[8]) > 1 && //数字7
//		abs(a[8] - a[9]) > 1 //数字8
//		)//数字9将不必比较
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//void dfs(int step) {
//	if (step == 10) {
//		if (test(a)) {
//			ans++; //满足就+1
//		}
//		return;
//	}
//	for (int i = 0; i < 10; ++i) {
//		if (!vis[i]) {
//			vis[i] = 1; //标记
//			a[step] = i;//填数
//			dfs(step + 1);//填下一个数
//			vis[i] = 0;//清除标记，以便下一次递归树用
//		}
//	}
//}
//
//int main() {
//	dfs(0);
//	cout << ans << endl;
//	return 0;
//}