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
//class Solution {
//public:
//	void dfs(TreeNode *root, int sum) {
//		if (root == nullptr) return;
//		path.emplace_back(root->val);
//		sum -= root->val;
//		if (root->left == nullptr &&  root->right == nullptr && sum == 0) {
//			ret.emplace_back(path);
//		}
//		dfs(root->left, sum);
//		dfs(root->right, sum);
//		//������仰��������ʲô����
//		// ע��sum��ʵҲ��ݹ�ջ�ˣ���ǰsum�����ʵĻ���pop_back��ջ�����ȥ
//		path.pop_back();
//	}
//
//	vector<vector<int>> pathSum(TreeNode* root, int sum) {
//		dfs(root, sum);
//		return ret;
//	}
//private:
//	vector<vector<int>> ret;
//	vector<int> path;
//};
//
//void CreateBiTree(TreeNode * & T) {
//	int val;
//	scanf_s(" %d", &val);
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
//void showTree(TreeNode *root) {
//	if (!root) return;
//	cout << root->val << ' ';
//	showTree(root->left);
//	showTree(root->right);
//}
//
//int main() {
//	TreeNode *root;
//	CreateBiTree(root);
//	showTree(root);
//	Solution S;
//	S.pathSum(root, 22);
//	return 0;
//}