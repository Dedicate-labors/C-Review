#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
//1233��

int teri[100][26] = { 0 }; //ȫ����ʼ��Ϊ0
int color[100] = { 0 };//�����ɫ
int k = 1;//�ڵ�λ�� �����±ߵ�i
using namespace std;

void insert(string &url)//��������ֵ���
{	
	int i = 0, j = 0;//iһ��ʼ��0�Žڵ�Ҳ���Ǹ��ڵ㣬 j������ȷ����ݵ�
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
	color[i] = 1; //�����������ô�����ĩβ�Ľڵ�Ϊ1
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

//������
vector<string> Url_qc(vector<string> &svec)
{
	string str = "\\"; //ת���ַ��൱��һ��'\'
	vector<string> * res = new vector<string>;
	sort(svec.begin(), svec.end());//���䰴�ֵ�˳������
	/*stable_sort(svec.begin(), svec.end(), [](const string &s1, const string &s2) {return s1.size() < s2.size(); });*/
	for (auto url : svec)
	{
		if(url != "/")
		if (url.compare(0, str.size(), str)==0 || url.compare(0, url.size(), str)==0) //���ظ���
		{
			if (str == "/")
			{
				res->push_back(url);
				str = url;
			}
			else if (str.size() < url.size())
				*(res->end()-1) = str;
		}
		else //���ظ���
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
	vector<string> svec = {"/a/b/c","/a/b/ca","/a/b/d"};  //���������
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
	//��������OKһ�� ���ܳ�ʱ
	//for_each(svec.begin(), svec.end(), [](const string &s) {cout << s << endl; });
	vector<string> temp = Url_qc(svec);
	for (auto k : temp)
	{
		cout << k << endl;
	}
	return 0;
}