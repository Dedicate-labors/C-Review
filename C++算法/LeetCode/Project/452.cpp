//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
///*
//��ţ�Ľⷨ���ˣ��۲���ɣ�ÿ�����һ������ ��ǰ���� �����ұ߽�λ�á����������������ұ߽�λ��
//������һ������ôһ����һ֧�������λ�þ��������ұ߽磨�����û�м����Խ��������ˣ�������
//��ȷ����һ֧��֮�����ǾͿ��Խ���֧�����������������Ƴ�������ʣ��δ�������������У���ѡ����
//�߽�λ��������һ����ȷ����һ֧����ֱ�����е����򶼱�������
//*/
//
//class Solution {
//public:
//	//�����ж���ͬ��һ�����ϵ�����1. ��֤һ���䱬�����2. ��֤�䱬�����ǰ��ĸ��غϵ��������غ�
//	int findMinArrowShots(vector<vector<int>>& points) {
//		//����pointsÿ�������start�ų�����
//		//����ʹ��points���±����ѭ���������Ե�ǰ�������������С���жϻ���ڼ���������һ����
//		//��һ��point�Ŀ�ʼӦ�����ϴ�ѭ���漰����û�䱬�����һ����������
//		//�ó����
//		int count = 0;
//		sort(points.begin(), points.end(), [](const vector<int> &a, const vector<int> &b) {
//			return a[0] < b[0];
//		});
//		int pos = 0, len = points.size();
//		vector<int> temp;
//		while (pos < len) {
//			temp = points[pos];
//			for (pos+=1; pos < len; ++pos) {
//				//�ж��Ƿ����غ�,ע��˴����׳���a1��temp�غϣ�a2��temp�غϣ���������a1,a2�غ�
//				//û�о��˳�
//				if (!isOverlap(temp, points[pos])) break;
//			}
//			count++;
//		}
//		return count;
//	}
//
//	//�ж�point��temp�Ƿ����غ�
//	bool isOverlap(vector<int>& temp, vector<int>& point) {
//		int a = temp[0], b = temp[1];
//		int c = point[0], d = point[1];
//		//�޸�temp�ķ�Χ
//		if (a <= c && c <= b) {
//			int left = c, right = b > d ? d : b;
//			temp[0] = left;
//			temp[1] = right;
//			return true;
//		}
//		else
//			return false;
//	}
//};
//
//int main()
//{
//
//	return 0;
//}