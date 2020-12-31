//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
///*
//最牛的解法来了：观察规律，每次射箭一定满足 当前气球 最靠左的右边界位置。考虑所有气球中右边界位置
//最靠左的那一个，那么一定有一支箭的射出位置就是它的右边界（否则就没有箭可以将其引爆了）。当我
//们确定了一支箭之后，我们就可以将这支箭引爆的所有气球移除，并从剩下未被引爆的气球中，再选择右
//边界位置最靠左的那一个，确定下一支箭，直到所有的气球都被引爆。
//*/
//
//class Solution {
//public:
//	//假如有多组同在一条轴上的气球，1. 保证一次射爆多个，2. 保证射爆多个后，前面的该重合的气球还是重合
//	int findMinArrowShots(vector<vector<int>>& points) {
//		//先以points每个气球的start排出升序
//		//接着使用points是下标进行循环遍历，对当前气球区间进行缩小并判断会与第几个气球能一轴上
//		//下一个point的开始应该是上次循环涉及到的没射爆的最后一个气球区间
//		//得出结果
//		int count = 0;
//		sort(points.begin(), points.end(), [](const vector<int> &a, const vector<int> &b) {
//			return a[0] < b[0];
//		});
//		int pos = 0, len = points.size();
//		vector<int> temp;
//		while (pos < len) {
//			temp = points[pos];
//			for (pos+=1; pos < len; ++pos) {
//				//判断是否有重合,注意此处容易出错，a1和temp重合，a2和temp重合，但不代表a1,a2重合
//				//没有就退出
//				if (!isOverlap(temp, points[pos])) break;
//			}
//			count++;
//		}
//		return count;
//	}
//
//	//判断point和temp是否有重合
//	bool isOverlap(vector<int>& temp, vector<int>& point) {
//		int a = temp[0], b = temp[1];
//		int c = point[0], d = point[1];
//		//修改temp的范围
//		if (a <= c && c <= b) {
//			int left = c, right = b > d ? d : b;
//			temp[0] = left;
//			temp[1] = right;
//			return true;
//		}
//		else
//			return false;
//	}
//};
//
//int main()
//{
//
//	return 0;
//}