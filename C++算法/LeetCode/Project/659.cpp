//#include<iostream>
//#include<vector>
//#include<map>
//#include<algorithm>
//#include<unordered_map>
//#include<queue>
//using namespace std;
//
//class Solution {
//public:
//	////条件1：分出来的子数组不能重复，还要连续，单调递增栈且长度>=3
//	////从条件1得到每个重复数背后都是独立的连续整数组成且长度至少为 3
//	////将nums转化为map(int ,int) key是元素，value是元素次数
//	////maxH (最大重复次数，也既结果数组个数)，建立H数组，他有maxH个元素，代表每行的连续元素个数
//	////当元素次数由少变多，很容易，但当元素次数由多变少，因为要连续的要求，必然会断掉某些行，将少的元素分给连续元素个数还不够多的行上
//	////自闭了的行，在检测过后，变为0,移动到最后面，保证H是降序
//	////这个自闭还能在行数值不连续的时候 --------？？？没考虑元素本身的值
//	//bool isPossible(vector<int>& nums) {
//	//	int num = nums[0];
//	//	for (int j = 1; j < nums.size(); ++j) {
//	//		//nums[j] 相比 num 只能相差0或者1
//	//		int d = nums[j] - num;
//	//		if (d != 0 && d != 1) return false;
//	//		num = nums[j];
//	//	}
//	//	//处理的mapNums必须是连续的
//	//	map<int, int> mapNums;
//	//	for (int i = 0; i < nums.size(); ++i) {
//	//		mapNums[nums[i]]++;
//	//	}
//	//	int maxH = 0;
//	//	for (auto &it : mapNums) {
//	//		if (it.second > maxH) maxH = it.second;
//	//	}
//	//	vector<int> H(maxH, 0);
//
//	//	int pre = 0; //表示前一个数的次数
//	//	for (auto &it : mapNums) {
//	//		if (pre <= it.second) {
//	//			for (int i = 0, j = 0; i < maxH && j < it.second; ++i) {
//	//					H[i]++; j++; //j表示装入的元素个数
//	//			}
//	//		}
//	//		else
//	//		{
//	//			int i,j;
//	//			vector<int> temp(it.second);
//	//			for (i = maxH - 1, j = 0; i < maxH && j < it.second; --i) {
//	//				if (H[i] != 0) {
//	//					H[i]++;
//	//					temp[j++] = H[i];
//	//				}
//	//			}
//	//			for (; i >= 0; --i) {
//	//				//检查并清零
//	//				if (H[i] < 3) return false;
//	//				H[i] = 0;
//	//			}
//	//			//移动数组,将升序temp转入H中，
//	//			for (i = 0; i < maxH ; ++i) {
//	//				if (i < it.second) H[i] = temp[--j];
//	//				else H[i] = 0;
//	//			}
//	//		}
//	//		pre = it.second;
//	//		//sort(H.begin(), H.end());//没必要去排序吧。。
//	//	}
//	//	//最后一次检查H
//	//	for (int i = 0; i < maxH; ++i) {
//	//		if (H[i] < 3 && H[i] > 0) return false;
//	//	}
//	//	return true;
//	//}
//	//解法1：创建每个元素作为子序列的结尾元素，value是以该key作为结尾的子序列长度
//	//遍历nums(nums升序)， 遍历到x，去查看是否有x-1结尾的子序列，有就选择子序列长度最短的接上，同时x-1结尾变为x结尾
//	//没有x-1结尾的就创建新的x结尾子序列，长度为1
//	bool isPossible(vector<int>& nums) {
//		unordered_map<int, priority_queue<int, vector<int>, greater<int>>> mp;
//		for (auto &x : nums) {
//			if (mp.find(x) == mp.end()) {
//				mp[x] = priority_queue<int, vector<int>, greater<int>>();
//			}
//			if (mp.find(x - 1) != mp.end()) {
//				int prevLength = mp[x - 1].top();  //得到最短子序列长度
//				mp[x - 1].pop();
//				//没有子序列了，就删除掉mp[x-1]
//				if (mp[x - 1].empty()) {
//					mp.erase(x-1);
//				}
//				mp[x].push(prevLength+1);
//			}
//			else {
//				//创建新的x结尾的子序列
//				mp[x].push(1);
//			}
//		}
//		//遍历mp，得到正确结果
//		for (auto it = mp.begin(); it != mp.end(); ++it) {
//			priority_queue<int, vector<int>, greater<int>> queue = it->second;
//			if (queue.top() < 3) {
//				return false;
//			}
//		}
//		return true;
//	}
//	//解法2：贪心。
//	bool isPossible2(vector<int>& nums) {
//		unordered_map<int, int> countMap; //计数map
//		unordered_map<int, int> endMap; //作为key结尾的子序列个数value，子序列元素个数都是满足>=3要求的
//		for (auto& x : nums) {
//			int count = countMap[x] + 1;
//			countMap[x] = count;
//		}
//		//此处没有遍历countMap而是遍历nums，反过来用了，6p
//		for (auto& x : nums) {
//			int count = countMap[x];
//			if (count > 0) {
//				int prevEndCount = endMap[x - 1]; //endMap有就返回，无就创建并返回0
//				if (prevEndCount > 0) {
//					//加入其中一个子序列，该子序列结尾改变，所以endMap[x-1]减少
//					//endMap[x]变多
//					//countMap[x] 减少
//					countMap[x] = count - 1;
//					endMap[x - 1] = prevEndCount - 1;
//					endMap[x] = endMap[x] + 1;
//				}
//				else {
//					//如果x-1没有，所以就以x开始，至少找到x+1,x+2,凑齐三个为一个子序列
//					int count1 = countMap[x + 1];
//					int count2 = countMap[x + 2];
//					if (count1 > 0 && count2 > 0) {
//						countMap[x] = count - 1;
//						countMap[x + 1] = count1 - 1;
//						countMap[x + 2] = count2 - 1;
//						endMap[x + 2] = endMap[x + 2] + 1;
//					}
//					else {
//						return false;
//					}
//				}
//			}
//		}
//		//如果可以分完nums序列return true
//		return true;
//	}
//};
//
//int main()
//{
//	Solution S;
//	vector<int> nums{1,2,3,3,3,4,4,5,5,5,6,6,6,7};
//	S.isPossible(nums);
//	return 0;
//}