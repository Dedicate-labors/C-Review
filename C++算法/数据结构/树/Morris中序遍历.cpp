////Morris������������ͨ�ĵݹ�����������ŵ�������ռ临�Ӷ�ΪO(1)��
////�ǵݹ飬����ջ��O(1)�ռ���ɱ���
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
//			// ...���� cur
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
//			// ...���� cur
//			cur = cur->right;
//		}
//	}
//}
//
//int main() {
//
//	return 0;
//}