#include<iostream>
#include<stack>
#include<queue>
using namespace std;

struct TreeNode{
	int val;
	TreeNode *left, *right;
	TreeNode(int val) :val(val),left(nullptr),right(nullptr) {}
};

//��֮�ڲ���ӡ�����ʱ����push

//ǰ�������������
void preOrder(TreeNode *root) {
	if (!root) return;
	stack<TreeNode *> nodeStack;

	//�����ڵ����
	nodeStack.push(root);
	while (!nodeStack.empty()) {
		//��ջ
		TreeNode * node = nodeStack.top();
		nodeStack.pop();
		cout << node->val << ends;
		//ջ��ѭ�����������������Һ�����������
		if (node->right != nullptr) {
			nodeStack.push(node->right);
		}
		if (node->left != nullptr) {
			nodeStack.push(node->left);
		}
	}
}

//�����������
void inOrder(TreeNode *root) {
	if (!root) return;
	stack<TreeNode *> nodeStack;
	TreeNode *curr = root;
	while (curr != nullptr || !nodeStack.empty())
	{
		if (curr != nullptr) {
			//�����������ߣ���push
			nodeStack.push(curr);
			curr = curr->left;
		}
		else {
			TreeNode *temp = nodeStack.top();
			nodeStack.pop();
			cout << temp->val << ends;
			curr = temp->right;
		}
	}
}

//��������
void postOrder2(TreeNode * root) {
	if (!root) return;
	stack<TreeNode *> stackNode, help; //����ջ
	stackNode.push(root);
	TreeNode * cur;
	while (!stackNode.empty()) {
		//stackNode���У�����˳��ѹ��ջ
		//help�ڵ�����˳�����ң���
		cur = stackNode.top();
		help.push(cur);
		stackNode.pop();
		if (cur->left) stackNode.push(cur->left);
		if (cur->right) stackNode.push(cur->right);
	}

	//���ĺ������������helpջ��
	while (!help.empty()) {
		cur = help.top();
		cout << cur->val << "  ";
		help.pop();
	}
}

//�����������,���������ı���ԭ�������ṹ
void postOrder1(TreeNode * root) {
	if (!root) return;
	stack<TreeNode *> nodeStack;
	nodeStack.push(root);//�����ڵ���ջ
	while (!nodeStack.empty()) {
		//���ȷ���ջ��Ԫ��
		TreeNode* temp = nodeStack.top();
		//���ջ��Ԫ�ص�������Ϊ�գ���������ջ�����ҽ�ԭ��ջ��Ԫ�ص���������Ϊ�գ�������Ϊ�˱�����ѭ����
		//�������Ϊ�գ�ջ��Ԫ������һֱ��Ϊ�գ��ͻ�ѭ�����룻
		if (temp->left != nullptr) {
			TreeNode * left = temp->left;
			//����ߵ������ˣ������ظ����
			temp->left = nullptr;
			//�����ջ�����˻���
			nodeStack.push(left);

		}
		else if (temp->right != nullptr) {//�ߵ���һ����ʾ����Ϊ��������Ϊ�գ���������ջ�����ҽ�ԭ��ջ��Ԫ�ص�������Ϊ��
			TreeNode * right = temp->right;
			temp->right = nullptr;
			//�����ջ�����˻���
			nodeStack.push(right);
		}
		else {
			//�������������Ϊ�գ���ջ
			TreeNode * node = nodeStack.top();
			nodeStack.pop();
			cout << node->val << ends;
		}

	}
}

//��α��������ö���
void gradOrder(TreeNode * root) {
	if (!root) return;
	queue<TreeNode *> nodeQueue;
	TreeNode *cur = nullptr;
	nodeQueue.push(root);
	while (!nodeQueue.empty())
	{
		cur = nodeQueue.front();
		nodeQueue.pop();
		//..����cur
		if (cur->left) nodeQueue.push(cur->left);
		if (cur->right) nodeQueue.push(cur->left);
	}
}

//ǰ������
void CreateTree(TreeNode * &root) {
	int val;
	cin >> val;
	if (val == -1) root = nullptr;
	else {
		root = new TreeNode(val);
		CreateTree(root->left);
		CreateTree(root->right);
	}
}

int main() {
	TreeNode * root = nullptr;
	CreateTree(root);
	preOrder(root);
	cout << endl;
	postOrder2(root);
	return 0;
}