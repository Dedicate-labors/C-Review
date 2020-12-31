//#include<string>
//#include<vector>
//#include<iostream>
//#include<unordered_map>
//#include<map>
//
//using namespace std;
//
////要求：将字母异位词组合在一起
//
////解法二：使用哈希表map<vector<int>,vector<string>> key存放26个字母，value存放结果
////遍历strs时，当strs[i]=>A2,map[A2].push_back(str[i])
////或者key直接使用排序好的str
//
////复杂的key再哈希表中的定位需要自己写，而比较看key是否能自己比较决定
//struct Hashfunc {
//	size_t operator() (const vector<int> & key) const {
//		//只要最后的key独一无二
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
//		unordered_map<vector<int>, vector<string>, Hashfunc> tmp; //辅助工具
//		//初始化
//		int len = strs.size();
//		if (len == 0) return ans;
//
//		for (int i = 0; i < len; ++i) {
//			tmp[SetA(strs[i])].push_back(strs[i]);
//		}
//
//		//将tmp中的数据存放到ans中
//		for (auto &it : tmp) {
//			ans.push_back(it.second);
//		}
//
//		return ans;
//	}
//
//	//将一个string放入26字母数组中
//	vector<int> SetA(string &str) {
//		vector<int> A(26, 0); //存放字母的桶
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