//#include<iostream>
//#include<string>
//#include<vector>
//#include<set>
//using namespace std;
//
//class Solution {
//public:
//	bool isLongPressedName(string name, string typed) {
//		//�����ⷨ
//		int i = 0, j = 0, counti = 0, countj = 0;
//		char prei = name[i], prej=typed[j];
//		int nameSize = name.size(), typedSize = typed.size();
//		//��ʵֻѭ����O(n+m)ʱ�䣬O(1)�ռ�
//		while (i < nameSize) {
//			//��ʼ�����߸���
//			prei = name[i], prej = typed[j];
//			counti = 0, countj = 0;
//			while (i < nameSize) {
//				if (prei == name[i]) {
//					i++; counti++;
//				}
//				else break;
//				prei = name[i - 1];
//			}
//			//������i�Ĵ�С��ʾ�ַ����Ⱥ���Ҫ
//
//			while (j < typedSize)
//			{
//				if (prej == typed[j]) {
//					j++;
//					countj++;
//				}
//				else break;
//				prej = typed[j - 1];
//			}
//			//������j�Ĵ�С��ʾ�ַ����Ⱥ���Ҫ
//			cout << prei<<':'<< counti << ' ' << prej << ':' << countj << endl;
//			if (prei != prej || counti > countj) return false;
//			//i, j���±����ĳ���Ѿ���������һ�������࣬�Ƿ���false
//			if (i == nameSize && j != typedSize) return false;
//			if (i != nameSize && j == typedSize) return false;
//		}
//		return true;
//	}
//};
//
//int main() {
//	string name, typed;
//	Solution S;
//	cin >> name >> typed;
//	cout << S.isLongPressedName(name, typed) << endl;
//	return 0;
//}