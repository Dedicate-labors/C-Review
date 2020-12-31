//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//using namespace std;
//
////官方解法：使用单调栈：因为求移除k个数字之后的最小数字(尽量是个升序)，要保持相对顺序
////vector<int> stack(nums.size() - k); d = 0,(d < k) stack.push(nums[0]) , 从1开始遍历数组
////当x >= stack.top() 不变，当 x < stack.top() 将stack中的数字退回到 stack.top() <= x的状态，每次退数字的时候 d++
////当d >= k 时 退出。如果一个d不达标，那就保证stack的大小是nums.size() - k
////我自己的解法也十分精彩
//
//class Solution {
//public:
//	//num移除k位数字，使得num变得最小，题目移动k位是随机k位
//	//n = len - k;
//	//对n位数字中的每一位从num中寻找，但要保证n位数字的相对顺序
//	//且n位数字最小
//	//每一位都是对应范围内值最小的，当有一位有相同值时
//	//相同位所在下标越小越强，当有相同位时，他们可以看作其实是种包含状态
//	string removeKdigits(string num, int k) {
//		int len = num.size(), n = len - k; //余下n位
//		if (n == 0) return "0";
//		//动态规划
//		//初始化, 0, k, n, len都是很重要的
//		string subNum = num.substr(k,n);
//		int top = 0, min, minPos; //当前位的封顶
//		int j = 0;
//		for (k; k < len; ++k) {
//			//要遍历完且只能从右到左，保证结果的下标尽量的小
//			min = num[k] - '0';
//			for (int i = k; i >= top; --i) {
//				if (num[i] - '0' <= min) {
//					min = num[i] - '0';
//					minPos = i;
//				}
//			}
//			subNum[j++] = min + '0';
//			top = minPos + 1;
//		}
//		//注意还要对最后的结果化简
//		string ret;
//		int z, l = subNum.length();
//		for (z = 0; z < l; ++z) {
//			if (subNum[z] != '0') {
//				break;
//			}
//		}
//		l = l - z;
//		if (l == 0) return "0";
//		ret = subNum.substr(z, l);
//		return ret;
//	}
//};
//
//int main()
//{
//	Solution S;
//	string str = "10";
//	S.removeKdigits(str, 1);
//	return 0;
//}