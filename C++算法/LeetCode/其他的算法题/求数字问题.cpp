//#include<iostream>
//#define N 12
//using namespace std;
////将n分为hight, cur, low三部分
////cur表示当前位，high表示前面几位，low表示后面几位，还有一个digit表示cur当前的位因子
////eg:cur当前是10位时，digit = 10
////cur的值=0时，此时10位1的出现次数 = high x digit;
////cur的值=1时，此时10位1的出现次数 = high x digit + low +1
////cur = 2, 3,..., 9cur=2,3,⋯,9 时,此时10位1的出现次数 = (high+1)xdigit
//
//class Solution {
//public:
//	int countDigitOne(int n) {
//		int res = 0; //保存结果
//		//初始化,cur从个位开始
//		high = n / 10; cur = n % 10; low = 0;
//		digit = 1;
//		//当 high 和 cur 同时为 0 时，说明已经越过最高位，因此跳出
//		while (high || cur) {
//			if (cur == 0) res += high * digit;
//			else if (cur == 1) res += high * digit + low + 1;
//			else res += (high + 1)*digit;
//			low = cur * digit + low;
//			cur = high % 10;
//			high /= 10;
//			digit *= 10;
//		}
//		return res;
//	}
//private:
//	int high, cur, low;
//	int digit;
//};
//
//int main() {
//	Solution S;
//	int n;
//	cin >> n;
//	cout << S.countDigitOne(n) << endl;
//	return 0;
//}