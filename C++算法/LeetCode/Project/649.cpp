//#include<iostream>
//#include<vector>
//#include<string>
//#include<cstring>
//#include<unordered_map>
//#include<queue>
//using namespace std;
//
///*
//����������Ӫ�Ĳ���Ա����ÿ�ְ�senate��˳�����ͶƱ������ͶƱ��������Ȩ���е�һ��
//1. ��ֹһ������Ա��Ȩ����ɥʧ����Ȩ���������Լ����е�Ʊ
//2. �������Ա������Ȩ��ͶƱ�Ĳ���Ա����ͬһ����Ӫ�ģ�����������ʤ������������Ϸ�е��йر仯��
//
//���senate��СΪn������Ϊ�����Ĺ��̴Ӹ���˳��ĵ�һ������Ա��ʼ�����һ������Ա��������һ����
//��������ͶƱ����������ʧȥȨ���Ĳ���Ա���ڹ����б�������
//
//��ÿ�����еĲ���Ա����˳����ʹȨ����ֱ�����ȫ���Լ���ʱ��������ʤ
//*/
//
////����һ���Ȱ���˳�����ɵ�����Ȩ���Ķ��֣�����û����Ȩ���ľ͸ɵ������ŵģ����������˼�����̰�ģ���
////ֱ��ʣ�µ�ȫ���Լ���
//
//class Solution {
//public:
//	string predictPartyVictory(string senate) {
//		//bool���� ÿ�ֽ����� ����subStr
//		int len = senate.length();
//		//ȫ��ȵ����
//		if (isSame(senate)) return getRet(senate[0]);
//
//		//��ȫ��ȵ����
//		vector<bool> isEffect(len, true); //����ǰ���л��л����
//		int l = 0, r = 1;//l�������Ȩ�����ˣ�r��������ȽϵĴ���,ֻҪ�ǻ��ŵľ���
//		while (true)
//		{
//			//һ��ʼ��l�ͱ����Ǵ���Ȩ�����ˣ�r = (l+1) % len;
//			l = 0;
//			while (!isEffect[l] && l < len) l++;
//			r = (l + 1) % len;
//			while (l < len) {
//				//�����Ȼ���r�����ģ���ѭ������һ��,һ��ʼl��r�϶�����
//				while (senate[l] == senate[r] || !isEffect[r]) {
//					if (l == r) return getRet(senate[l]);
//					r = (r + 1) % len;
//				}
//				//�ҵ���һ������ȵ�ֵ
//				isEffect[r] = false; r = (r + 1) % len;
//
//				//�ҵ���һ������Ȩ������
//				l++;
//				while (!isEffect[l] && l < len) l++;
//				r = (l + 1) % len;
//			}
//		}
//	}
//
//	bool isSame(string subStr) {
//		char first = subStr[0];
//		int len = subStr.length();
//		for (int i = 1; i < len; ++i) {
//			if (first != subStr[i]) return false;
//		}
//		return true;
//	}
//
//	string getRet(char &first) {
//		if (first == 'R') return "Radiant";
//		else return "Dire";
//	}
//};
//
//int main()
//{
//	return 0;
//}