//#include<iostream>
//#include<string>
//
//using namespace std;
//
//void permute(const string &prefix, const string &str)
//{
//	if (str.length() == 0)
//		cout << prefix << endl;
//	else
//	{
//		for (size_t i = 0; i < str.length(); i++) //ѭ��Ƕ�ף���ٳ��������
//			permute(prefix + str[i], str.substr(0, i) + str.substr(i + 1, str.length()));
//	}
//}
//
//int main()
//{
//	string a, b = "abcd";
//	permute(a, b);
//	return 0;
//}