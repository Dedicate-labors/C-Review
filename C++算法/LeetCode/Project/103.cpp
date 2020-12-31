//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
////�ⷨ2��ʹ��һ��˫�˶��У����Ҽ�¼������ÿ��Ԫ�ظ���size����һ�����Ҫ���ϲ��sizeȫ���Ϳղ��У�ͨ��һ��bool����
////�ж��Ǵ����һ��Ǵ��ҵ���������
//
//class Solution {
//public:
//	//��������ݲ���������ȴ������ң��ٴ������������һ�����
//	//׼������ջstack����һ�㣬���ܰ�ĳ��ջ�ĸò㶥��top ��ס
//	/*
//	1. ��ǰ������Ǵ�����(queue)������һ��� ������ push��stack1
//	2. ��stack1������Ϊ ���ҵ��� ����һ������ ���ҵ��� push�� stack2
//	3. ��stack2�������� �����ң� ��һ��  ������ push��stack1
//	....
//	*/
//	vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//		vector<vector<int>> ans;
//		if (!root) return ans;
//		stack<TreeNode *> nodeStack, tempStack; //����ջ����������Σ������������ans��
//		//��ʼ��
//		nodeStack.push(root);
//		int pos = -1;
//
//		while (!nodeStack.empty() || !tempStack.empty())
//		{
//			TreeNode * cur;
//			if (!nodeStack.empty()) {
//				ans.push_back(vector<int>());
//				pos++;
//			}
//			while (!nodeStack.empty()) {
//				cur = nodeStack.top();
//				nodeStack.pop();
//				ans[pos].push_back(cur->val);
//				if (cur->left) tempStack.push(cur->left);
//				if (cur->right) tempStack.push(cur->right);
//			}
//			if (!tempStack.empty()) {
//				ans.push_back(vector<int>());
//				pos++;
//			}
//			while (!tempStack.empty())
//			{
//				cur = tempStack.top();
//				tempStack.pop();
//				ans[pos].push_back(cur->val);
//				if (cur->right) nodeStack.push(cur->right);
//				if (cur->left) nodeStack.push(cur->left);
//			}
//		}
//	}
//};
//
//int main()
//{
//
//	return 0;
//}