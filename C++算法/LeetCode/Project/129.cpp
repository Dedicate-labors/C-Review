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
//	//������дӸ���Ҷ�ӽڵ��·�����֣������
//	//������Ŀ == Ҷ����Ŀ
//	//����1�����������ά��1�����У�һ�߲���һ�߽�ֵ����
//	//ÿ�ν��ڵ�Ӷ����е�����ʱ���ж��Ƿ���Ҷ�ӣ�����Ǿ��ۼ�
//	//����2���ݹ飬�ݹ���ʽΪreturn f(root->left, temp) + f(root->right, temp); temp�ǵ�ǰ�Ѿ��õ����ۼӺ�
//	int sumNumbers(TreeNode* root) {
//		if (!root) return 0;
//		queue<TreeNode *> que;
//		que.push(root);
//		TreeNode * cur;
//		int sum = 0;
//		while (!que.empty()) {
//			cur = que.front();
//			que.pop();
//			//����Ҷ�ӽڵ�
//			if (cur->left == nullptr && cur->right == nullptr) sum += cur->val;
//			if (cur->left) {
//				//�ı�ԭ����ֵ
//				cur->left->val = cur->val * 10 + cur->left->val;
//				que.push(cur->left);
//			}
//			else if (cur->right) {
//				//�ı�ԭ����ֵ
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
//		//�ݹ���ֹ����1
//		if (root == nullptr) return 0;
//		//ִ�еĲ���
//		int temp = i * 10 + root->val;
//		//�ݹ���ֹ����2
//		if (root->left == nullptr && root->right == nullptr) return temp;
//		//�ݹ���ʽ
//		return f(root->left, temp) + f(root->right, temp);
//	}
//};
//
//int mian(){
//
//	return 0;
//}