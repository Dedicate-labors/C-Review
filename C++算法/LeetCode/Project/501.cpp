//#include<iostream>
//#include<string>
//#include<vector>
//#include<cstdio>
//
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
//	vector<int> findMode(TreeNode* root) {
//		TreeNode *cur = root, *pre = nullptr;
//		while (cur) {
//			if (!cur->left)
//			{
//				update(cur->val);
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
//				update(cur->val);
//				cur = cur->right;
//			}
//		}
//		return answer;
//	}
//private:
//	vector<int> answer;
//	int maxCount = 0, count = 0;
//	int val;
//	void update(int x);
//};
//
//void Solution::update(int x) {
//	if (x == val) {
//		++count;
//	}
//	else {
//		val = x;
//		count = 1;
//	}
//	if (count == maxCount) {
//		answer.push_back(val);
//	}
//	else if(count > maxCount){
//		maxCount = count;
//		answer = vector<int>{val};
//	}
//}
//
//void CreatTree(TreeNode * &root) {
//	int val;
//	scanf_s(" %d", &val);
//	if (val == -1) root = nullptr;
//	else {
//		root = new TreeNode(val);
//		if (!root) exit(OVERFLOW);
//		CreatTree(root->left);
//		CreatTree(root->right);
//	}
//}
//
//int main() {
//	TreeNode * root = nullptr;
//	CreatTree(root);
//	Solution S;
//	S.findMode(root);
//	return 0;
//}