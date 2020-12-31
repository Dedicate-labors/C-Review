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
////解法2：使用一个双端队列，并且记录二叉树每层元素个数size，下一层遍历要将上层的size全部掏空才行，通过一个bool遍历
////判断是从左到右还是从右到左进行输出
//
//class Solution {
//public:
//	//二叉树锯齿层序遍历：先从左往右，再从右往左进行下一层遍历
//	//准备两个栈stack负责一层，不能把某个栈的该层顶端top 封住
//	/*
//	1. 当前层遍历是从左到右(queue)，那下一层的 从左到右 push入stack1
//	2. 从stack1出来变为 从右到左 ，下一层又是 从右到左 push入 stack2
//	3. 从stack2出来还是 从左到右， 下一层  从左到右 push入stack1
//	....
//	*/
//	vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//		vector<vector<int>> ans;
//		if (!root) return ans;
//		stack<TreeNode *> nodeStack, tempStack; //两个栈轮流遍历层次，并将结果载入ans中
//		//初始化
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