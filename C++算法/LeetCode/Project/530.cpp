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
//class Solution {
//public:
//	//Morris�������(��������С����)����ջ�洢���������cur->top, stack.push(cur)
//	//���Ż���ʹ��preǰָ���ʾǰһ��
//	//�����Ǹ������������ҽڵ�ֵ�Ǹ�
//	int getMinimumDifference(TreeNode* root) {
//		if (root->left) min = root->val - root->left->val;
//		if (root->right) min = root->right->val - root->val;
//		preValue = -1;
//		dfs(root);
//		return min;
//	}
//private:
//	//stack<int> vec;
//	int preValue; //ǰһ���ڵ��value
//	int min;
//	void dfs(TreeNode* root); //�������
//};
//
//void Solution::dfs(TreeNode* root) {
//	TreeNode *cur = root, *pre = nullptr;
//	while (cur)
//	{
//		if (!cur->left) {
//			//if (!vec.empty() && cur->val - vec.top() < min) min = cur->val - vec.top();
//			//vec.push(cur->val);
//			if (preValue >= 0 && cur->val - preValue < min) min = cur->val - preValue;
//			preValue = cur->val;
//
//			cur = cur->right;
//			continue;
//		}
//		pre = cur->left;
//		while (pre->right && pre->right != cur)
//		{
//			pre = pre->right;
//		}
//		if (!pre->right) {
//			pre->right = cur;
//			cur = cur->left;
//		}
//		else {
//			pre->right = nullptr;
//			//if (!vec.empty() && cur->val - vec.top() < min) min = cur->val - vec.top();
//			//vec.push(cur->val);
//			if (preValue >= 0 && cur->val - preValue < min) min = cur->val - preValue;
//			preValue = cur->val;
//
//			cur = cur->right;
//		}
//	}
//}
//
//int main() {
//
//	return 0;
//}