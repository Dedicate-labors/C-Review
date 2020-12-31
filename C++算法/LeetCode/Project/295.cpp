//#include<queue>
//#include<vector>
//#include<iostream>
//using namespace std;
//
//class MedianFinder {
//public:
//	/** initialize your data structure here. */
//	MedianFinder() {
//
//	}
//
//	//�����addNum��֤��max_heap.size() >= min_heap.size()
//	void addNum(int num) {
//		max_heap.push(num);
//		min_heap.push(max_heap.top());
//		max_heap.pop();
//		if (max_heap.size() < min_heap.size()) {
//			max_heap.push(min_heap.top());
//			min_heap.pop();
//		}
//	}
//
//	double findMedian() {
//		if (max_heap.size() == min_heap.size()) {
//			return (max_heap.top() + min_heap.top()) * 0.5;
//		}
//		return max_heap.top();
//	}
//private:
//	//max_heap�ǽ������ȶ��У�min_heap���������ȶ���
//	//max_heap�����С��min_heap����С
//	priority_queue<int, vector<int>> max_heap;
//	priority_queue<int, vector<int>, greater<int>> min_heap;
//};
//
//int main() {
//	MedianFinder M;
//	M.addNum(1);
//	M.addNum(2);
//	cout << M.findMedian() << endl;
//	M.addNum(3);
//	cout << M.findMedian() << endl;
//	return 0;
//}