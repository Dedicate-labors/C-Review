//#include<iostream>
//#include<vector>
//#include<map> 
//#include<algorithm>
//using namespace std;
//
////给你两个数组，arr1 和arr2，
////
////arr2 中的元素各不相同
////arr2 中的每个元素都出现在arr1?中
////对 arr1中的元素进行排序，使 arr1 中项的相对顺序和 arr2 中的相对顺序相同。未在 arr2 中出现过的元素需要按照升序放在 arr1 的末尾
//
////方法二：计算排序既桶排序。创建一个0-1000的大小为1001的数组frequency。frequency记录每一个元素在数组arr1中出现的次数
////随后遍历arr2，遍历到元素x时，我们将frequency[x]个x加入答案中，并将frquency[x]清零。
////遍历结束后，再遍历一边frequency，找到那些不为0次的，加入到排序中
//
//class Solution {
//public:
//	vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//		//去掉arr1中不在arr2中的元素
//		//下标是升序的，所以使用map记录arr2,key是arr2值，value是下标 
//		//对可能去掉部分元素的arr1进行sort排序，使用自己设置的compare方法
//		map<int, int> map2;
//		for (int i = 0; i < arr2.size(); ++i)
//			map2[arr2[i]] = i;
//		vector<int> vct1, vct2;
//		for (auto &it : arr1) {
//			if (map2.count(it)) vct1.push_back(it);
//			else vct2.emplace_back(it);
//		}
//		sort(vct2.begin(), vct2.end());
//		sort(vct1.begin(), vct1.end(), [map2](const int &a, const int &b) {
//			//return map2[a] < map2[b];
//			return map2.find(a)->second < map2.find(b)->second;
//		});
//		//拼接好
//		for (auto &it : vct2) {
//			vct1.emplace_back(it);
//		}
//		return vct1;
//	}
//};
//
//int main() {
//	vector<int> arr1 = { 2,3,1,3,2,4,6,7,9,2,19 }, arr2 = { 2,1,4,3,9,6 };
//	Solution S;
//	S.relativeSortArray(arr1, arr2);
//	return 0;
//}