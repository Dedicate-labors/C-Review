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
////	//���������points��ʱ��ѡ����ǰ��k���㣬����и��õľ��滻�����ڴ�ȷ����Ψһ�ģ���set����˳��
////	//��ʱ�����Ի����������
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
////	//ֱ��д�ɲ�������,K���ܳ��ȣ�nums��ʵ�ʳ���
////	void retPos(vector<vector<int>> &ret, vector<int> &point, int &K, int &nums) {
////		int i, cs = nums;
////		int l1, l2;
////		//ǰ��nums���Ѿ��ź���point����ret��������������� <,>,�������ڲ�
////		for (i = 0; i < cs; ++i) {
////			l1 = pow(ret[i][0], 2) + pow(ret[i][1], 2);
////			l2 = pow(point[0], 2) + pow(point[1], 2);
////			if (l2 <= l1) {
////				//����
////				for (int j = K - 2; j >= i; --j) {
////					ret[j + 1] = ret[j];
////				}
////				ret[i] = point;
////				if (nums != K) nums++;
////				break;
////			}
////		}
////		//������ⲿ
////		if (l2 > l1 && nums < K) {
////			ret[nums] = point;
////			nums++;
////		}
////	}
////};
//
//class Solution {
//public:
//	//��������
//	vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
//		sort(points.begin(), points.end(), [](const vector<int>& u, const vector<int>& v) {
//			return u[0] * u[0] + u[1] * u[1] < v[0] * v[0] + v[1] * v[1];
//		});
//		//������һ���е㿴��̫����vector<vector<int>> temp(points.begin(), points.begin() + K);
//		return { points.begin(), points.begin() + K };
//	}
//
//	//�����������ȶ��У�Ҳ���ҵ��뷨
//	vector<vector<int>> kClosest2(vector<vector<int>>& points, int K) {
//		priority_queue<pair<int, int>> q; // �����ŵ��Ǿ�����±�ɣ����������ʱ��ʹ����������Ϣ��������ԭ������Ϣ���ǵñ���
//		//˵�����ȶ��бȽϵ�ʱ��ͨ����ֵ����Ĭ��������
//		//�ȴ��k��
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
//	//��ʵ��ϸ�۲�ᷢ�������һ��������topK���⣬���Կ�������Ӽ��η�
//	vector<vector<int>> kClosest3(vector<vector<int>>& points, int K) {
//		nth_element(points.begin(), points.begin() + K - 1, points.end(), [](const vector<int> & u, const vector<int> &v) {
//			return u[0] * u[0] + u[1] * u[1] < v[0] * v[0] + v[1] * v[1];
//		});
//		return { points.begin(), points.begin() + K };
//	}
//
//	//��������top-k�㷨��������
//	void random_select(vector<vector<int>>& points, int left, int right, int K) {
//		//left��right�����±굥λ
//		int pivot_id = uniform_int_distribution<int>{ left, right }(gen);
//		int pivot = points[pivot_id][0] * points[pivot_id][0] + points[pivot_id][1] * points[pivot_id][1];
//		swap(points[right], points[pivot_id]); //��pivot���������ұ߷����㷨��д
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
//		//����ܺõ�ʵ���˿�������ķְ�
//		// [left, i-1] ��С�ڵ��� pivot, [i+1, right] ������ pivot
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