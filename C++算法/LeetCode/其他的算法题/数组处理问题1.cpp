///*
//����������
//����һ��������������飨����������������O�������ظ�)
//���������Ԫ�ص�ƽ���ж��������?
//����{ -1��-1��1,1,1}��ƽ��{1}��1��
//����{-1��O,1��2,3}��ƽ��{0,1��4,9}��4��
//����{ -4��-2��-1,-1,O,0��2��3��5}��ƽ��{0��1��4,9,16,25}��6��
//
//Ҫ��:ʱ�临�Ӷ�ΪO(n)���ռ临�Ӷ�ΪO(1)
//*/
//#include<set>
//#include<iterator>
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int howPow(vector<int> &li) {
//		set<int> temp; //���liƽ���������Ԫ��
//		int pow = 0;
//		for (int i = 0; i < li.size(); ++i) {
//			pow = li[i] * li[i];
//			temp.insert(pow);
//		}
//		return temp.size();
//	}
//};
//
//int main() {
//	Solution S;
//	vector<int> list;
//	int m;
//	while (true) {
//		while (cin >> m) {
//			list.push_back(m);
//		}
//		cout << S.howPow(list) << endl;
//		break;
//	}
//	return 0;
//}