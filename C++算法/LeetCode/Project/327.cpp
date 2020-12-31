//#include<iostream>
//#include<vector>
//#include<unordered_map>
//#include<set>
//using namespace std;
//
////class Solution {
////public:
////	//参考答案，归并排序，一边对sum排序，一边计算符合题目要求的个数
////	//转换为对前缀和求任意两个间差在lower和upper间的问题
////	int countRangeSum(vector<int>& nums, int lower, int upper) {
////		long s = 0;
////		vector<long> sum{0}; //前缀和
////		for (auto & v : nums) {
////			s += v;
////			sum.push_back(s);
////		}
////		return countRangeSumRecursive(sum, lower, upper, 0, sum.size() - 1);
////	}
////
////	int countRangeSumRecursive(vector<long>& sum, int lower, int upper, int left, int right) {
////		if (left == right) {
////			return 0;
////		}
////		else {
////			int mid = (left + right) / 2;
////			int n1 = countRangeSumRecursive(sum, lower, upper, left, mid);
////			int n2 = countRangeSumRecursive(sum, lower, upper, mid + 1, right);
////			int ret = n1 + n2; //算上之前左右内部的
////
////			//首先统计下标对的数量
////			int i = left;
////			int l = mid + 1;
////			int r = mid + 1;
////			while (i <= mid) {
////				while (l <= right && sum[l] - sum[i] < lower) l++;
////				while (r <= right && sum[r] - sum[i] <= upper) r++;
////				ret += (r - l);
////				i++;
////			}
////
////			//随后合并两个排序数组
////			vector<int> sorted(right - left + 1);
////			int p1 = left, p2 = mid + 1;
////			int p = 0;
////			while (p1 <= mid || p2 <= right) {
////				if (p1 > mid) {
////					sorted[p++] = sum[p2++];
////				}
////				else if (p2 > right) {
////					sorted[p++] = sum[p1++];
////				}
////				else {
////					if (sum[p1] < sum[p2]) {
////						sorted[p++] = sum[p1++];
////					}
////					else {
////						sorted[p++] = sum[p2++];
////					}
////				}
////			}
////			for (int i = 0; i < sorted.size(); i++) {
////				sum[left + i] = sorted[i];
////			}
////			return ret;
////		}
////	}
////};
//
////方法二：线段树
//struct SegNode {
//	int lo, hi, add; //lo和hi表示范围
//	SegNode* lchild, *rchild;
//	SegNode(int left, int right) : lo(left), hi(right), add(0), lchild(nullptr), rchild(nullptr) {}
//};
//
//class Solution {
//public:
//	//对前缀和求任意两个间差在lower和upper间的问题，只不过使用了数据结构缩短查询时间
//	SegNode* build(int left, int right) {
//		SegNode* node = new SegNode(left, right);
//		if (left == right) {
//			return node;
//		}
//		int mid = (left + right) / 2;
//		node->lchild = build(left, mid);
//		node->rchild = build(mid + 1, right);
//		return node;
//	}
//
//	//此处val是关联的下标，lo,hi也是下标
//	void insert(SegNode* root, int val) {
//		root->add++;
//		if (root->lo == root->hi) {
//			return;
//		}
//		int mid = (root->lo + root->hi) / 2;
//		if (val <= mid) {
//			insert(root->lchild, val);
//		}
//		else {
//			insert(root->rchild, val);
//		}
//	}
//
//	int count(SegNode* root, int left, int right) const {
//		if (left > root->hi || right < root->lo) {
//			return 0;
//		}
//		if (left <= root->lo && root->hi <= right) {
//			return root->add;
//		}
//		return count(root->lchild, left, right) + count(root->rchild, left, right);
//	}
//
//	int countRangeSum(vector<int>& nums, int lower, int upper) {
//		long long sum = 0;
//		vector<long long> preSum = { 0 };
//		for (int v : nums) { //制作前缀和数组preSum
//			sum += v;
//			preSum.push_back(sum);
//		}
//
//		//preSum可能有相同的，但allNumbers却是完全不同的
//		set<long long> allNumbers;
//		for (long long x : preSum) {
//			allNumbers.insert(x);
//			allNumbers.insert(x - lower);
//			allNumbers.insert(x - upper);
//		}
//		// 利用哈希表进行离散化,key是allNumbers的值，value是下标
//		unordered_map<long long, int> values;
//		int idx = 0;
//		for (long long x : allNumbers) {
//			values[x] = idx;
//			idx++;
//		}
//
//		//创建处空的线段树，既以values的总长度为根节点，建的线段树没逻辑关系，但插入数据的时候假定他含有逻辑关系
//		SegNode* root = build(0, values.size() - 1);
//		int ret = 0;
//		for (long long x : preSum) {//计算每个前缀和的x - upper和x - lower下标，以及在此下标范围区间内的前缀和个数
//			int left = values[x - upper], right = values[x - lower];
//			ret += count(root, left, right);
//			insert(root, values[x]);//此处的value[x]只会含有前缀和的idx，所以只插入add只计算前缀和的个数
//		}
//		return ret;
//	}
//};
//
//int main() {
//	
//	return 0;
//}