//#include<iostream>
//#include<stack>
//using namespace std;
//
///*
//����ջ��tail�������β�ͣ�head�����ͷ��
//headû�оͰ�tail�ĵ������,��tail�������tail��head�о�ֱ�ӳ��Լ���
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
//		//��head��û������
//		if (size2) {
//			//head������
//			ret = head.top();
//			head.pop();
//			size2--;
//		}
//		else {
//			//headû������
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
//		//�����ջ��ͬ
//		//ջpop����push����Ӱ��
//		//������pop��push����Ӱ��
//		int ret = -1;
//		if (size2) {
//			ret = head.top();
//		}
//		else {
//			ret = pop(); //����tail��ջ��Ԫ��
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