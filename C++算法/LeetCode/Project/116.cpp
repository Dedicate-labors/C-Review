//#include<iostream>
//#include<vector>
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
//class Solution {
//public:
//	//如何常量级额外空间解决此题了？？
//	//实现想到的肯定是队列的层次遍历树来解决该问题，但使用的空间开销较大
//	//那么使用之前做好的next进行辅助，从而快捷轻松的实现要求
//	Node* connect(Node* root) {
//		//题目给的完满二叉树
//		if (!root || !root->left || !root->right) return root;
//		//初始化第一层的next
//		Node *p = root, *pre = nullptr, *start = p;
//		while (start->left) {
//			pre = nullptr; //在next正在完成的该层当前节点的前一个节点
//			p = start; //next完成的一层开始出
//			start = start->left;//start跑到下一层开始出
//			while (p && p->left) {
//				p->left->next = p->right;
//				if (pre) pre->next = p->left;
//				pre = p->right;
//				p = p->next;
//			}
//		}
//		return root;
//	}
//};
//
//int main() {
//
//	return 0;
//}