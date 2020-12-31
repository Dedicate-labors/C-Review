//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	//暴力算法：一个格子默认是4条边，找到所有为1的格子 x
//	//找到所有重叠过的边 y ：左右和往下探测进行计算
//	//ret = 4x - 2y;
//	int islandPerimeter(vector<vector<int>>& grid) {
//		int sum1 = 0,sum2 = 0; //sum1是1的个数, sum2是重叠的边数
//		int pre = 0; //当前格子的前一个格子
//		int x = grid[0].size(); //一行的长度
//		int y = grid.size(); //一列的长度
//		cout << x << "  " << y << endl;
//		for (int j = 0; j < y; ++j) {
//			//遍历出每行
//			pre = 0;
//			for (int k = 0; k < x; k++) {
//				//遍历每行的值
//				if (grid[j][k] == 1) {
//					sum1++;
//					if (pre == grid[j][k]) sum2++; //同行的重叠边
//					if (j+1 < y && grid[j+1][k] == 1) sum2++; //本行和下一行的重叠边
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