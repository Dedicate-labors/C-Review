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
////方法一：层序遍历（反正是遍历即可），得到所有节点，得出结果
////方法二：每一层最多有2^(i-1)个节点(i>=1)，全部节点最多2^k-1 (k >= 1)
//class Solution {
//public:
//	//求完全二插入的节点个数
//	int countNodes(TreeNode* root) {
//		//方法一：中序遍历
//		int count = 0;
//		TreeNode *cur = root, *pre = nullptr;
//		while (cur)
//		{
//			if (!cur->left) {
//				//遍历cur
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
//				//遍历cur
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