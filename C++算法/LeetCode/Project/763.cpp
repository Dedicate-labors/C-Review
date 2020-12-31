//#include<vector>
//#include<map>
//#include<set>
//#include<string>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	//求解方法：计算每个字符的start位置和end位置
//	//根据start和end位置判断一个段该是多长
//	vector<int> partitionLabels(string S) {
//		map<char, int[2]> histoy; //不能使用map，自己建造数据结构
//		if (S == "") return vector<int>{0};
//		vector<char> vec; //记录每个字符，且保留顺序不重复
//		for (int pos = 0; pos < S.length(); pos++) {
//			if (histoy[S[pos]][0] == 0) //[0]下标这只初始化一次
//			{
//				histoy[S[pos]][0] = pos == 0 ? -1 : pos;
//				vec.push_back(S[pos]);
//			}
//			histoy[S[pos]][1] = pos;
//		}
//		//注意上面-1的特殊性，避免首字符无法录入end下标
//		//现在修改回来
//		histoy[S[0]][0] = 0;
//		//得到每个字符的start和end
//	
//		//通过vec保留的顺序进行计算，保证每个字符的start是递增的
//		//如果a字符的start和end完全嵌入在b字符的start和end范围中，就依旧以b的范围
//		//如果a字符的start和end不完全嵌入在b字符的start和end范围中，更新范围
//		//如果两者范围互不干扰，得到前者片段范围，后端开始
//		int start=0, end=histoy[vec[0]][1];
//		vector<int> ret;
//		int i, j;
//		for (auto &ch : vec) {
//			i = histoy[ch][0], j = histoy[ch][1];
//			cout << ch << ": " << i << ' ' << j << endl;
//			if (start <= i && end >= j) {
//				//不变，跳过
//				continue;
//			}
//			else if (end < i) {
//				//一个片段结果
//				ret.push_back(end-start+1);
//				start = i;
//				end = j;
//			}
//			else {
//				//不完全重叠
//				start = i > start ? start : i;
//				end = j > end ? j : end;
//			}
//		}
//		//因为最后一次怎么也不会含有(end < histoy[ch].second[0])该条件，所以自己push
//		ret.push_back(end - start + 1);
//		return ret;
//	}
//
//	//方法二：贪心算法 + 双指针
//	//1. 得到每个字母最后一次出现的下标位置
//	//设置片段的下标出现和结束位置start和end
//	//设置字母的下标出现和结束位置startC和endC
//	//2. 每个片段一定包含字母的最后一次出现下标
//	//3. 使用贪心的思想寻找每个片段可能的最小结束下标
//	vector<int> partitionLabels2(string S) {
//		int last[26]; //记录每个字母的最后一次出现下标
//		int len = S.length();
//		//下面是个骚操作，可以学习下
//		for (int i = 0; i < len; ++i) {
//			last[S[i] - 'a'] = i;
//		}
//		vector<int> partition;
//		int start = 0, end = 0; //这是片段的start和end
//		for (int i = 0; i < len; ++i) {
//			//这一句是精华
//			end = max(end, last[S[i] - 'a']);
//			if (i == end) {
//				partition.push_back(end-start+1);
//				start = end + 1;
//			}
//		}
//		return partition;
//	}
//};
//
//int main() {
//	Solution S;
//	string s;
//	vector<int> ret;
//	cin >> s;
//	ret = S.partitionLabels2(s);
//	for (auto it : ret)
//		cout << it << ' ';
//	return 0;
//}