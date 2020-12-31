//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//#include<limits.h>
//using namespace std;
//
//class Solution {
//public:
//	//�ҵ�start��end����Ƭ�Σ�ע��Ҫ���Ƭ�δ�С���
//	//���ҵ���ʼ�ͽ�β��Ƭ�κ�Ѱ���м��Ƭ�Σ�Ҫ��Ƭ����Ŀ����
//	//start��end������ʼ˫ָ��Ѱ������Ҫ����Ƭ��
//	int videoStitching(vector<vector<int>>& clips, int T) {
//		int start = -1, end = -1, n = clips.size(); //start��end��¼����Ƭ�ε��±�
//		int max1 = -1, max2 = -1;
//		int pstart, pend;
//		for (int i = 0; i < n;++i) {
//			pstart = clips[i][0];
//			pend = clips[i][1];
//			if (pstart <= 0 && pend-0 > max1) {
//				max1 = pend - 0;
//				start = i;
//			}
//			if (pend >= T && pstart <= T && T - pstart > max2) {
//				max2 = T - pstart;
//				end = i;
//			}
//		}
//		if (start == -1 || end == -1) return -1;
//		//start == end ???��ʾһ�ξͿ������
//		if (start == end) return 1;
//		//���ڸı�start��end�ĺ��壬��Ϊ�м�Ƭ�η�Χ
//		start = clips[start][1];
//		end = clips[end][0];
//		//��ʾ�������
//		if (start >= end) return 2;
//		//ѡ��pstart <= start <= pend ���� pstart <= start && end <= pend
//		//��������ѡ��pend-start��������,������û���զ�㣿���ݹ�
//		int count = 2; //��û����ǰ������
//		return retContain(start, end, clips, count);
//	}
//	int retContain(int start, int end, vector<vector<int>>& clips, int count) //�Ƿ����end
//	{
//		//��������start��pstart��pend 
//		int pstart = -1, pend = -1, max = -1;
//		for (auto item : clips) {
//
//			if (item[0] <= start && item[1] > start && item[1] - start >= max) {
//				pstart = item[0];
//				pend = item[1];
//				max = pend - start;
//			}
//		}
//		if (max == -1) return -1;
//		//pend��end�Ĵ�С�Ƚ�
//		//cout << pstart << " " << pend << endl;
//		if (pend >= end) return count+1;
//		else{
//			start = pend;
//			count += 1;
//			return retContain(start, end, clips, count);
//		}
//	}
//
//	//����������̬�滮�����µ���ȫ��ö��
//	//dp[i]����[0, i]Ƭ�ε���С�����,dp[0] = 0,����ȫ����ʼ�����ֵ
//	int videoStitching2(vector<vector<int>>& clips, int T) {
//		vector<int> dp(T+1, INT_MAX-1);
//		dp[0] = 0;
//		for (int i = 1; i <= T; ++i) {
//			for (auto & it : clips) {
//				if (it[0] < i && it[1] >= i) {
//					dp[i] = min(dp[i], dp[it[0]] + 1);
//				}
//			}
//		}
//		return dp[T] == INT_MAX - 1 ? -1 : dp[T];
//	}
//};
//
//int main() {
//	Solution S;
//	int T;
//	vector<vector<int>> clips = { {0,2},{4,6},{8,10},{1,9},{1,5},{5,9} };
//	//cin >> T;
//	//cout << S.videoStitching(clips, T) << endl;
//	S.retContain(2, 8, clips, 2);
//	return 0;
//}