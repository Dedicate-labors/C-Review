//#include<iostream>
//#include<vector>
//#include<map>
//using namespace std;
//
////���˼·����һ����ֻ����д�ĸ���ȷ��
//
//class Solution {
//public:
//	//����bills��˳�������⣬ÿ��׬5Ԫ�������ǮҪ�˻�
//	//һ��ʼû��Ǯ��ֻ�л�
//	//myaccount = 0, first > 5 return false;
//	//first == 5, account += 5
//	//second > 5, (second - 5) ����� myaccount
//	bool lemonadeChange(vector<int>& bills) {
//		int len = bills.size(); //��һ�ʽ���
//		if (len == 0 || bills[0] > 5) return false;
//
//		map<int, int> account; //�������͵�Ʊ�ӣ�ÿ��Ʊ�ӵ���Ŀ
//		account[5] = 1;
//		account[10] = 0;
//		account[20] = 0;
//		int sum = 5; //����
//
//		for (int i = 1; i < len; ++i) {
//			//����bills[i]����Ʊ�ӣ��һ�(bills[i]-5)
//			int retLin = (bills[i] - 5);
//			if (retLin > sum) return false;
//			//��ʼ�����Ƿ������� 0 5 15��ֻ��Ҫ����5�� 15
//			if (retLin == 0) account[5] += 1;
//			if (retLin == 5) {
//				if (account[5] > 0) { account[5] -= 1; account[10] += 1; }
//				else return false;
//			}
//			if (retLin == 15) {
//				//�鿴account�е�10Ԫ��5Ԫ�Ƿ��㹻��account[20] += 1;
//				//����ȥѡ��10Ԫ��֮����ѡ��5Ԫ
//				if (account[10] > 0) { retLin -= 10; account[10] -= 1; }
//				//ʣ���retLinʹ��5Ԫ�Ҳ�
//				while (retLin) {
//					if (account[5] > 0) {
//						retLin -= 5;
//						account[5] -= 1;
//					}
//					else
//						return false;
//				}
//				account[20] += 1;
//			}
//			//����ɹ�
//			sum += 5;
//		}
//		return true;
//	}
//};
//
//int main()
//{
//	Solution S;
//	vector<int> bills = { 5,5,10,10,5,20,5,10,5,5 };
//	S.lemonadeChange(bills);
//	return 0;
//}