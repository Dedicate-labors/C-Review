//#include<iostream>
//#include<queue>
//#include<vector>
//using namespace std;
//
//struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//	//求出所有从根到叶子节点的路劲数字，再相加
//	//数字数目 == 叶子数目
//	//方法1：层序遍历，维护1个队列，一边层序一边将值更改
//	//每次将节点从队列中弹出的时候都判断是否是叶子，如果是就累加
//	//方法2：递归，递归表达式为return f(root->left, temp) + f(root->right, temp); temp是当前已经得到的累加和
//	int sumNumbers(TreeNode* root) {
//		if (!root) return 0;
//		queue<TreeNode *> que;
//		que.push(root);
//		TreeNode * cur;
//		int sum = 0;
//		while (!que.empty()) {
//			cur = que.front();
//			que.pop();
//			//处理叶子节点
//			if (cur->left == nullptr && cur->right == nullptr) sum += cur->val;
//			if (cur->left) {
//				//改变原来的值
//				cur->left->val = cur->val * 10 + cur->left->val;
//				que.push(cur->left);
//			}
//			else if (cur->right) {
//				//改变原来的值
//				cur->right->val = cur->val * 10 + cur->right->val;
//				que.push(cur->right);
//			}
//		}
//		return sum;
//	}
//	int sumNumbers2(TreeNode* root) {
//		return f(root, 0);
//	}
//	int f(TreeNode* root, int i) {
//		//递归终止条件1
//		if (root == nullptr) return 0;
//		//执行的操作
//		int temp = i * 10 + root->val;
//		//递归终止条件2
//		if (root->left == nullptr && root->right == nullptr) return temp;
//		//递归表达式
//		return f(root->left, temp) + f(root->right, temp);
//	}
//};
//
//int mian(){
//
//	return 0;
//}