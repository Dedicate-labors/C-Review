//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	//ע����Ϸ˫��������ˮ
//	bool divisorGame(int N) {
//		//����һ��
//		//return N % 2 == 0; //��ż����Ӯ��
//		//�����������ƣ�ֻҪ��һ���ܱ��б�Ϊ�䣬��һ��һ����Ӯ
//		vector<int> f(N+5, false); //f[i]��ֵ����NΪiʱ�����ֵ���Ӯ���
//		f[1] = false;
//		f[2] = true;
//		for (int i = 3; i <= N; ++i) {
//			for (int j = 1; j < i; ++j) {
//				//j�����ӣ���f[i-j]�Ľ����ʾ��ʱ���ֵ���Ӯ�����
//				//��true��f[i]Ĭ����false����false�͸�Ϊtrue
//				if (i % j == 0 && !f[i - j]) { 
//					f[i] = true;
//					break;
//				}
//			}
//		}
//		return f[N];
//	}
//};
//
//int main() {
//
//	return 0;
//}