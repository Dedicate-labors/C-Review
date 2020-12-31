//#include<vector>
//#include<iostream>
//#include<stack>
//using namespace std;
//
//struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode() : val(0), left(nullptr), right(nullptr) {}
//      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//
//class Solution {
//public:
//	vector<int> preorderTraversal(TreeNode* root) {
//		vector<int> ret;
//		if (root) 
//			preTrave(root, ret);
//		return ret;
//	}
//	//传入的root必须有值
//	void preTrave(TreeNode* root, vector<int> &ret) {
//		stack<TreeNode*> stackNode;
//		TreeNode * cur;
//		stackNode.push(root);
//		while (!stackNode.empty()) {
//			cur = stackNode.top();
//			ret.emplace_back(cur->val);
//			stackNode.pop();
//			if (cur->right) stackNode.push(cur->right);
//			if (cur->left) stackNode.push(cur->left);
//		}
//	}
//};
//
//int main() {
//
//	return 0;
//}