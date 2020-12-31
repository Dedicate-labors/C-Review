//#include<iostream>
//#include<vector>
//#include<stack>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//	//为了保证括号的正确性一定会用上栈，第一个括号一定是(
//	//括号数目n * 2,保证结束时stack的szie为0
//	//回溯法，其实就是相比我的算法进行了减枝操作
//	//减枝原理：如果左括号数量不大于 n，我们可以放一个左括号。
//	//如果右括号数量小于左括号的数量，我们可以放一个右括号。
//	//上面的原理也保证了当前序列有效，也可以不用stack
//	vector<string> generateParenthesis(int n) {
//		//初始化操作
//		stack<string> staP;
//		string temp="("; //主要负责收集括号
//		staP.push("(");
//		int nums = n * 2 - 1;
//		dfs(staP, nums, temp);
//		return ret;
//	}
//
//	void dfs(stack<string> &staP, int step, string temp) {
//		if (step == 0) {
//			//在这里最好判断括号匹配也可以
//			if (staP.size() != 0) return;
//			ret.push_back(temp);
//			return;
//		}
//
//		string topFh="";
//		for (int i = 0; i < 2; ++i) {
//			if (staP.size() != 0) topFh = staP.top();
//
//			if (topFh == "") staP.push(FH[i]);
//			else if (isMatch(topFh,FH[i]))
//				staP.pop();
//			else
//				staP.push(FH[i]);
//			temp.push_back(*FH[i].c_str());
//			dfs(staP, step - 1, temp);
//			temp.pop_back();
//			
//			//回溯，根据topFH
//			if (topFh == "") staP.pop();
//			else if (isMatch(topFh, FH[i]))
//				staP.push(topFh);
//			else
//				staP.pop();
//		}
//	}
//
//	vector<string> FH{"(", ")"};
//	vector<string> ret;// 存放结果
//
//	//括号是否匹配
//	bool isMatch(const string &s1, const string &s2) {
//		if (s1 == "(" && s2 == ")") return true;
//		else return false;
//	}
//};
//
//int main() {
//	Solution S;
//	S.generateParenthesis(3);
//	return 0;
//}