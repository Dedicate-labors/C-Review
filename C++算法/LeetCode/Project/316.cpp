//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<unordered_set>
//#include<vector>
//using namespace std;
//
////��Ŀ��1. �������˳�����С�ֵ���  2. �����ظ�
//
////ʹ�õ���ջ�ⷨ������ջ��С���󣬴������ٰ���ֻ����һ�ε��ַ����ɡ�����ջ���Ǵ�
////stackֻ������һ�޶����ַ����Դ�ͨ�������ַ���������ȷ��һ���ܵõ�ÿ����ͬ�ַ�
////����ջҪ�������stack[top] < s[i] �� s[i]����stack�У���push(s[i])
////stack[top] > s[i], �� s[i]����stack�У��ж�s[top]�ĸ��������ֻ��һ��,push(s[i])
////stack[top] > s[i]���� s[i]����stack�У��ж�s[top]�ĸ���, ����ж����stack.pop()->���Ǹ�ѭ����push(s[i])
////����Ĺ��ɱ�����ֻҪs[i]����stack�У��ض���push,���űȽ�stack[top] �� s[i]
////s[i]�Ѿ���stack��ʱ����ʱ��s[i]һ�����ظ��ģ����ؼ��룬��Ϊstack��ʱ�϶��Ѿ�����ͬ�ַ�������������
//
//
//class Solution {
//public:
//	string removeDuplicateLetters(string s) {
//		int len = s.length();
//		if (len == 0 || len == 1) return s;
//		unordered_map<char, int> mapS;//key���ַ����ظ���value�ǳ��ִ���
//		for (auto &ch : s) mapS[ch] += 1;
//		string str = ""; //�����������ջ
//		unordered_set<char> setS; //�ж��ַ��Ƿ���str��
//		for (auto &ch : s) {
//			if (setS.count(ch) == 0) {
//				while (str != "" && ch < str.back() && mapS[str.back()] > 0) {
//					setS.erase(str.back());
//					str.pop_back();
//				}
//				str += ch;
//				setS.insert(ch);
//			}
//			mapS[ch]--; //�����Ƿ�װ��str����Ҫ-1,��������
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