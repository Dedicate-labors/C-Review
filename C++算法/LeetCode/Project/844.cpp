//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//
////��������ʹ�ã�˫ָ���е�βָ����н����ͨ���±�Ƚ�û�б�ɾ�����ַ�������Ƚ���Щû��ɾ����
//class Solution {
//public:
//	//���˸�#��Ч����ͨ�����±�ʵ��
//	bool backspaceCompare(string S, string T) {
//		string SChange = change(S);
//		cout << SChange << endl;
//		string TChange = change(T);
//		cout << TChange << endl;
//		return SChange == TChange ? true : false;
//	}
//
//	//temp�������ǿ�Ŷ����
//	string change(string &temp) {
//		int pos = 0;// ��ǰ�ַ�Ӧ��¼��λ�ã�������û���ַ�
//		vector<char> ret;
//		for (auto ch : temp) {
//			if (ch != '#') {
//				ret.push_back(ch);
//				pos++;
//			}
//			else if (pos > 0) {
//				pos--;
//				ret.pop_back();
//			}
//			//pos <= 0�Ͳ�����������
//		}
//		return string(ret.begin(), ret.end());
//	}
//};
//
//int main() {
//	Solution Sol;
//	string S, T;
//	while (cin >> S >> T) {
//		cout << Sol.backspaceCompare(S, T) << endl;
//	}
//	return 0;
//}