//#include<iostream>
//#include<vector>
//#include<string>
//#include<cstdio>
//using namespace std;
//
////��Ŀ��N�ǷǸ���������<=N���������Ҹ�����ÿ����λx��y���� x<=y
//
////�ⷨ��(N����2λ��ʼ)ǰһλ��ʾx����һλ��ʾy����N�����λ��ʼ����
////����x <= y ��ֱ��return���������x > y , x->x-1, ����y���ں��涼��9���������Ǳ������ĵ�һ��x > y
////��ô����x���ڵ�ǰ�沿�ֶ�Ҫ��������¡�
//
////��ǰ���0���ַ���ת��λ���֣��������ַ����ҵ���һ������Ϊֹ
//
//class Solution {
//public:
//	int monotoneIncreasingDigits(int N) {
//		if (N < 10) return N;
//		//�ж�N������
//		string str = to_string(N);
//		char left = str[0], right, len = str.size();
//		for (int i = 1; i < len; ++i) {
//			right = str[i];
//			if (left > right) {
//				//�޸Ŀ�ʼ,��i��ʼȫ��Ϊ9��iǰ�沿�ָĳ�����
//				str = change(str, i, len - 1);
//				return convert(str);
//			}
//			left = right;
//		}
//		return N;
//	}
//
//	string change(string str, int i, int end) {
//		//�ȸ�ǰ�沿��y = (str[i-1]-1),����i-1���ű�����0
//		//y >= x,���Բ��ϸ�ĸ�Ϊx = y;
//		char y = str[i - 1] - 1,x;
//		str[i - 1] = y;
//
//		for (int j = i - 2; j >= 0; --j) {
//			x = str[j];
//			if (x > y) {
//				y = '9';
//				x -= 1;
//				str[j] = x;
//				str[j + 1] = y;
//			}
//			y = x;
//		}
//		for (int j = i; j <= end; ++j) {
//			str[j] = '9';
//		}
//		return str;
//	}
//
//	int convert(string &str) {
//		int i;
//		for (i = 0; i < str.size(); ++i) {
//			if (str[i] != '0') break;
//		}
//		//��ʱ��i��ס
//		return stoi(str.substr(i, str.size() - i));
//	}
//};
//
//int main()
//{
//	char c = '1', b = '5';
//	char a = b - 1;
//	printf_s("%c, %c\n", a, b);
//	return 0;
//}