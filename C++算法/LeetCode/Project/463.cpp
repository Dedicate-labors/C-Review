//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	//�����㷨��һ������Ĭ����4���ߣ��ҵ�����Ϊ1�ĸ��� x
//	//�ҵ������ص����ı� y �����Һ�����̽����м���
//	//ret = 4x - 2y;
//	int islandPerimeter(vector<vector<int>>& grid) {
//		int sum1 = 0,sum2 = 0; //sum1��1�ĸ���, sum2���ص��ı���
//		int pre = 0; //��ǰ���ӵ�ǰһ������
//		int x = grid[0].size(); //һ�еĳ���
//		int y = grid.size(); //һ�еĳ���
//		cout << x << "  " << y << endl;
//		for (int j = 0; j < y; ++j) {
//			//������ÿ��
//			pre = 0;
//			for (int k = 0; k < x; k++) {
//				//����ÿ�е�ֵ
//				if (grid[j][k] == 1) {
//					sum1++;
//					if (pre == grid[j][k]) sum2++; //ͬ�е��ص���
//					if (j+1 < y && grid[j+1][k] == 1) sum2++; //���к���һ�е��ص���
//				}
//				pre = grid[j][k];
//			}
//		}
//		cout << sum1 << "  " << sum2 << endl;
//		return sum1*4 - sum2*2;
//	}
//};
//
//int main() {
//	vector<vector<int>> grid{ {1},{1} };
//	Solution S;
//	S.islandPerimeter(grid);
//	return 0;
//}