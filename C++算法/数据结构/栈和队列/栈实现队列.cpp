//#include<iostream>
//#include<stack>
//using namespace std;
//
///*
//两个栈，tail负责接收尾巴，head负责出头。
//head没有就把tail的倒入进来,出tail并清空了tail；head有就直接出自己的
//*/
//class MyQueue {
//public:
//	/** Initialize your data structure here. */
//	MyQueue() {
//
//	}
//
//	/** Push element x to the back of queue. */
//	void push(int x) {
//		tail.push(x);
//		size1++;
//	}
//
//	/** Removes the element from in front of queue and returns that element. */
//	int pop() {
//		int ret = -1;
//		//看head有没有数据
//		if (size2) {
//			//head有数据
//			ret = head.top();
//			head.pop();
//			size2--;
//		}
//		else {
//			//head没有数据
//			size2 = size1 - 1;
//			int len = size2;
//			while (len--) {
//				ret = tail.top();
//				tail.pop();
//				head.push(ret);
//			}
//			ret = tail.top();
//			tail.pop();
//			size1 = 0;
//		}
//		return ret;
//	}
//
//	/** Get the front element. */
//	int peek() {
//		//这里和栈不同
//		//栈pop后在push不受影响
//		//队列先pop在push会受影响
//		int ret = -1;
//		if (size2) {
//			ret = head.top();
//		}
//		else {
//			ret = pop(); //弹出tail的栈底元素
//			head.push(ret);
//			size2++;
//		}
//		return ret;
//	}
//
//	/** Returns whether the queue is empty. */
//	bool empty() {
//		return (size1 == 0 && size2 == 0) ? true : false;
//	}
//private:
//	stack<int> tail, head;
//	int size1 = 0, size2 = 0;
//};
//
//int main() {
//	MyQueue* obj = new MyQueue();
//	int x;
//	while (cin >> x)
//	{
//		obj->push(x);
//	}
//	int param_3 = obj->peek();
//	cout << param_3 << endl;
//	int param_2 = obj->pop();
//	cout << param_2 << endl;
//	bool param_4 = obj->empty();
//	cout << (param_4 == 1?"true":"false") << endl;
//	return 0;
//}