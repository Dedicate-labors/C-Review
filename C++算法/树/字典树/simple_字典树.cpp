//#include<iostream>
//#include<vector>
//#include<string>
////5231��
//
//int teri[100][26] = { 0 }; //ȫ����ʼ��Ϊ0
//int color[100] = { 0 };//�����ɫ
//int k = 1;//�ڵ�λ�� �����±ߵ�i
//using namespace std;
//
//void insert(string &url)//��������ֵ���
//{
//	int i = 0, j = 0;//iһ��ʼ��0�Žڵ�Ҳ���Ǹ��ڵ㣬 j������ȷ����ݵ�
//	for (auto ch : url)
//	{
//		j = ch - 'a';
//		if (!teri[i][j])
//		{
//			teri[i][j] = k;
//			k++;
//		}
//		i = teri[i][j];
//	}
//	color[i] = 1; //�����������ô�����ĩβ�Ľڵ�Ϊ1
//}
//
//bool search(string &url)
//{
//	int i = 0, j = 0;
//	for (auto ch : url)
//	{
//		j = ch - 'a';
//		if (!teri[i][j])
//			return false;
//		i = teri[i][j];
//	}
//	return color[i] == 1;
//}
//
//int main()
//{
//	//vector<string> svec = {"\a\b\c", "\b\c\d", "\b\c", "\a\c", "\c\d"};
//	vector<string> svec = { "abc", "abd", "tel", "bcd", "bdf" };
//	for (auto url : svec)
//	{
//		insert(url);
//	}
//	string url;
//	while (cin >> url)
//	{
//		if (url == "q") break;
//		cout << search(url) << endl;
//	}
//	return 0;
//}