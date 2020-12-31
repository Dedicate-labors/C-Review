//#include<iostream>
//#include<queue>
//using namespace std;
//
//class MyStack {
//public:
//	/** Initialize your data structure here. */
//	MyStack() {
//
//	}
//
//	/** Push element x onto stack. */
//	void push(int x) {
//		que.push(x); //放入队列中
//		size++;
//	}
//
//	/** Removes the element on top of the stack and returns that element. */
//	int pop() {
//		int ret;
//		size--;
//		int len = size;
//		while (len--) {
//			ret = que.front();
//			que.pop();
//			que.push(ret);
//		}
//		ret = que.front();
//		que.pop();
//		return ret;
//	}
//
//	/** Get the top element. */
//	int top() {
//		int ret = pop();
//		push(ret);
//		return ret;
//	}
//
//	/** Returns whether the stack is empty. */
//	bool empty() {
//		//判断队列是否为空
//		return size > 0 ? false : true;
//	}
//private:
//	queue<int> que;
//	int size = 0;
//};
//
//int main() {
//	MyStack* obj = new MyStack();
//	int x;
//	while (cin >> x)
//	{
//		obj->push(x);
//	}
//	int param_2 = obj->top();
//	cout << param_2 << endl;
//	int param_3 = obj->pop();
//	cout << param_3 << endl;
//	bool param_4 = obj->empty();
//	cout << (param_4 == 1?"true":"false") << endl;
//	return 0;
//}