//#include<iostream>
//#include<string>
//#include<cctype>
//#include<sstream>
//#include<climits>
//#include<vector>
//using namespace std;

//class Solution {
//public:
//	bool isMatch(string s, string p) {
//		/*
//		s ����Ϊ�գ���ֻ������ a - z ��Сд��ĸ��
//		p ����Ϊ�գ���ֻ������ a - z ��Сд��ĸ���Լ��ַ�.�� *��
//		*/
//		int lenS = s.length(), lenP = p.length(), i = 0;
//		if (lenS == 0 && lenP == 0) return true;
//		if (lenS == 0 || lenP == 0) return false;
//		//ȷ�������s,p�������ַ���
//		//������ֻ��һ���ַ���ʱ��
//		if (lenS == 1 || lenP == 1) {
//			if (lenS > 1) return false; //n:1��ʱ��
//			//1:1
//			if (lenS == 1 && lenP == 1) return findStr(p, s[0]);
//		}
//
//		//m:n����1:nʱ
//		for (i = 0; i < lenS; ++i) {
//			if (!findStr(p, s[i])) return false;
//		}
//		//ƥ����󣬼����p,
//		//������p
//		if (isDeleteStr(p)) return true;
//		//p�ǲ��������Ļ���������Ϊ̰��ƥ�仹�ǿ���return true��
//		//a aa*a --> a a*a ����false; aa a*a-> a a*a ����true;��ֻ֮�з���̰��ƥ���Һ��滹�ܸ��ϵĲ���true
//		lenP = p.length();
//		string temp; //p�Ĳ��ָ���
//		if (pdTx) {
//			//����̰�ı�������a*��ͷ�������ַ���
//			temp = p.substr(0, lenP - 1);//  p�ǳ������һλ���ַ���
//			if (isDeleteStr(temp) && s[i - 1] == p[lenP - 1]) return true;
//			else return false;
//		}
//		else
//			//û����̰�ģ�p��ʣ�¾�ֱ��false
//			return false;
//	}
//private:
//	bool findStr(string & str, char &ch); //s��p��Ѱ������==���ַ��������ٰ�֮���p�ַ����ı䡣 1:n�����:ch��s�е��ַ���str����p�ַ���
//	bool isDeleteStr(string & str); //�ж϶�Ӧ��str�Ƿ����������"", ����p�ַ������磺a*b*c*���ַ�����*��ϻ��߿��ַ��������
//	bool pdTx = false; //�ж��Ƿ��ù�̰��
//};
//
//bool Solution::findStr(string &str, char &ch) {
//	//str����p��ĳһ�Σ�ch����s�е�ĳ���ַ�
//	//���ҵ���Ӧƥ���ch��ok��,��ס*��Ӱ�죬����ɾ�����и���
//	//str�ĸı�ܹؼ�����ch == p�е��׸�t�ַ��ˣ�
//	//ch1 == t,t�ַ����������*���ַ���.,��
//	//���˺�����*�⣬���������Ҫ��pɾ����
//	int pos = 0, len = str.length();
//	string temp; //str�Ĳ��ָ���
//	for (pos = 0; pos < len; ++pos) {
//		if (str[pos] == ch || str[pos] == '.') {
//			//����϶��ж�Ӧ��
//			//�鿴��ʱposλ��
//			temp = str.substr(0, pos);
//			if (isDeleteStr(temp)) {
//				//û����һλ��
//				if (pos + 1 == len) { str = ""; pdTx = false; return true;}//���ֱ�Ӵ���ƥ��ɹ��� ������
//				//������һλ
//				if (str[pos + 1] != '*') { str = str.substr(pos + 1, len - pos - 1); pdTx = false; }//ɾ������
//				else { str = str.substr(pos, len - pos); pdTx = true; }//��֤����������
//
//				//cout << str << endl;
//				return true;//true
//			}
//			else return false;//false
//		}
//	}
//	return false;// false
//}
//
//bool Solution::isDeleteStr(string &str) {
//	//strΪ��
//	if (str == "") return true;
//	//strȫ���ַ����ߺ���*��ȫ���ַ���ֱ�ӷ���false
//	//���*��a-z�ַ�����Ŀ��
//	//int x = 0, alpha = 0;//ǰ����*����Ŀ��������alpha����Ŀ
//	bool flag = true;
//	for (auto ch : str) {
//		if (flag && (isalpha(ch)|| ch == '.')) flag = false; //����'.'��Ϊ�˼�������ж�
//		else if (!flag && ch == '*') flag = true;
//		else
//			return false; //��������
//	}
//	if (!flag) return false;
//	return true;
//}


/*
����Ľ���Ƕ�̬ƥ�䣺һλһλƥ�����������Ƶ������н����
dp[i][j] ��bool�����ʾs��ǰiλ��p��ǰjλ�Ƿ���ȣ���ý���Ĭ�ϳ�ʼ��false
s[i] == p[j] dp[i][j] = dp[i-1][j-1]; s[i]��p[j]�ַ���ȣ�����ȥ������Ҳ���ԣ�ֱ��dp[i][j] = dp[i-1][j-1]
s[i] != p[j] �����ʱp[j]������*�������ַ������Բ�������(dpĬ�ϳ�ʼ��false)
��p[j] == '*'ʱ��
s[i] != p[j-1] dp[i][j] = dp[i][j-2] ��Ȼs[i]��p[j-1]����ȣ�*���Ա�ʾ0��������ֱ��ȥ����dp[i][j] = dp[i][j-2]
�������ӵ�s[i] == p[j-1]
dp[i][j] == dp[i-1][j]  (###b ###b*)->(### ###b*)ȥ��b����� s��b��λʱ�����
or dp[i][j] == dp[i][j-1] (###b ###b*)->(###b ###b)ȥ��*������� ��������*�ӳֵ������
or dp[i][j] == dp[i][j-2] (###b ###b*)->(###b ###)ȥ��b*������� b*��Ϊ*��Ե��Ҳ��ȷ������Ч��
*/
//class Solution {
//public:
//	bool isMatch(string s, string p) {
//		s = " " + s;//��ֹ�ð�����""\n"c*"
//		p = " " + p;
//		int m = s.size(), n = p.size();
//		//s,p���ǵ���ֱ������ƥ����ַ���
//		vector<vector<bool>> dp(m+1, vector<bool>(n+1, false));
//		//bool dp[m + 1][n + 1];
//		//memset(dp, false, (m + 1)*(n + 1));
//		//dp�����������⣬�ǵ㲻��׼����ȷ���÷�
//		dp[0][0] = true;
//		for (int i = 1; i <= m; i++) {
//			for (int j = 1; j <= n; j++) {
//				if (s[i - 1] == p[j - 1] || p[j - 1] == '.') {
//					dp[i][j] = dp[i - 1][j - 1];
//				}
//				else if (p[j - 1] == '*') {
//					if (s[i - 1] != p[j - 2] && p[j - 2] != '.')
//						dp[i][j] = dp[i][j - 2];
//					else {
//						dp[i][j] = dp[i][j - 1] || dp[i][j - 2] || dp[i - 1][j];
//					}
//				}
//			}
//		}
//		return dp[m][n];
//	}
//};
//
//int main()
//{
//	Solution S;
//	string s, p;
//	while (cin >> s >> p) {
//		cout << S.isMatch(s, p) << endl;
//	}
//	return 0;
//}