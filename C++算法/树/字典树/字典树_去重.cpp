#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
//1233题

int teri[100][26] = { 0 }; //全部初始化为0
int color[100] = { 0 };//标记颜色
int k = 1;//节点位置 包括下边的i
using namespace std;

void insert(string &url)//创建相关字典树
{	
	int i = 0, j = 0;//i一开始是0号节点也就是根节点， j更像是确定身份的
	for (auto ch : url)
	{
		j = ch - 'a';
		if (!teri[i][j])
		{
			teri[i][j] = k;
			k++;
		}
		i = teri[i][j];
	}
	color[i] = 1; //如果结束，那么标记最末尾的节点为1
}

bool search(string &url)
{
	int i = 0, j = 0;
	for (auto ch : url)
	{
		j = ch - 'a';
		if(!teri[i][j])
			return false;
		i = teri[i][j];
	}
	return color[i] == 1;
}

//方法二
vector<string> Url_qc(vector<string> &svec)
{
	string str = "\\"; //转义字符相当于一个'\'
	vector<string> * res = new vector<string>;
	sort(svec.begin(), svec.end());//将其按字典顺序排序
	/*stable_sort(svec.begin(), svec.end(), [](const string &s1, const string &s2) {return s1.size() < s2.size(); });*/
	for (auto url : svec)
	{
		if(url != "/")
		if (url.compare(0, str.size(), str)==0 || url.compare(0, url.size(), str)==0) //有重复的
		{
			if (str == "/")
			{
				res->push_back(url);
				str = url;
			}
			else if (str.size() < url.size())
				*(res->end()-1) = str;
		}
		else //无重复的
		{
			res->push_back(url);
			str = url;
		}
	}
	return (*res);
}

int main()
{
	//vector<string> svec = { "\\a\\b\\c", "\\b\\c\\d", "\\b\\c", "\\a\\c", "\\c\\d", "\\a", "\\" };
	vector<string> svec = {"/a/b/c","/a/b/ca","/a/b/d"};  //过不了这个
	//vector<string> svec = {"abc", "abd", "tel", "bcd", "bdf"};
	//for (auto url : svec)
	//{
	//	insert(url);
	//}
	//string url;
	//while (cin >> url)
	//{
	//	if (url == "q") break;
	//	cout << search(url) << endl;
	//}
	//方法二：OK一半 可能超时
	//for_each(svec.begin(), svec.end(), [](const string &s) {cout << s << endl; });
	vector<string> temp = Url_qc(svec);
	for (auto k : temp)
	{
		cout << k << endl;
	}
	return 0;
}