//#include<string>
//#include<vector>
//#include<iostream>
//#include<unordered_map>
//#include<map>
//
//using namespace std;
//
////Ҫ�󣺽���ĸ��λ�������һ��
//
////�ⷨ����ʹ�ù�ϣ��map<vector<int>,vector<string>> key���26����ĸ��value��Ž��
////����strsʱ����strs[i]=>A2,map[A2].push_back(str[i])
////����keyֱ��ʹ������õ�str
//
////���ӵ�key�ٹ�ϣ���еĶ�λ��Ҫ�Լ�д�����ȽϿ�key�Ƿ����Լ��ȽϾ���
//struct Hashfunc {
//	size_t operator() (const vector<int> & key) const {
//		//ֻҪ����key��һ�޶�
//		int ret = 0;
//		for (int i = 0; i < 26; ++i) {
//			if (key[i]) {
//				ret += i;
//				ret += key[i];
//			}
//		}
//		return ret;
//	}
//};
//
//class Solution {
//public:
//	vector<vector<string>> groupAnagrams(vector<string>& strs) {
//		vector<vector<string>> ans;
//		unordered_map<vector<int>, vector<string>, Hashfunc> tmp; //��������
//		//��ʼ��
//		int len = strs.size();
//		if (len == 0) return ans;
//
//		for (int i = 0; i < len; ++i) {
//			tmp[SetA(strs[i])].push_back(strs[i]);
//		}
//
//		//��tmp�е����ݴ�ŵ�ans��
//		for (auto &it : tmp) {
//			ans.push_back(it.second);
//		}
//
//		return ans;
//	}
//
//	//��һ��string����26��ĸ������
//	vector<int> SetA(string &str) {
//		vector<int> A(26, 0); //�����ĸ��Ͱ
//		for (auto &ch : str) {
//			A[ch - 'a'] += 1;
//		}
//		return A;
//	}
//};
//
//int main()
//{
//	Solution S;
//	vector<string> tmp = { "eat","teea","tan","ate","nat","bat" };
//	S.groupAnagrams(tmp);
//	return 0;
//}