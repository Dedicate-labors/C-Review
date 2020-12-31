//#include<vector>
//#include<iostream>
//using namespace std;
//
////����������
////����һ�����ݶԳ������ȷ��һ���Գ���˵㣬�Ӷ˵�������ư�Ȧ����һ���˵�
////��һ���˵��ư�Ȧ�ص���һ���˵㣬��ʾ����һȦ���޸ĶԳ��������˵㣬ͬʱ��������
////�������˵㶼��ͬһ��ʱ����ʾѭ������
//
////��������
////ÿ�θ��ݵ�ǰ�����ߵĴ�С,������N��ÿ��ֻ����N-1������������ѭ�������и���
//
//class Solution {
//public:
//	vector<int> spiralOrder(vector<vector<int>>& matrix) {
//		int i = 0, j = 0, N = matrix.size();
//		vector<int> ret;
//		if (N == 0) return ret;
//		int M = matrix[0].size();
//
//		//N���������� M��������������ɱ�ʾҪ�ߵĸ�����Ŀ
//		N = N - 1, M = M - 1;
//		//i, j�ĺ���Ӧ�������ڶ�Ӧ�߲�֮�ڵ�
//		while (N >= 0 && M >= 0) {
//			//N, M����б�Ϊ0,��ʾ��push����������
//			if (N == 0 || M == 0) {
//				//��ӵ�һ��
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
//	//����m��������n������һ����x,y
//	void  walk1(vector<int> &ret, int n, int m, int &x, int &y, vector<vector<int>>& matrix) {
//		//����m��
//		while (m--)
//		{
//			ret.push_back(matrix[x][y]);
//			++y;
//		}
//		//����n��
//		while (n--)
//		{
//			ret.push_back(matrix[x][y]);
//			++x;
//		}
//	}
//
//	//����m��������n������һ����x,y
//	void  walk2(vector<int> &ret, int n, int m, int &x, int &y, vector<vector<int>>& matrix) {
//		//����m��
//		while (m--)
//		{
//			ret.push_back(matrix[x][y]);
//			y--;
//		}
//		//����n��
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