//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//
////����2�����α�����һ�α����������������±꣬һ�α�������ż������ż���±�
////����3�����ҵķ����ϸĽ���i��ż�±꣬j�����±꣬A[i]������ʱ���ҵ���һ��A[j]ż������������
//
//class Solution {
//public:
//	//�Ǹ���������A
//	vector<int> sortArrayByParityII(vector<int>& A) {
//		int i = 0, j = 0, len=A.size(); //i�ǵ�һ�������ʵģ�j�Ǻ����i����ͬ����һ�ֲ��������
//		//i��j������j = i+1, i����Ѱ����һ����һ�������ʵģ�jҲ���³���
//		while (i < len) {
//			//���i��A[i]��������abs(A[i] - i) ��ż��������������
//			if (abs(A[i] - i) % 2 != 0)
//			{
//				//Ѱ�Һ�i��ͬ��j
//				j = i+1;
//				while ((abs(A[j] - j) % 2 == 0 || abs(j - i) % 2 == 0) && j < len)
//				{
//					++j;
//				}
//				//jҪ����abs(j-i)%2 != 0 && abs(A[j] - j) % 2 != 0,������Ҫ��j
//				swap(A[i], A[j]);
//			}
//			++i;
//		}
//		return A;
//	}
//};
//
//int main()
//{
//
//	return 0;
//}