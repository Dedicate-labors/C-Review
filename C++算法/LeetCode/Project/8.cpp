//#include<iostream>
//#include<string>
//#include<cctype>
//#include<sstream>
//#include<climits>
//using namespace std;
//
//class Solution {
//public:
//	int myAtoi(string str) {
//		//1. ���ַ������д���ȥ����ͷ�Ŀո�
//		//2. ����ת�������з��ź��޷���
//		//3. ��ͷ��+-�������ֵĿ��ԣ����ⱻreturn 0;
//		str = strip(str); //��leet�յ���û�������ո�
//
//		if (str == "") return 0; //�ַ�����������Ϊ�վ�return 0
//
//		int len = str.length();
//		string strRes;
//		//�޷���
//		if (isdigit(str[0]))
//		{
//			//ֻ�Ƕ�ȡ��һ�������ַ���
//			strRes = readInt(str);
//			//�Զ�ȡ�����ַ�����������Լ�û��
//			if (strRes == "") return 0;
//
//			if(strRes.length() > 10 || (strRes.length() == 10 && pdYc(strRes))) return INT_MAX;
//
//			return stoi(strRes);
//		}
//		//�з���
//		else if(str[0] == '+' || str[0] == '-')
//		{
//			bool flag;
//			if (str[0] == '+') flag = true;
//			else flag = false;
//
//			if (len == 1 || !isdigit(str[1])) return 0; //ȷ����ȡ�ĺ���str�������ַ���
//			str = str.substr(1, len - 1);
//
//			strRes = readInt(str);
//			//��ȡ�������ַ���strRes,�Զ�ȡ�����ַ���������С���Լ�û��
//			if (strRes == "") return 0;
//
//			//����������Ǹ�Ҫ�ж�
//			if (strRes.length() > 10 || (strRes.length() == 10 && pdYc(strRes)))
//			{
//				if (flag) return INT_MAX;
//				else return INT_MIN;
//			}
//
//			int res = stoi(strRes);
//			if (flag) return res;
//			else
//				return 0 - res;
//		}
//		return 0;
//	}
//private:
//	string strip(string &str);//ȥ����ͷ�Ŀո�
//	string readInt(string &str);// ��ȡ������һ������
//	bool pdYc(string &numStr);
//	bool sign(string &str, int &pos);
//};
//
//string Solution::strip(string &str) {
//	//�ڲ�����ʱ�����ᱻɾ�������Դ˴��������Ͳ���������
//	return str;
//}
//
//string Solution::readInt(string &str) {
//	//ֻ���������ַ���(��ͷ�������ַ���)�ж�ȡ�� ��һ�������� �����ַ���
//	string strcat; //ƴ���ַ���
//	bool flag = true;
//	for (int i = 0; i < str.length();++i) {
//		if (!isdigit(str[i])) break; //�����������ֵ�����¾��˳�
//
//		if (str[i] == '0' && flag) continue; //��ͷ��0��ȥ��
//		else if (isdigit(str[i]) && str[i] != '0') flag = false; //�м��0��ȥ��
//
//		strcat += str[i];
//	}
//	return strcat;
//}
//
//bool Solution::pdYc(string & numStr) {
//	//�˴����Ǹ��ݼ��������int���͵�����ַ�������
//	int maxLen = 10;
//	int rev = stoi(numStr.substr(0, 9));
//	int pop = atoi(&numStr[9]);
//	if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) return true;
//	if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8)) return true;
//	return false;
//}
//
//bool Solution::sign(string &str, int & pos) {
//	bool flag = true;
//	//���з��ŵ������ַ������з��ż���
//	for (pos = 0; pos < str.length(); pos++) {
//		if (isdigit(str[pos])) break;
//		if (str[pos] == '-') flag = false;
//		else if (str[pos] == '+') flag = true;
//	}
//	return flag;
//}
//
//void eachWord(string &str) {
//	istringstream in(str);
//	string word;
//	while (in >> word)
//	{
//		cout << word << " ";
//	}
//}
//
//
////string Solution::strip(string &str) {
////	//�ڲ�����ʱ�����ᱻɾ�������Դ˴��������Ͳ���������
////	int pos = 0;
////	for (auto ch : str) {
////		if (isspace(ch)) pos++;
////		else break;
////	}
////	string strcat = str.substr(pos, str.length() - pos);
////	return strcat;
////}
//
//int main() {
//	Solution s;
//	string str;
//	while (cin >> str) {
//		int res = s.myAtoi(str);
//		cout << res << endl;
//	}
//	return 0;
//} 