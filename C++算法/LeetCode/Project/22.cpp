//#include<iostream>
//#include<vector>
//#include<stack>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//	//Ϊ�˱�֤���ŵ���ȷ��һ��������ջ����һ������һ����(
//	//������Ŀn * 2,��֤����ʱstack��szieΪ0
//	//���ݷ�����ʵ��������ҵ��㷨�����˼�֦����
//	//��֦ԭ��������������������� n�����ǿ��Է�һ�������š�
//	//�������������С�������ŵ����������ǿ��Է�һ�������š�
//	//�����ԭ��Ҳ��֤�˵�ǰ������Ч��Ҳ���Բ���stack
//	vector<string> generateParenthesis(int n) {
//		//��ʼ������
//		stack<string> staP;
//		string temp="("; //��Ҫ�����ռ�����
//		staP.push("(");
//		int nums = n * 2 - 1;
//		dfs(staP, nums, temp);
//		return ret;
//	}
//
//	void dfs(stack<string> &staP, int step, string temp) {
//		if (step == 0) {
//			//����������ж�����ƥ��Ҳ����
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
//			//���ݣ�����topFH
//			if (topFh == "") staP.pop();
//			else if (isMatch(topFh, FH[i]))
//				staP.push(topFh);
//			else
//				staP.pop();
//		}
//	}
//
//	vector<string> FH{"(", ")"};
//	vector<string> ret;// ��Ž��
//
//	//�����Ƿ�ƥ��
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