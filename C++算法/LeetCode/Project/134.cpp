//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	//gas�ǵ�ǰ����վ�Ĳ�����������cost�ǵ�ǰ����վ����һ����������
//	//��ǰ����վ�����Ĺ��������������ͣ���ȥ���ģ����µ�����>=0 Ϊ���Ͳ���
//	//���µ���������һ��վ��+���� - ����>=0,Ϊ���Ͳ���
//	int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//		//�ҳ������㣬��ÿ�������㣬��̽
//		int len = gas.size();
//		//������ȷ����һ�п��Գ���
//		for (int i = 0; i < len; ++i)
//		{
//			int residue = gas[i] - cost[i];
//			if (residue >= 0) {
//				//�����У��鿴��һ�������ߵ����
//				int j = (i+1)%len, count = len-1;
//				while (count--)
//				{
//					residue += gas[j];
//					residue -= cost[j];
//					if (residue < 0) break;
//					j = (j + 1) % len;
//				}
//				if (count == -1) return j;
//			}
//		}
//		return -1;
//	}
//};
//
//int main()
//{
//	Solution S;
//	vector<int> gas{1, 2, 3, 4, 5}, cost{3, 4, 5, 1, 2};
//	S.canCompleteCircuit(gas, cost);
//	return 0;
//}