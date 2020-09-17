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
//		s 可能为空，且只包含从 a - z 的小写字母。
//		p 可能为空，且只包含从 a - z 的小写字母，以及字符.和 *。
//		*/
//		int lenS = s.length(), lenP = p.length(), i = 0;
//		if (lenS == 0 && lenP == 0) return true;
//		if (lenS == 0 || lenP == 0) return false;
//		//确保下面的s,p都还有字符串
//		//下面是只有一个字符的时候
//		if (lenS == 1 || lenP == 1) {
//			if (lenS > 1) return false; //n:1的时候
//			//1:1
//			if (lenS == 1 && lenP == 1) return findStr(p, s[0]);
//		}
//
//		//m:n或者1:n时
//		for (i = 0; i < lenS; ++i) {
//			if (!findStr(p, s[i])) return false;
//		}
//		//匹配完后，检查下p,
//		//能消除p
//		if (isDeleteStr(p)) return true;
//		//p是不能消除的话，可能因为贪心匹配还是可能return true；
//		//a aa*a --> a a*a 就是false; aa a*a-> a a*a 就是true;总之只有发生贪心匹配且后面还能跟上的才是true
//		lenP = p.length();
//		string temp; //p的部分副本
//		if (pdTx) {
//			//发生贪心必是类似a*开头的以上字符串
//			temp = p.substr(0, lenP - 1);//  p是除开最后一位的字符串
//			if (isDeleteStr(temp) && s[i - 1] == p[lenP - 1]) return true;
//			else return false;
//		}
//		else
//			//没发生贪心，p还剩下就直接false
//			return false;
//	}
//private:
//	bool findStr(string & str, char &ch); //s从p中寻找满足==的字符条件，再把之后的p字符串改变。 1:n的情况:ch是s中的字符，str代表p字符串
//	bool isDeleteStr(string & str); //判断对应的str是否可以消除成"", 用于p字符串。如：a*b*c*等字符串和*混合或者空字符串的情况
//	bool pdTx = false; //判断是否用过贪心
//};
//
//bool Solution::findStr(string &str, char &ch) {
//	//str代表p的某一段，ch代表s中的某个字符
//	//仅找到对应匹配的ch就ok了,记住*的影响，除了删除还有复制
//	//str的改变很关键假如ch == p中的首个t字符了：
//	//ch1 == t,t字符后面可能是*，字符，.,空
//	//除了后面是*外，其他情况都要把p删除掉
//	int pos = 0, len = str.length();
//	string temp; //str的部分副本
//	for (pos = 0; pos < len; ++pos) {
//		if (str[pos] == ch || str[pos] == '.') {
//			//代表肯定有对应的
//			//查看此时pos位置
//			temp = str.substr(0, pos);
//			if (isDeleteStr(temp)) {
//				//没有下一位了
//				if (pos + 1 == len) { str = ""; pdTx = false; return true;}//这个直接代表匹配成功吧 ？？？
//				//还有下一位
//				if (str[pos + 1] != '*') { str = str.substr(pos + 1, len - pos - 1); pdTx = false; }//删除掉它
//				else { str = str.substr(pos, len - pos); pdTx = true; }//保证继续含有它
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
//	//str为空
//	if (str == "") return true;
//	//str全是字符或者含有*，全是字符就直接返回false
//	//算出*和a-z字符的数目比
//	//int x = 0, alpha = 0;//前者是*的数目，后者是alpha的数目
//	bool flag = true;
//	for (auto ch : str) {
//		if (flag && (isalpha(ch)|| ch == '.')) flag = false; //加入'.'是为了简便后面的判断
//		else if (!flag && ch == '*') flag = true;
//		else
//			return false; //不能消除
//	}
//	if (!flag) return false;
//	return true;
//}


/*
下面的解放是动态匹配：一位一位匹配自下往上推到出所有结果。
dp[i][j] 的bool数组表示s的前i位和p的前j位是否相等，最好将他默认初始化false
s[i] == p[j] dp[i][j] = dp[i-1][j-1]; s[i]和p[j]字符相等，所以去掉它们也可以，直接dp[i][j] = dp[i-1][j-1]
s[i] != p[j] 假如此时p[j]还不是*，而是字符，所以不做处理(dp默认初始化false)
当p[j] == '*'时：
s[i] != p[j-1] dp[i][j] = dp[i][j-2] 既然s[i]和p[j-1]不相等，*可以表示0个，所以直接去掉得dp[i][j] = dp[i][j-2]
最后是最复杂的s[i] == p[j-1]
dp[i][j] == dp[i-1][j]  (###b ###b*)->(### ###b*)去掉b的情况 s的b多位时的情况
or dp[i][j] == dp[i][j-1] (###b ###b*)->(###b ###b)去掉*的情况， 就是再无*加持的情况下
or dp[i][j] == dp[i][j-2] (###b ###b*)->(###b ###)去掉b*的情况， b*因为*的缘故也的确可以无效化
*/
//class Solution {
//public:
//	bool isMatch(string s, string p) {
//		s = " " + s;//防止该案例：""\n"c*"
//		p = " " + p;
//		int m = s.size(), n = p.size();
//		//s,p还是当作直接用于匹配的字符串
//		vector<vector<bool>> dp(m+1, vector<bool>(n+1, false));
//		//bool dp[m + 1][n + 1];
//		//memset(dp, false, (m + 1)*(n + 1));
//		//dp的区域相比题解，是点不标准但正确的用法
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