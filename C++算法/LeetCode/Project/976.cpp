//#include<vector>
//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//	//�����Ϊ0������ a+b > max(c), ����Ҳ�������εĳ�������,��ʣ�����ߺ�Ҫ���ڵ�����
//	//Ҫ���ܳ�����ҵ����C�ߣ���Ѱ��a+b>C��a��b���ߣ��Ҳ���������һ�����C�ߡ�����
//	//����������ζ����ɲ��ˣ���ֱ��return 0��
//	int largestPerimeter(vector<int>& A) {
//		//����A
//		sort(A.begin(), A.end());
//		int a = 0, b = 0, c = 0, end = A.size() - 1; //ȡ����
//		if (end < 2) return 0; //С������ֱ�ӷ���
//		for (int i = end; i >= 0; --i) {
//			//��������C��a��bҲ�ܿ��ܵò���
//			c = A[i]; 
//			if (i - 1 < 0 || i - 2 < 0) break;
//			b = A[i - 1]; a = A[i - 2];
//			if (a + b > c) return a + b + c;
//		}
//		return 0;
//	}
//};
//
//int main()
//{
//
//	return 0;
//}