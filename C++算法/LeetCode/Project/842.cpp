//#include<string>
//#include<iostream>
//#include<vector>
//#include<climits>
//
//using namespace std;
//
////Ŀ���S��ֳ�F vetcor<int> ����Ҫ����쳲�������������F.size() >= 3
////��ע�⣬���ַ�����ֳ�С��ʱ��ÿ���������һ����Ҫ���㿪ͷ����������������� 0 ����
////�����ⷨ���趨F[0]�ĳ��ȴ�С�����趨F[1]�Ĵ�С���жϺ����Ƿ����ڶ���
////F[0]�ĳ�����Ϊl0,F[1]�ĳ�������Ϊl1�� F[2]�ĳ�������Ϊl2�� l2 >= (l1 > l0 ? l1:l0) ����continue
////�ҵ���ȷ��l0,l2���˳�����Ĳ���
//
//class Solution {
//public:
//	vector<int> splitIntoFibonacci(string S) {
//		int len = S.size(); //i��j��z�ǹ���S���±�
//		vector<int> F;
//		for (int l0 = 1; l0 <= len / 2 && l0 <= 10; ++l0) {
//			//���ֲ�����0��ͷ����������������� 0 ����
//			if (l0 > 1 && S[0] == '0') break;
//			for (int l1 = 1; l1 <= len / 2 && l1 <= 10; ++l1) {
//				int l2 = len - l1 - l0;
//				if (l2 < (l1 > l0 ? l1 : l0)) continue;
//				//���ֲ�����0��ͷ����������������� 0 ����
//				if (l1 > 1 && S[l0] == '0') break;
//				if (func(S, 0, l0, l1))
//				{
//					//�ҵ���,��������
//					int a = stoi(S.substr(0, l0)), b = stoi(S.substr(l0, l1));
//					F.emplace_back(a);
//					F.emplace_back(b);
//					int pos = l0 + l1;
//					retAns(F,0,pos,len-1);
//					return F;
//				}
//			}
//		}
//		return F;
//	}
//
//	//i����ʼ�±꣬l0, l1
//	bool func(string &S,const int & i, int l0, int l1) {
//		int j = i+l0, z = j + l1;//j,z��ΪF[1],F[2]��S��ӳ����±�
//
//		//��η���trueҲҪʵ��
//		if (z == S.size()) return true;
//		//�ж�l0,l1,l2Ŀǰ���Ȼ�����<=10λ��,��������
//		long long F0, F1, temp;
//		if(l0)
//		F0 = stoll(S.substr(i, l0)), F1 = stoll(S.substr(j, l1));
//		temp = F0 + F1;
//		if (F0 > INT_MAX || F1 > INT_MAX || temp > INT_MAX) return false;
//		string F2 = to_string(temp);
//		int l2 = F2.size();
//
//		//�ж�Ҫ���£�F2�����ж�����
//		for (int j = 0;j < F2.size(); ++j) {
//			if (z >= S.size()) return false;
//			if (F2[j] != S[z++]) return false;
//		}
//		//����F2��OK�ģ�����ȥ��F3...
//		return func(S, j, l1, l2);
//	}
//
//	void retAns(vector<int> &F,int i, int pos, int end) {
//		//��ʼ��F2��ʼ��Ԫ��,posĿǰ����F2�±�
//		if (pos <= end) {
//			int F2 = F[i] + F[i + 1];
//			int l2 = to_string(F2).size();
//			F.emplace_back(F2);
//			retAns(F, i + 1, pos + l2, end);
//		}
//	}
//};
//
//
//int main()
//{
//	//Solution S;
//	//string str = "214748364721474836422147483641";
//	//S.splitIntoFibonacci(str);
//	return 0;
//}