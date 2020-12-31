//#include<stdio.h>
//#include<string.h>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int num[5][5], vis[20];
//int cnt = 0;
//int check1(int cur)
//{   //行检测
//	if (num[cur / 4][0] + num[cur / 4][1] + num[cur / 4][2] + num[cur / 4][3] == 34)
//		return 1;
//	return 0;
//}
//int check2(int cur)
//{   //列检测
//	if (num[0][cur % 4] + num[1][cur % 4] + num[2][cur % 4] + num[3][cur % 4] == 34)
//		return 1;
//	return 0;
//}
//int check3()
//{   //斜边检测
//	int i, sum1 = 0, sum2 = 0;
//	for (i = 0; i < 4; i++)
//		sum1 += num[i][i], sum2 += num[4 - i - 1][i];
//	if (sum1 == sum2 && sum2 == 34)
//		return 1;
//	return 0;
//}
//
////cur是下标
//void dfs(int cur)
//{
//	int i, j;
//	if (cur % 4 == 0)
//		if (!check1(cur - 1))
//			return;
//	if (cur >= 13)
//		if (!check2(cur - 1))
//			return;
//	if (cur == 16)
//		if (check3())
//		{
//			for (i = 0; i < 4; i++)
//			{
//				for (j = 0; j < 4; j++)
//					printf("%d ", num[i][j]);
//				printf("\n");
//			}
//			printf("\n");
//			cnt++;
//		}
//	//上面的if判断进行了剪枝
//	for (i = 1; i <= 16; i++)
//		if (!vis[i])
//		{
//			vis[i] = 1;
//			num[cur / 4][cur % 4] = i;
//			dfs(cur + 1);
//			vis[i] = 0;
//		}
//	return;
//}
//int main()
//{
//	memset(vis, 0, sizeof(vis));
//	num[0][0] = 1;
//	vis[1] = 1;
//	dfs(1);
//	printf("%d\n", cnt);
//	return 0;
//}