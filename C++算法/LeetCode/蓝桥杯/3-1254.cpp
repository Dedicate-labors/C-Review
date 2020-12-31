//#include<cstdio>
//#include<vector>
//#include<algorithm>
//#include<string>
//#include<iostream>
//
//using namespace std;
//
//static int ans = 0;
//
//int func() {
//	vector<string> v;
//	int sum = 0;
//	string str = "aaabbbbccccc";
//	do {
//		vector<string>::iterator it;
//		for (it = v.begin(); it != v.end(); ++it) {
//			//当寻找失败返回string::npos 值为4294967295
//			//找到就break
//			if ((*it).find(str, 0) != string::npos) {
//				break;
//			}
//		}
//		if (it != v.end()) continue;
//		//下面的是it == v.end()  但当是最后一个it寻找到时了?不会发生这个情况，因为it退出时，没有++，所以it != v.end()
//		string str2 = str + str;  //可以任意转动的缘故
//		v.push_back(str2);
//		reverse(str2.begin(), str2.end()); //可以任意翻转的缘故
//		v.push_back(str2);
//		sum++;
//	} while (next_permutation(str.begin(), str.end()));
//	return sum;
//}
//
//int main() {
//	printf("%d\n", func());
//	return 0;
//}