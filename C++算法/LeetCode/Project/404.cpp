//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<string>
//#include<stack>
//
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) :val(x), left(nullptr), right(nullptr) {}
//};
//
//void CreateBiTree(TreeNode * & T) {
//	int val;
//	scanf_s("%d", &val);
//	if (val == -1)
//		T = NULL;
//	else {
//		T = new TreeNode(val);
//		if (!T)
//			exit(OVERFLOW);
//		CreateBiTree(T->left);
//		CreateBiTree(T->right);
//	}
//}
//
////ǰ�����
//void TravelTree(TreeNode * root)
//{
//	if (root == nullptr) return;
//	cout << root->val << endl;
//	TravelTree(root->left); //ͨ����leftΪ����
//	TravelTree(root->right);
//}
//
///*
//���������������������Ҷ��֮��
//*/
//class Solution {
//public:
//	int sumOfLeftLeaves(TreeNode* root) {
//		return root ? dfs(root) : 0;
//	}
//private:
//	bool isLeafNode(TreeNode *node) {
//		return !node->left && !node->right;
//	}
//	int dfs(TreeNode *node);
//};
//
//int Solution::dfs(TreeNode *node) {
// //���ڵ��������Ҳ������Ҷ�ӽڵ�
// //nodeҲ��֤������Ҷ�ӽڵ�
//	int ans = 0;
//	if (node->left) {
//		ans += isLeafNode(node->left) ? node->left->val : dfs(node->left);
//	}
//	if (node->right && !isLeafNode(node->right)) {
//		ans += dfs(node->right);
//	}
//	return ans; 
//}
//
//int main() {
//	Solution S;
//	TreeNode * root = NULL;
//	CreateBiTree(root);
//	TravelTree(root);
//	cout << "==========" << endl;
//	cout << S.sumOfLeftLeaves(root) << endl;
//	return 0;
//}