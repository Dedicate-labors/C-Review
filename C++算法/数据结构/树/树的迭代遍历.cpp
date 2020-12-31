#include<iostream>
#include<stack>
#include<queue>
using namespace std;

struct TreeNode{
	int val;
	TreeNode *left, *right;
	TreeNode(int val) :val(val),left(nullptr),right(nullptr) {}
};

//总之在不打印结果的时候疯狂push

//前序遍历迭代方法
void preOrder(TreeNode *root) {
	if (!root) return;
	stack<TreeNode *> nodeStack;

	//将根节点放入
	nodeStack.push(root);
	while (!nodeStack.empty()) {
		//出栈
		TreeNode * node = nodeStack.top();
		nodeStack.pop();
		cout << node->val << ends;
		//栈遵循先入后出，所以先入右孩子再入左孩子
		if (node->right != nullptr) {
			nodeStack.push(node->right);
		}
		if (node->left != nullptr) {
			nodeStack.push(node->left);
		}
	}
}

//中序迭代遍历
void inOrder(TreeNode *root) {
	if (!root) return;
	stack<TreeNode *> nodeStack;
	TreeNode *curr = root;
	while (curr != nullptr || !nodeStack.empty())
	{
		if (curr != nullptr) {
			//不断向左树走，并push
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

//后续遍历
void postOrder2(TreeNode * root) {
	if (!root) return;
	stack<TreeNode *> stackNode, help; //两个栈
	stackNode.push(root);
	TreeNode * cur;
	while (!stackNode.empty()) {
		//stackNode是中，左，右顺序压入栈
		//help内的数据顺序左，右，中
		cur = stackNode.top();
		help.push(cur);
		stackNode.pop();
		if (cur->left) stackNode.push(cur->left);
		if (cur->right) stackNode.push(cur->right);
	}

	//最后的后续遍历结果在help栈中
	while (!help.empty()) {
		cur = help.top();
		cout << cur->val << "  ";
		help.pop();
	}
}

//后序迭代遍历,很垃圾，改变了原来的树结构
void postOrder1(TreeNode * root) {
	if (!root) return;
	stack<TreeNode *> nodeStack;
	nodeStack.push(root);//将更节点入栈
	while (!nodeStack.empty()) {
		//首先访问栈顶元素
		TreeNode* temp = nodeStack.top();
		//如果栈顶元素的左树不为空，将左树入栈，并且将原来栈顶元素的左子树置为空，这样是为了避免死循环；
		//如果不置为空，栈顶元素左树一直不为空，就会循环插入；
		if (temp->left != nullptr) {
			TreeNode * left = temp->left;
			//将左边的链断了，放置重复入队
			temp->left = nullptr;
			//下面的栈保存了火种
			nodeStack.push(left);

		}
		else if (temp->right != nullptr) {//走到这一步表示左树为空右树不为空，将有树入栈，并且将原来栈顶元素的有树置为空
			TreeNode * right = temp->right;
			temp->right = nullptr;
			//下面的栈保存了火种
			nodeStack.push(right);
		}
		else {
			//如果左右子树都为空，出栈
			TreeNode * node = nodeStack.top();
			nodeStack.pop();
			cout << node->val << ends;
		}

	}
}

//层次遍历：利用队列
void gradOrder(TreeNode * root) {
	if (!root) return;
	queue<TreeNode *> nodeQueue;
	TreeNode *cur = nullptr;
	nodeQueue.push(root);
	while (!nodeQueue.empty())
	{
		cur = nodeQueue.front();
		nodeQueue.pop();
		//..操作cur
		if (cur->left) nodeQueue.push(cur->left);
		if (cur->right) nodeQueue.push(cur->left);
	}
}

//前序建立树
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