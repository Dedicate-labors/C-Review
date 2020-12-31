////Morris中序遍历相比普通的递归中序遍历的优点在于其空间复杂度为O(1)，
////非递归，不用栈，O(1)空间完成遍历
//#include<iostream>
//#include<stack>
//using namespace std;
//
//struct TreeNode{
//	int val;
//	TreeNode *left, *right;
//	TreeNode(int val) :val(val),left(nullptr),right(nullptr) {}
//};
//
//void Travel(TreeNode * root) {
//	TreeNode *cur = root, *pre = nullptr;
//	while (cur) {
//		if (!cur->left) {
//			// ...遍历 cur
//			cur = cur->right;
//			continue;
//		}
//		pre = cur->left;
//		while (pre->right && pre->right != cur) {
//			pre = pre->right;
//		}
//		if (!pre->right) {
//			pre->right = cur;
//			cur = cur->left;
//		}
//		else {
//			pre->right = nullptr;
//			// ...遍历 cur
//			cur = cur->right;
//		}
//	}
//}
//
//int main() {
//
//	return 0;
//}