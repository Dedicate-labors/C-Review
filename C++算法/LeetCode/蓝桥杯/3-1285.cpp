//#include<iostream>
//#include<vector>
//using namespace std;
//
//int temp[5][4];
//bool visited[20]{ false };
//int ans = 0;
//
////step���±�
//void dfs(int step) {
//	//�����
//	//ͬһ�ĵ�һ��
//	if (step == 3 && temp[0][0] + temp[0][1] != temp[0][2]) return;
//	if (step == 6 && temp[1][0] - temp[1][1] != temp[1][2]) return;
//	if (step == 9 && temp[2][0] * temp[2][1] != temp[2][2]) return;
//	if (step == 12) {
//		if (temp[3][0] == temp[3][1] * temp[3][2]) {
//			ans++;
//			for (int i = 0; i < 4; ++i) {
//				for (int j = 0; j < 3; ++j)
//					cout << temp[i][j] << ' ';
//				cout << endl;
//			}
//		}
//		return;
//	}
//
//	for (int i = 1; i <= 13; i++) {
//		if (!visited[i]) {
//			visited[i] = true;
//			temp[step / 3][step % 3] = i;
//			dfs(step+1);
//			visited[i] = false;
//		}
//	}
//}
//
////����һ��dfs������
//int main() {
//	dfs(0);
//	cout << ans << endl;
//	return 0;
//}