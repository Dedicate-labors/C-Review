//#include<iostream>
//#include<vector>
//#include<set>
//#include<map>
//#include<queue>
//#include<cmath>
//#include<algorithm>
//#include<random>
//using namespace std;
//
////class Solution {
////public:
////	//在逐个遍历points的时候选出当前的k个点，如果有更好的就替换，由于答案确保是唯一的，用set满足顺序
////	//超时，所以还算好拉？？
////	vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
////		vector<vector<int>> ret(K, vector<int>(2, 0));
////		int nums = 0;
////		for (auto &it : points) {
////			if (nums == 0) {
////				ret[0] = it;
////				nums++;
////			}
////			else
////				retPos(ret,it,K,nums);
////		}
////		return ret;
////	}
////
////	//直接写成插入排序,K是总长度，nums是实际长度
////	void retPos(vector<vector<int>> &ret, vector<int> &point, int &K, int &nums) {
////		int i, cs = nums;
////		int l1, l2;
////		//前面nums个已经排好序，point对于ret数组有三钟情况， <,>,或者在内部
////		for (i = 0; i < cs; ++i) {
////			l1 = pow(ret[i][0], 2) + pow(ret[i][1], 2);
////			l2 = pow(point[0], 2) + pow(point[1], 2);
////			if (l2 <= l1) {
////				//插入
////				for (int j = K - 2; j >= i; --j) {
////					ret[j + 1] = ret[j];
////				}
////				ret[i] = point;
////				if (nums != K) nums++;
////				break;
////			}
////		}
////		//如果在外部
////		if (l2 > l1 && nums < K) {
////			ret[nums] = point;
////			nums++;
////		}
////	}
////};
//
//class Solution {
//public:
//	//暴力排序
//	vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
//		sort(points.begin(), points.end(), [](const vector<int>& u, const vector<int>& v) {
//			return u[0] * u[0] + u[1] * u[1] < v[0] * v[0] + v[1] * v[1];
//		});
//		//下面这一步有点看不太懂，vector<vector<int>> temp(points.begin(), points.begin() + K);
//		return { points.begin(), points.begin() + K };
//	}
//
//	//方法二：优先队列，也是我的想法
//	vector<vector<int>> kClosest2(vector<vector<int>>& points, int K) {
//		priority_queue<pair<int, int>> q; // 里面存放的是距离和下标吧，所以排序的时候使用其他的信息，但数组原本的信息还是得保留
//		//说明优先队列比较的时候通过键值，且默认是升序
//		//先存放k个
//		for (int i = 0; i < K; ++i) {
//			q.emplace(points[i][0] * points[i][0] + points[i][1] * points[i][1], i);
//		}
//		int n = points.size();
//		for (int i = K; i < n; ++i) {
//			int dist = points[i][0] * points[i][0] + points[i][1] * points[i][1];
//			if (dist < q.top().first) {
//				q.pop();
//				q.emplace(dist,i);
//			}
//		}
//		vector<vector<int>> ans;
//		while (!q.empty()) {
//			ans.push_back(points[q.top().second]);
//			q.pop();
//		}
//		return ans;
//	}
//
//	//其实仔细观察会发现这就是一个升级的topK问题，所以快速排序加减治法
//	vector<vector<int>> kClosest3(vector<vector<int>>& points, int K) {
//		nth_element(points.begin(), points.begin() + K - 1, points.end(), [](const vector<int> & u, const vector<int> &v) {
//			return u[0] * u[0] + u[1] * u[1] < v[0] * v[0] + v[1] * v[1];
//		});
//		return { points.begin(), points.begin() + K };
//	}
//
//	//方法三，top-k算法具体首先
//	void random_select(vector<vector<int>>& points, int left, int right, int K) {
//		//left和right都是下标单位
//		int pivot_id = uniform_int_distribution<int>{ left, right }(gen);
//		int pivot = points[pivot_id][0] * points[pivot_id][0] + points[pivot_id][1] * points[pivot_id][1];
//		swap(points[right], points[pivot_id]); //将pivot交换到最右边方便算法编写
//		int i = left - 1;
//		for (int j = left; j < right; ++i) {
//			int dist = points[j][0] * points[j][0] + points[j][1] * points[j][1];
//			if (dist <= pivot) {
//				++i;
//				swap(points[i], points[j]);
//			}
//		}
//		++i;
//		swap(points[i], points[right]);
//		//上面很好的实现了快速排序的分半
//		// [left, i-1] 都小于等于 pivot, [i+1, right] 都大于 pivot
//		if (K < i - left + 1) {
//			random_select(points, left, i - 1, K);
//		}
//		else if (K > i - left + 1) {
//			random_select(points, i + 1, right, K - (i - left + 1));
//		}
//	}
//
//private:
//	mt19937 gen{ random_device{}() };
//};
//
//int main()
//{
//	//Solution S;
//	//vector<vector<int>> points = { {1,3},{-2, 2},{2, -2} };
//	//int K = 2;
//	//S.kClosest(points,K);
//
//	cout << random_device{}() << endl;
//	return 0;
//}