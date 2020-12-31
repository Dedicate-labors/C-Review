//#include<iostream>
//#include<vector>
//#include<string>
////5231题
//
//int teri[100][26] = { 0 }; //全部初始化为0
//int color[100] = { 0 };//标记颜色
//int k = 1;//节点位置 包括下边的i
//using namespace std;
//
//void insert(string &url)//创建相关字典树
//{
//	int i = 0, j = 0;//i一开始是0号节点也就是根节点， j更像是确定身份的
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
//	color[i] = 1; //如果结束，那么标记最末尾的节点为1
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