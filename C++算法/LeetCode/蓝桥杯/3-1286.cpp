//#include<vector>
//#include<iostream>
//#include<cmath>
//#include<cstdio>
//#include<set>
//using namespace std;
//
////ѡ���һ��Path��Pathֻ��5��
//int table[10];
//int ans = 0; //�����������
//
////����5��������������,�������ͨ�ģ����ѡһ�����ӣ������ߵ�����һ��
//bool test(int step) {
//	set<int> walk;//����ģ����·
//	walk.insert(table[0]);
//	int k, max;
//	for (int i = 1; i < step; i++) {
//		//�ж�walk�еĸ����ܷ�i��ʾ�ĸ���
//		set<int>::iterator end = walk.end();
//		set<int>::iterator start = walk.begin();
//		while (start != end) {
//			k = abs(*start - table[i]);
//
//			max = *start > table[i] ? *start : table[i];
//			if (k == 1 && (max == 5 || max == 9)) {
//				++start;
//				continue;
//			}
//
//			if (k == 1 || k == 4) {
//				walk.insert(table[i]);
//			}
//			start++;
//		}
//	}
//
//	//˳�Ŵ�С����һ��
//	for (int i = 4; i >= 0; --i) {
//		//�ж�walk�еĸ����ܷ�i��ʾ�ĸ���
//		set<int>::iterator end = walk.end();
//		set<int>::iterator start = walk.begin();
//		while (start != end) {
//			k = abs(*start - table[i]);
//
//			max = *start > table[i] ? *start : table[i];
//			if (k == 1 && (max == 5 || max == 9)) {
//				++start;
//				continue;
//			}
//
//			if (k == 1 || k == 4) {
//				walk.insert(table[i]);
//			}
//			start++;
//		}
//	}
//	for (int i = 1; i < step; i++) {
//		//�ж�walk�еĸ����ܷ�i��ʾ�ĸ���
//		set<int>::iterator end = walk.end();
//		set<int>::iterator start = walk.begin();
//		while (start != end) {
//			k = abs(*start - table[i]);
//
//			max = *start > table[i] ? *start : table[i];
//			if (k == 1 && (max == 5 || max == 9)) {
//				++start;
//				continue;
//			}
//
//			if (k == 1 || k == 4) {
//				walk.insert(table[i]);
//			}
//			start++;
//		}
//	}
//	//˳�Ŵ�С����һ��
//	for (int i = 4; i >= 0; --i) {
//		//�ж�walk�еĸ����ܷ�i��ʾ�ĸ���
//		set<int>::iterator end = walk.end();
//		set<int>::iterator start = walk.begin();
//		while (start != end) {
//			k = abs(*start - table[i]);
//
//			max = *start > table[i] ? *start : table[i];
//			if (k == 1 && (max == 5 || max == 9)) {
//				++start;
//				continue;
//			}
//
//			if (k == 1 || k == 4) {
//				walk.insert(table[i]);
//			}
//			start++;
//		}
//	}
//	if (walk.size() != 5) return false;
//	else return true;
//}
//
////step��ʾ�±꣬��ֻ��5��;n��ʾ�ܹ��ĸ�����
//void dfs(int n, int step) {
//	if (step == 5) {
//		if (test(step)) {
//			ans++;
//			for (int j = 0; j < step; ++j) {
//				cout << table[j] << ' ';
//			}
//			cout << endl;
//		}
//		return;
//	}
//
//	for (int i = n; i >= 1; --i) {
//		table[step] = i;
//		dfs(i-1,step + 1);
//	}
//}
//
////����dfs���⣬�鿴�Ƿ�������һ��ͨ�����ӵ�value����
////eg:6�������ڵ�value���ֱ���1��3��4��5
////ע�⻹���ظ��ļ���
////����������Ӧ���Ǹ����C12-5����Ҫ���������value����
//int main() {
//	dfs(12, 0);
//	cout << ans << endl;	
//	return 0;
//}
