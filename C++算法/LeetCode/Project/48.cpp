//#include<iostream>
//#include<vector>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//
////��Ŀ��ԭ���޸ľ�����ת90��
////nxn��ά����M, ��Ҫ������������������ÿ�е��޸ĺٺ�
///*
//M[0][1] M[0][2] M[0][3]   
//M[1][1] M[1][2] M[1][3]	  
//M[2][1] M[2][2] M[2][3]   
//*/
//
////�ⷨ1��ѡ�����Ͻ�б�ߣ���M[0][n-1]��ʼ��������0�к͵�m-1�г�M[0][m-1]��Ԫ��(���񽻻�)��
////����m-1�з�ת���ɣ�
//
////���Ͻ�б��Ԫ�ظ���Ϊn�����仯���̣�M[0][n-1]�����±�+1�����±�-1
////���±�ȫ����-1��-2���ɴﵽ��Ӧ���±꣺swap(M[1][n-1],M[1-1][n-1-1])
////��ת��n-1�У�M[0][n-1] -> M[n-1][n-1],�𲽽���
//class Solution {
//public:
//	void rotate(vector<vector<int>>& matrix) {
//		int n = matrix.size();
//		for (int i = 0, j = n-1; i < n; ++i,--j) {
//			int angle = matrix[i][j]; //б�Ͻ�Ԫ�� ��ǰ��(i,j)�±�Ԫ�ز��ܶ�
//			//������j�У�swap����Ԫ��
//			int d = 1, k;
//			for (k = i + 1; k < n; ++k) {
//				swap(matrix[k][j], matrix[k-d][j-d]);
//				++d;
//			}
//			//��ת������j��
//			reversal(matrix, j, n);
//		}
//	}
//
//	//��ת������j��
//	void reversal(vector<vector<int>>& matrix,int j, int n) {
//		int left = 0, right = n - 1; //���±�
//		while (left < right)
//		{
//			swap(matrix[left][j], matrix[right][j]);
//			left++, right--;
//		}
//	}
//};
//
//int main()
//{
//	return 0;
//}