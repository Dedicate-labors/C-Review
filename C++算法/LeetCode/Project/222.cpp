//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
////����һ����������������Ǳ������ɣ����õ����нڵ㣬�ó����
////��������ÿһ�������2^(i-1)���ڵ�(i>=1)��ȫ���ڵ����2^k-1 (k >= 1)
//class Solution {
//public:
//	//����ȫ������Ľڵ����
//	int countNodes(TreeNode* root) {
//		//����һ���������
//		int count = 0;
//		TreeNode *cur = root, *pre = nullptr;
//		while (cur)
//		{
//			if (!cur->left) {
//				//����cur
//				count++;
//				cur = cur->right;
//				continue;
//			}
//			pre = cur->left;
//			while (pre->right && pre->right != cur) {
//				pre = pre->right;
//			}
//			if (!pre->right) {
//				pre->right = cur;
//				cur = cur->left;
//			}
//			else {
//				pre->right = nullptr;
//				//����cur
//				count++;
//				cur = cur->right;
//			}
//		}
//		return count;
//	}
//};
//
//int main()
//{
//
//	return 0;
//}