//#include<iostream>
//#include<vector>
//using namespace std;
//
////����˼·��һ�ְ���ν��б�������ͬ����˹���飬������������ܶ࣬O(n*m)�� ����ջ��
////�ҳ���ߵ����ӣ���Ϊ�������������ÿһ��ֻ��ÿ�������ܷ��ˮ
////��������ÿ�����ӣ�����Ѱ�ң�ÿ�����ӵ������ߺ��б���ߣ����߼�ϵ͵�Ϊh��h-���ڵ�ǰ���ӵĸ߶ȼ�
////Ϊ��������������ˮ
//
////����������һ�α����ҵ���ߵ����ӣ���������벿�֣�Ѱ�ҵ�һ��ɽ�壻�������Ұ벿�֣�����Ѱ�ҵ�һ��ɽ��(���������Ϊ�Գ���)
////���ߵĴӵ�һ��ɽ�忪ʼ��Ѱ����һ�� �߶� >= ��һ��ɽ���(�м�һ���Ǽ������)�����ߵľ������ - ��������
////����Ѱ�ҵ�һ��ɽ�壬����Ѱ��һ�� �߶� >= ��һ��ɽ���(�м�һ���Ǽ������)��ֱ����һ��ɽ�����������
////���ߺ������ǶԳƵģ�˼·һ��
////
////ΪʲôҪ���ҵ���ߵ����ӣ��ֳ��߼��ԳƵ������֣�������ҵ�������ӽ���ֳ������֣�
////��ĳ��ˮ�ӵ��ұ���������ӵ�ʱ����һ��ˮ�ӵ�Ѱ�Ҿ�ʮ�����ѣ���Ϊ��һ��ˮ���������ߵ����ӣ��ұ�ȴҪѰ�ұ��м�������Ӷ�Ҫ�ߵ�
////�������ߣ���һ�Ǹ�W��״,�ͺ���ȷ���ұ���˭��
//
////���ҵ�������Ӻ������ֵ�Ѱ�Ҷ����Կ���ȷ����ˮ�ӵͱߣ�Ѱ�Ҹ߱ߡ������ֳ������֣�ȷ��������ݣ���֪����һ�߸�Ѱ�Ҹ߱߻��ǵͱ�
////(��һ�����ҵ��߱߻���˵��ֻ���Ҳ����߱ߣ�Ѱ�ҵͱ߾ͺ��鷳)
//
//class Solution {
//public:
//	//���÷�����
//	int trap(vector<int>& height) {
//		int len = height.size(), maxH = 0, j = 0;
//		int V = 0;//�ۼƵ�ˮ��
//		for (int i = 0; i < len; ++i) {
//			if (height[i] > maxH) {
//				maxH = height[i];
//				j = i;
//			}
//		}
//
//		//�ֳ�������
//		//�󲿷�
//		int left = 0, right = len - 1;
//		while (left < j) {
//			left = retLeftHeight(left, height);
//			if (left >= j) break;
//			int r = left+1;
//			while (height[left] > height[r])
//			{
//				r++;
//			}
//			//�˳���ʱ��height[r] >= height[left];
//			//����ˮ��
//			V += (height[left] * (r - left - 1) - retVolume(left, r, height));
//			left = r;
//		}
//
//		while (right > j) {
//			right = retRightHeight(right, height);
//			if (right <= j) break;
//			int l = right - 1;
//			while (height[right] > height[l])
//			{
//				l--;
//			}
//			//�˳���ʱ��height[l] >= height[right];
//			//����ˮ��
//			V += (height[right] * (right - l - 1) - retVolume(l, right, height));
//			right = l;
//		}
//		return V;
//	}
//
//	//Ѱ����ߵ�һ��ɽ��
//	int retLeftHeight(int pos, vector<int> &height) {
//		int next = pos + 1;
//		while (next < height.size() && height[next] >= height[pos]) {
//			pos++;
//			next++;
//		}
//		return pos;
//	}
//
//	//Ѱ���ұߵ�һ��ɽ��
//	int retRightHeight(int pos, vector<int> &height) {
//		int next = pos - 1;
//		while (next >= 0 && height[next] >= height[pos]) {
//			pos--;
//			next--;
//		}
//		return pos;
//	}
//
//	//����begin��end����������ܹ�ռ�����
//	int retVolume(int &begin, int &end, vector<int> &height) {
//		int S = 0;
//		for (int i = begin + 1; i < end; ++i) {
//			S += height[i];
//		}
//		return S;
//	}
//
//	//�������������棺������������˫ָ�뷨
//	//ʵ��left = 0�� right = size - 1;
//	//ѡ������һ�ݽϸߵ���Ϊ�������(height[right]����height[left])��Ѱ�ҵڶ���(�ֲ�)(leftmax����rightmax)
//	//Ѱ���ans = leftmax or rightmax - curheight;
//	int trap3(vector<int> & height) 
//	{
//		int left = 0, right = height.size() - 1;
//		int ans = 0;
//		int left_max = 0, right_max = 0;
//		while (left < right) {
//			if (height[left] < height[right]) {
//				//�ұ߽ϸߣ��������˶��׵���ߣ����ܷ���Ѱ��leftmax�ڶ���
//				height[left] >= left_max ? (left_max = height[left]) : ans += (left_max - height[left]);
//				++left;
//			}
//			else {
//				//��߽ϸߣ��������˶��׵���ߣ����ܷ���Ѱ��rightmax�ڶ���
//				height[right] >= right_max ? (right_max = height[right]) : ans += (right_max - height[right]);
//				--right;
//			}
//		}
//	}
//};
//
//int main() {
//	vector<int> height{1000,999,998,997,996,995,994,993,992,991,990,989,988,987,986,985,984,983,982,981,980,979,978,977,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966,966};
//	Solution S;
//	cout << S.trap(height) << endl;
//	return 0;
//}