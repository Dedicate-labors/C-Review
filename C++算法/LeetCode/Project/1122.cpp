//#include<iostream>
//#include<vector>
//#include<map> 
//#include<algorithm>
//using namespace std;
//
////�����������飬arr1 ��arr2��
////
////arr2 �е�Ԫ�ظ�����ͬ
////arr2 �е�ÿ��Ԫ�ض�������arr1?��
////�� arr1�е�Ԫ�ؽ�������ʹ arr1 ��������˳��� arr2 �е����˳����ͬ��δ�� arr2 �г��ֹ���Ԫ����Ҫ����������� arr1 ��ĩβ
//
////�����������������Ͱ���򡣴���һ��0-1000�Ĵ�СΪ1001������frequency��frequency��¼ÿһ��Ԫ��������arr1�г��ֵĴ���
////������arr2��������Ԫ��xʱ�����ǽ�frequency[x]��x������У�����frquency[x]���㡣
////�����������ٱ���һ��frequency���ҵ���Щ��Ϊ0�εģ����뵽������
//
//class Solution {
//public:
//	vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//		//ȥ��arr1�в���arr2�е�Ԫ��
//		//�±�������ģ�����ʹ��map��¼arr2,key��arr2ֵ��value���±� 
//		//�Կ���ȥ������Ԫ�ص�arr1����sort����ʹ���Լ����õ�compare����
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
//		//ƴ�Ӻ�
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