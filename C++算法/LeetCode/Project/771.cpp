//#include<string>
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//	//�����ƽ�
//	int numJewelsInStones(string J, string S) {
//		int count = 0;
//		int lenS = S.length();
//		for (int i = 0; i < lenS; ++i) {
//			if (isGem(S[i], J)) count++;
//		}
//		return count;
//	}
//	//�ⷨ�����ù�ϣ�洢J�����Ҿ���˼·û��
//
//private:
//	bool isGem(char & ch, string & J);//�ж��Ƿ�Ϊ��ʯ
//};
//
//bool Solution::isGem(char & ch, string & J) {
//	for (int i = 0; i < J.length(); ++i) {
//		if (ch == J[i]) return true;
//	}
//	return false;
//}
//
//int main() {
//	string J, S;
//	Solution Obj;
//	while (cin >> J >> S)
//	{
//		cout << Obj.numJewelsInStones(J,S) << endl;
//	}
//	return 0;
//}