//#include<iostream>
//using namespace std;
//
//struct TreeNode{
//	int val;
//	TreeNode *left, *right;
//	TreeNode(int val) :val(val),left(nullptr),right(nullptr) {}
//};
//
//
////前序建立树
//void CreateTree(TreeNode * &root) {
//	int val;
//	cin >> val;
//	if (val == -1) root = nullptr;
//	else {
//		root = new TreeNode(val);
//		CreateTree(root->left);
//		CreateTree(root->right);
//	}
//}
//
///*
//root = new TreeNode(val);
//CreateTree(root->left);
//CreateTree(root->right);
//改变这三句代码的位置就可以改变树的建立过程
//*/
//
//void showTree(TreeNode *root) {
//	if (!root) return;
//	cout << root->val << ' ';
//	showTree(root->left);
//	showTree(root->right);
//}
//
//int main() {
//	TreeNode *root;
//	CreateTree(root);
//	showTree(root);
//	return 0;
//}