//#include<iostream>
//#include<vector>
//#include<unordered_map>
//#include<set>
//using namespace std;
//
////class Solution {
////public:
////	//�ο��𰸣��鲢����һ�߶�sum����һ�߼��������ĿҪ��ĸ���
////	//ת��Ϊ��ǰ׺�����������������lower��upper�������
////	int countRangeSum(vector<int>& nums, int lower, int upper) {
////		long s = 0;
////		vector<long> sum{0}; //ǰ׺��
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
////			int ret = n1 + n2; //����֮ǰ�����ڲ���
////
////			//����ͳ���±�Ե�����
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
////			//���ϲ�������������
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
////���������߶���
//struct SegNode {
//	int lo, hi, add; //lo��hi��ʾ��Χ
//	SegNode* lchild, *rchild;
//	SegNode(int left, int right) : lo(left), hi(right), add(0), lchild(nullptr), rchild(nullptr) {}
//};
//
//class Solution {
//public:
//	//��ǰ׺�����������������lower��upper������⣬ֻ����ʹ�������ݽṹ���̲�ѯʱ��
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
//	//�˴�val�ǹ������±꣬lo,hiҲ���±�
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
//		for (int v : nums) { //����ǰ׺������preSum
//			sum += v;
//			preSum.push_back(sum);
//		}
//
//		//preSum��������ͬ�ģ���allNumbersȴ����ȫ��ͬ��
//		set<long long> allNumbers;
//		for (long long x : preSum) {
//			allNumbers.insert(x);
//			allNumbers.insert(x - lower);
//			allNumbers.insert(x - upper);
//		}
//		// ���ù�ϣ�������ɢ��,key��allNumbers��ֵ��value���±�
//		unordered_map<long long, int> values;
//		int idx = 0;
//		for (long long x : allNumbers) {
//			values[x] = idx;
//			idx++;
//		}
//
//		//�������յ��߶���������values���ܳ���Ϊ���ڵ㣬�����߶���û�߼���ϵ�����������ݵ�ʱ��ٶ��������߼���ϵ
//		SegNode* root = build(0, values.size() - 1);
//		int ret = 0;
//		for (long long x : preSum) {//����ÿ��ǰ׺�͵�x - upper��x - lower�±꣬�Լ��ڴ��±귶Χ�����ڵ�ǰ׺�͸���
//			int left = values[x - upper], right = values[x - lower];
//			ret += count(root, left, right);
//			insert(root, values[x]);//�˴���value[x]ֻ�Ậ��ǰ׺�͵�idx������ֻ����addֻ����ǰ׺�͵ĸ���
//		}
//		return ret;
//	}
//};
//
//int main() {
//	
//	return 0;
//}