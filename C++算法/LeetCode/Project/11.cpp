//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
///*
//��Ҫ �����ƶ� �Ŀ��� ˫ָ������
//����󣬻�����ѧ�Ƶ�Ҫ��
//*/
//class Solution {
//public:
//	//����ı����ƽ����׳���ʱ������
//	int maxArea(vector<int>& height) {
//		int n = height.size(); //n >= 2
//		//�����������������
//		int max = 0, b = 0,a = 0; //����ö�ٷ�
//		int maxNow = 0;
//		//������ϰ��
//		for(int i = 0; i < n; ++i)
//			for (int j = i+1; j < n; ++j) {
//				b = height[i] > height[j] ? height[j] : height[i];
//				a = j - i;
//				maxNow = a * b;
//				if (maxNow > max) max = maxNow;
//			}
//		return max;
//	}
//
//	int maxArea2(vector<int>& height) {
//		int h = 0, d = 0, n = height.size(); //�ֱ��Ǹ�h����d��n��Ŀ
//		int maxNow = 0, max = 0;
//		//d�̶���h��
//		for (int d = n - 1; d >= 1; --d) {
//			//dȷ����
//			for (int i = 0; i + d < n; ++i) {
//				h = height[i] > height[i+d] ? height[i+d] : height[i];
//				maxNow = h * d;
//				if (maxNow > max) max = maxNow;
//			}
//		}
//		return max;
//	}
//
//	//����˫ָ��+��ѧ�Ƶ����
//	int maxArea3(vector<int>& height) {
//		int h = 0, d = 0, n = height.size(); //�ֱ��Ǹ�h����d��n��Ŀ
//		int maxNow = 0, max = 0;
//		for (int i = 0, j = n - 1; i != j;) {
//			//���±����˫ָ��
//			d = j - i;
//			h = height[i] > height[i + d] ? height[i + d] : height[i];
//			maxNow = d * h;
//
//			if (maxNow > max) max = maxNow;
//	
//			//�����ƶ���С���Ǳ�
//			if (height[i] > height[j]) --j;
//			else ++i;
//		}
//		return max;
//	}
//};
//
//int main() {
//	Solution S;
//	int b;
//	vector<int> height;
//	while (true) {
//		while (cin >> b) {
//			height.push_back(b);
//		}
//		cout << S.maxArea3(height) << endl;
//		break;
//	}
//	return 0;
//}