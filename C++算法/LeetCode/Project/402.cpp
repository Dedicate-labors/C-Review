//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//using namespace std;
//
////�ٷ��ⷨ��ʹ�õ���ջ����Ϊ���Ƴ�k������֮�����С����(�����Ǹ�����)��Ҫ�������˳��
////vector<int> stack(nums.size() - k); d = 0,(d < k) stack.push(nums[0]) , ��1��ʼ��������
////��x >= stack.top() ���䣬�� x < stack.top() ��stack�е������˻ص� stack.top() <= x��״̬��ÿ�������ֵ�ʱ�� d++
////��d >= k ʱ �˳������һ��d����꣬�Ǿͱ�֤stack�Ĵ�С��nums.size() - k
////���Լ��ĽⷨҲʮ�־���
//
//class Solution {
//public:
//	//num�Ƴ�kλ���֣�ʹ��num�����С����Ŀ�ƶ�kλ�����kλ
//	//n = len - k;
//	//��nλ�����е�ÿһλ��num��Ѱ�ң���Ҫ��֤nλ���ֵ����˳��
//	//��nλ������С
//	//ÿһλ���Ƕ�Ӧ��Χ��ֵ��С�ģ�����һλ����ֵͬʱ
//	//��ͬλ�����±�ԽСԽǿ��������ͬλʱ�����ǿ��Կ�����ʵ���ְ���״̬
//	string removeKdigits(string num, int k) {
//		int len = num.size(), n = len - k; //����nλ
//		if (n == 0) return "0";
//		//��̬�滮
//		//��ʼ��, 0, k, n, len���Ǻ���Ҫ��
//		string subNum = num.substr(k,n);
//		int top = 0, min, minPos; //��ǰλ�ķⶥ
//		int j = 0;
//		for (k; k < len; ++k) {
//			//Ҫ��������ֻ�ܴ��ҵ��󣬱�֤������±꾡����С
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
//		//ע�⻹Ҫ�����Ľ������
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