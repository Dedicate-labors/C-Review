//#include<vector>
//#include<iostream>
//using namespace std;
//
////有两个方法
////方法一：根据对称轴随便确定一个对称轴端点，从端点出发，绕半圈到下一个端点
////另一个端点绕半圈回到第一个端点，表示绕完一圈；修改对称轴两个端点，同时缩进他们
////当两个端点都是同一个时，表示循环结束
//
////方法二：
////每次根据当前遍历边的大小,假如是N，每次只遍历N-1个，这样就能循环完所有格子
//
//class Solution {
//public:
//	vector<int> spiralOrder(vector<vector<int>>& matrix) {
//		int i = 0, j = 0, N = matrix.size();
//		vector<int> ret;
//		if (N == 0) return ret;
//		int M = matrix[0].size();
//
//		//N代表行数， M代表列数，改造成表示要走的格子数目
//		N = N - 1, M = M - 1;
//		//i, j的含义应该是算在对应边步之内的
//		while (N >= 0 && M >= 0) {
//			//N, M如果有边为0,表示在push最后的行数了
//			if (N == 0 || M == 0) {
//				//添加第一个
//				ret.push_back(matrix[i][j]);
//				while (N--) //x
//				{
//					ret.push_back(matrix[++i][j]);
//				}
//				while (M--) //y
//				{
//					ret.push_back(matrix[i][++j]);
//				}
//				break;
//			}
//			walk1(ret, N, M, i, j, matrix);
//			walk2(ret, N, M, i, j, matrix);
//			N -= 2;
//			M -= 2;
//			i += 1;
//			j += 1;
//		}
//		return ret;
//	}
//	
//	//向右m步，向下n步，第一步是x,y
//	void  walk1(vector<int> &ret, int n, int m, int &x, int &y, vector<vector<int>>& matrix) {
//		//向右m步
//		while (m--)
//		{
//			ret.push_back(matrix[x][y]);
//			++y;
//		}
//		//向下n步
//		while (n--)
//		{
//			ret.push_back(matrix[x][y]);
//			++x;
//		}
//	}
//
//	//向左m步，向上n步，第一步是x,y
//	void  walk2(vector<int> &ret, int n, int m, int &x, int &y, vector<vector<int>>& matrix) {
//		//向左m步
//		while (m--)
//		{
//			ret.push_back(matrix[x][y]);
//			y--;
//		}
//		//向上n步
//		while (n--)
//		{
//			ret.push_back(matrix[x][y]);
//			x--;
//		}
//	}
//};
//
//int main() {
//	vector<vector<int>> matrix{ {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
//	Solution S;
//	S.spiralOrder(matrix);
//	return 0;
//}