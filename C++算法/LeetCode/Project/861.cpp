//#include<vector>
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//	//������Ťħ���ˣ���Ҫ������ÿ�ж����ƺ����
//	//����ȫ��Ϊ1������1��ͷ���У����з�ת
//	//�ӵڶ��п�ʼ������1����ĿС��0����Ŀ���з�ת����֤1����Ŀ��
//	//����������
//	int matrixScore(vector<vector<int>>& A) {
//		int row = A.size(), col = A[0].size(); //��,�е���Ŀ
//		int ans = row * (1 << (col - 1)); //����һ��ȫ��1ʱ�Ĵ�С��
//		//ע������˲����з�ת�����Ժ���ӵڶ��п�ʼ������Ҫע��ı��������п�ͷ��0����
//
//		//�ӵڶ��п�ʼ�Ĳ鿴
//		int count = 0; //ͳ�Ƹ���1�ĸ�����0�ĸ��� = row - count
//		for (int j = 1; j < col; ++j) {
//			count = 0;
//			//������
//			for (int i = 0; i < row; ++i) {
//				//���ж�A[i][0] �Ƿ�Ϊ1
//				if (A[i][0] && A[i][j] || !A[i][0] && !A[i][j]) count++;
//			}
//			if (count >= row - count) ans += count * (1 << col-j-1);
//			else ans += (row - count) * (1 << col - j - 1); //��ת������ͳ�ƽ��
//		}
//		return ans;
//	}
//};
//
//int main()
//{
//
//	return 0;
//}