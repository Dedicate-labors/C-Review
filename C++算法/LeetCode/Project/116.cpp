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
//	//��γ���������ռ��������ˣ���
//	//ʵ���뵽�Ŀ϶��Ƕ��еĲ�α���������������⣬��ʹ�õĿռ俪���ϴ�
//	//��ôʹ��֮ǰ���õ�next���и������Ӷ�������ɵ�ʵ��Ҫ��
//	Node* connect(Node* root) {
//		//��Ŀ��������������
//		if (!root || !root->left || !root->right) return root;
//		//��ʼ����һ���next
//		Node *p = root, *pre = nullptr, *start = p;
//		while (start->left) {
//			pre = nullptr; //��next������ɵĸò㵱ǰ�ڵ��ǰһ���ڵ�
//			p = start; //next��ɵ�һ�㿪ʼ��
//			start = start->left;//start�ܵ���һ�㿪ʼ��
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