////1.���������������飬�乹�ɷ�ʽ���£�
////���ȸ���1��n��n���������ظ�����������Ƴ�����һ�������������ʣ�µ����е�һ�����ظ�һ�Σ������ҵ�ǰ�õ������顣���ҳ�����������
////���룺3 5 6 5 4 1�����ɷ�ʽ��n = 6����ʼ����1 2 3 4 5 6���Ƴ�2���ظ�5�����ҵ�3 5 6 5 4 1��
////��� 2 5
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<iterator>
//#include<numeric>
//#include<unordered_set>
//using namespace std;
//
//vector<int> findNums(int sz[],int len) {
//	int sum = accumulate(sz, sz+len, 0);
//	int diff = (1+len)*len / 2 - sum;
//	//diff���������ж�
//	//Ѱ��ȱ�ٻ����ظ���
//	unordered_set<int> occ;
//	int i;
//	for (i = 0; i < len && !occ.count(sz[i]); ++i) {
//		occ.insert(sz[i]);
//	}
//	//Ѱ�ҵ��ظ��ľ�ͣ��
//	vector<int> ret;
//	ret.emplace_back(sz[i]);
//	ret.emplace_back(sz[i]+diff);
//	return ret;
//}
//
//int main() {
//	int sz[] = {3, 5, 6, 5, 4, 1};
//	vector<int> ret;
//	ret = findNums(sz, sizeof(sz)/sizeof(int));
//	for_each(ret.begin(), ret.end(), [](int &num) {cout << num << ' ';});
//	return 0;
//}
