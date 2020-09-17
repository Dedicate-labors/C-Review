//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
///*
//需要 左右移动 的考虑 双指针做法
//看完后，还是数学推导要好
//*/
//class Solution {
//public:
//	//下面的暴力破解容易超出时间限制
//	int maxArea(vector<int>& height) {
//		int n = height.size(); //n >= 2
//		//创建存放容量的容器
//		int max = 0, b = 0,a = 0; //暴力枚举法
//		int maxNow = 0;
//		//半个表，上半表
//		for(int i = 0; i < n; ++i)
//			for (int j = i+1; j < n; ++j) {
//				b = height[i] > height[j] ? height[j] : height[i];
//				a = j - i;
//				maxNow = a * b;
//				if (maxNow > max) max = maxNow;
//			}
//		return max;
//	}
//
//	int maxArea2(vector<int>& height) {
//		int h = 0, d = 0, n = height.size(); //分别是高h，底d，n数目
//		int maxNow = 0, max = 0;
//		//d固定，h变
//		for (int d = n - 1; d >= 1; --d) {
//			//d确定后
//			for (int i = 0; i + d < n; ++i) {
//				h = height[i] > height[i+d] ? height[i+d] : height[i];
//				maxNow = h * d;
//				if (maxNow > max) max = maxNow;
//			}
//		}
//		return max;
//	}
//
//	//运用双指针+数学推导解决
//	int maxArea3(vector<int>& height) {
//		int h = 0, d = 0, n = height.size(); //分别是高h，底d，n数目
//		int maxNow = 0, max = 0;
//		for (int i = 0, j = n - 1; i != j;) {
//			//用下标代替双指针
//			d = j - i;
//			h = height[i] > height[i + d] ? height[i + d] : height[i];
//			maxNow = d * h;
//
//			if (maxNow > max) max = maxNow;
//	
//			//进行移动边小的那边
//			if (height[i] > height[j]) --j;
//			else ++i;
//		}
//		return max;
//	}
//};
//
//int main() {
//	Solution S;
//	int b;
//	vector<int> height;
//	while (true) {
//		while (cin >> b) {
//			height.push_back(b);
//		}
//		cout << S.maxArea3(height) << endl;
//		break;
//	}
//	return 0;
//}