//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
///*
//���˸о��Ƕ�̬�滮���⣬���һ�������������ȫû��˼·
//////n >= 3�������
////sort(nums.begin(), nums.end());
////vector<vector<int>> ret;
////int len = nums.size();
////int x = 999, y = 999, z = 999, temp = 0;
//////����һ���̶�һ��������������
////for (int i = 0; i < len-2; ++i) {
////	temp = nums[i];
////	if (temp == x) continue;
////	x = nums[i], y = 999;
////	//��������������y,z
////	for (int j = i+1; j < len; ++j) {
////		temp = nums[j];
////		if (temp == y) continue;
////		y = nums[j], z = 999;
////		for (int k = j+1; k < len; ++k) {
////			temp = nums[k];
////			if (temp == z) continue;
////			z = nums[k];
////			if (x+y+z == 0) ret.push_back({x,y,z});
////		}
////	}
////}
////return ret;
//������������ᳬʱ
//
//��Ŷ���˫ָ�뷨
//*/
//class Solution {
//public:
//	vector<vector<int>> threeSum(vector<int>& nums) {
//		//nums�Ĵ�СӦ����Ҫ��>=3,����ֻ��Ҫ����󼴿�ȥ���ظ������
//		sort(nums.begin(), nums.end());
//		vector<vector<int>> ret;
//		int n = nums.size();
//		for (int first = 0; first < n-2; ++first) {
//			//q��ȥ��ͬ�����
//			if (first > 0 && nums[first] == nums[first - 1]) continue;
//			//����traget,third
//			int target = -nums[first], third = n-1;
//			for (int second = first + 1; second < n;second++) {
//				//��ȥ��ͬ�����
//				if (second > first + 1 && nums[second] == nums[second - 1]) continue;
//
//				//��һ�αȽ�
//				while(second < third && target < nums[second] + nums[third]) third--;
//				//�������˳�
//				if (third == second) break;
//				//�ڶ��αȽ�
//				if(target == nums[second] + nums[third]) ret.push_back({nums[first], nums[second], nums[third]});
//			}
//		}
//		return ret;
//	}
//};
//
//int main() {
//	Solution S;
//	vector<int> nums = {-1, 0, 1, 2, -1, -4};
//	vector<vector<int>> ret;
//	ret = S.threeSum(nums);
//	for (auto v : ret) {
//		for_each(v.begin(), v.end(), [](int a) {cout << a << ends; });
//		cout << endl;
//	}
//	return 0;
//}