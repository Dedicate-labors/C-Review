//#include<iostream>
//#include<queue>
//using namespace std;
//
//class Node {
//public:
//	int val;
//	Node* left;
//	Node* right;
//	Node* next;
//
//	Node() : val(0), left(NULL), right(NULL), next(NULL) {}
//
//	Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
//
//	Node(int _val, Node* _left, Node* _right, Node* _next)
//		: val(_val), left(_left), right(_right), next(_next) {}
//};
//
///*
//����һ�������ǰѵ�i���nextָ���������������������һ��������i�㣬���Ұѵ�i+1���next��������
//*/
//class Solution {
//public:
//	Node* connect(Node* root) {
//		queue<Node *> nodeQueue;
//		Node *cur, *pre = nullptr; //cur����ǰ�ڵ㣬pre����ǰ����ֵܽڵ�
//		nodeQueue.push(root);
//		nodeQueue.push(nullptr);
//		while (!nodeQueue.empty())
//		{
//			cur = nodeQueue.front();
//			nodeQueue.pop();
//			//..����cur
//			if (cur) {
//				if(pre)
//					pre->next = cur;
//
//				if (cur->left) nodeQueue.push(cur->left);
//				if (cur->right) nodeQueue.push(cur->right);
//			}
//			else
//				nodeQueue.push(nullptr);
//			if (pre == nullptr && cur == nullptr) break;
//			pre = cur;
//		}
//		return root;
//	}
//};
//
//void CreateTree(Node *& root) {
//	int val;
//	cin >> val;
//	if (val == -1) root = nullptr;
//	else {
//		root = new Node(val);
//		CreateTree(root->left);
//		CreateTree(root->right);
//	}
//}
//
//void showTree(Node *root) {
//	if (!root) return;
//	cout << root->val << ' ';
//	showTree(root->left);
//	showTree(root->right);
//}
//
//int main() {
//	Node * root;
//	CreateTree(root);
//	showTree(root);
//	Solution S;
//	S.connect(root);
//	return 0;
//}