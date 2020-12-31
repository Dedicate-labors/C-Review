//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<unordered_set>
//#include<vector>
//using namespace std;
//
////题目：1. 保持相对顺序的最小字典序  2. 不能重复
//
////使用单调栈解法：单调栈从小到大，此题中再包含只出现一次的字符即可。单调栈既是答案
////stack只包含独一无二的字符，对此通过计数字符个数做到确保一定能得到每个不同字符
////单调栈要升序，如果stack[top] < s[i] 且 s[i]不在stack中，那push(s[i])
////stack[top] > s[i], 且 s[i]不在stack中，判断s[top]的个数，如果只有一个,push(s[i])
////stack[top] > s[i]，且 s[i]不在stack中，判断s[top]的个数, 如果有多个，stack.pop()->这是个循环，push(s[i])
////上面的规律表明，只要s[i]不在stack中，必定被push,接着比较stack[top] 和 s[i]
////s[i]已经在stack中时，此时的s[i]一定是重复的，不必加入，因为stack此时肯定已经把相同字符放入升序中了
//
//
//class Solution {
//public:
//	string removeDuplicateLetters(string s) {
//		int len = s.length();
//		if (len == 0 || len == 1) return s;
//		unordered_map<char, int> mapS;//key是字符不重复，value是出现次数
//		for (auto &ch : s) mapS[ch] += 1;
//		string str = ""; //用来替代单调栈
//		unordered_set<char> setS; //判断字符是否在str中
//		for (auto &ch : s) {
//			if (setS.count(ch) == 0) {
//				while (str != "" && ch < str.back() && mapS[str.back()] > 0) {
//					setS.erase(str.back());
//					str.pop_back();
//				}
//				str += ch;
//				setS.insert(ch);
//			}
//			mapS[ch]--; //无论是否安装上str，都要-1,代表被抛弃
//		}
//		return str;
//	}
//};
//
//int main()
//{
//	Solution S;
//	string str = "bcabc";
//	S.removeDuplicateLetters(str);
//	return 0;
//}