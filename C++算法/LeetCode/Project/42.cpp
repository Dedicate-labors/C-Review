//#include<iostream>
//#include<vector>
//using namespace std;
//
////两种思路，一种按层次进行遍历，如同俄罗斯方块，但遍历次数会很多，O(n*m)次 叫做栈法
////找出最高的柱子，作为层序遍历次数，每一层只看每个格子能否积水
////还可以以每个柱子，竖着寻找，每个柱子的左边最高和有边最高，两者间较低的为h，h-现在当前柱子的高度既
////为该柱子上所接雨水
//
////方法二：第一次遍历找到最高的柱子，该柱子左半部分，寻找第一个山峰；该柱子右半部分，倒着寻找第一个山峰(以最高柱子为对称轴)
////左半边的从第一个山峰开始，寻找下一个 高度 >= 第一个山峰的(中间一定是间隔开的)。两者的矩形面积 - 多余的面积
////从新寻找第一个山峰，在找寻下一个 高度 >= 第一个山峰的(中间一定是间隔开的)，直到下一个山峰是最高柱子
////另半边和这半边是对称的，思路一样
////
////为什么要先找到最高的柱子，分成逻辑对称的两部分？如果不找到最高柱子将其分成两部分，
////当某个水坑的右边是最高柱子的时候，下一个水坑的寻找就十分困难，因为下一个水坑左边是最高的柱子，右边却要寻找比中间相隔柱子都要高的
////柱子做边，万一是个W形状,就很难确定右边是谁了
//
////当找到最高柱子后，两部分的寻找都可以看作确定了水坑低边，寻找高边。而不分成两部分，确定不了身份，不知道另一边该寻找高边还是低边
////(另一边能找到高边还好说，只怕找不到高边，寻找低边就很麻烦)
//
//class Solution {
//public:
//	//采用方法二
//	int trap(vector<int>& height) {
//		int len = height.size(), maxH = 0, j = 0;
//		int V = 0;//累计的水量
//		for (int i = 0; i < len; ++i) {
//			if (height[i] > maxH) {
//				maxH = height[i];
//				j = i;
//			}
//		}
//
//		//分成两部分
//		//左部分
//		int left = 0, right = len - 1;
//		while (left < j) {
//			left = retLeftHeight(left, height);
//			if (left >= j) break;
//			int r = left+1;
//			while (height[left] > height[r])
//			{
//				r++;
//			}
//			//退出的时候height[r] >= height[left];
//			//计算水坑
//			V += (height[left] * (r - left - 1) - retVolume(left, r, height));
//			left = r;
//		}
//
//		while (right > j) {
//			right = retRightHeight(right, height);
//			if (right <= j) break;
//			int l = right - 1;
//			while (height[right] > height[l])
//			{
//				l--;
//			}
//			//退出的时候height[l] >= height[right];
//			//计算水坑
//			V += (height[right] * (right - l - 1) - retVolume(l, right, height));
//			right = l;
//		}
//		return V;
//	}
//
//	//寻找左边第一个山峰
//	int retLeftHeight(int pos, vector<int> &height) {
//		int next = pos + 1;
//		while (next < height.size() && height[next] >= height[pos]) {
//			pos++;
//			next++;
//		}
//		return pos;
//	}
//
//	//寻找右边第一个山峰
//	int retRightHeight(int pos, vector<int> &height) {
//		int next = pos - 1;
//		while (next >= 0 && height[next] >= height[pos]) {
//			pos--;
//			next--;
//		}
//		return pos;
//	}
//
//	//计算begin和end间的柱子们总共占的面积
//	int retVolume(int &begin, int &end, vector<int> &height) {
//		int S = 0;
//		for (int i = begin + 1; i < end; ++i) {
//			S += height[i];
//		}
//		return S;
//	}
//
//	//方法二的升级版：方法三，采用双指针法
//	//实现left = 0， right = size - 1;
//	//选择其中一份较高的作为最高上限(height[right]或者height[left])，寻找第二高(局部)(leftmax或者rightmax)
//	//寻求答案ans = leftmax or rightmax - curheight;
//	int trap3(vector<int> & height) 
//	{
//		int left = 0, right = height.size() - 1;
//		int ans = 0;
//		int left_max = 0, right_max = 0;
//		while (left < right) {
//			if (height[left] < height[right]) {
//				//右边较高，所以有了兜底的最高，才能放心寻找leftmax第二高
//				height[left] >= left_max ? (left_max = height[left]) : ans += (left_max - height[left]);
//				++left;
//			}
//			else {
//				//左边较高，所以有了兜底的最高，才能放心寻找rightmax第二高
//				height[right] >= right_max ? (right_max = height[right]) : ans += (right_max - height[right]);
//				--right;
//			}
//		}
//	}
//};
//
//int main() {
//	vector<int> height{1000,999,998,997,996,995,994,993,992,991,990,989,988,987,986,985,984,983,982,981,980,979,978,977,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966};
//	Solution S;
//	cout << S.trap(height) << endl;
//	return 0;
//}