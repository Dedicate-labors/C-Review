//#include<iostream>
//#include<vector>
//#include<map>
//#include<algorithm>
//#include<unordered_map>
//#include<queue>
//using namespace std;
//
//class Solution {
//public:
//	////����1���ֳ����������鲻���ظ�����Ҫ��������������ջ�ҳ���>=3
//	////������1�õ�ÿ���ظ��������Ƕ�����������������ҳ�������Ϊ 3
//	////��numsת��Ϊmap(int ,int) key��Ԫ�أ�value��Ԫ�ش���
//	////maxH (����ظ�������Ҳ�Ƚ���������)������H���飬����maxH��Ԫ�أ�����ÿ�е�����Ԫ�ظ���
//	////��Ԫ�ش������ٱ�࣬�����ף�����Ԫ�ش����ɶ���٣���ΪҪ������Ҫ�󣬱�Ȼ��ϵ�ĳЩ�У����ٵ�Ԫ�طָ�����Ԫ�ظ����������������
//	////�Ա��˵��У��ڼ����󣬱�Ϊ0,�ƶ�������棬��֤H�ǽ���
//	////����Աջ���������ֵ��������ʱ�� --------������û����Ԫ�ر����ֵ
//	//bool isPossible(vector<int>& nums) {
//	//	int num = nums[0];
//	//	for (int j = 1; j < nums.size(); ++j) {
//	//		//nums[j] ��� num ֻ�����0����1
//	//		int d = nums[j] - num;
//	//		if (d != 0 && d != 1) return false;
//	//		num = nums[j];
//	//	}
//	//	//�����mapNums������������
//	//	map<int, int> mapNums;
//	//	for (int i = 0; i < nums.size(); ++i) {
//	//		mapNums[nums[i]]++;
//	//	}
//	//	int maxH = 0;
//	//	for (auto &it : mapNums) {
//	//		if (it.second > maxH) maxH = it.second;
//	//	}
//	//	vector<int> H(maxH, 0);
//
//	//	int pre = 0; //��ʾǰһ�����Ĵ���
//	//	for (auto &it : mapNums) {
//	//		if (pre <= it.second) {
//	//			for (int i = 0, j = 0; i < maxH && j < it.second; ++i) {
//	//					H[i]++; j++; //j��ʾװ���Ԫ�ظ���
//	//			}
//	//		}
//	//		else
//	//		{
//	//			int i,j;
//	//			vector<int> temp(it.second);
//	//			for (i = maxH - 1, j = 0; i < maxH && j < it.second; --i) {
//	//				if (H[i] != 0) {
//	//					H[i]++;
//	//					temp[j++] = H[i];
//	//				}
//	//			}
//	//			for (; i >= 0; --i) {
//	//				//��鲢����
//	//				if (H[i] < 3) return false;
//	//				H[i] = 0;
//	//			}
//	//			//�ƶ�����,������tempת��H�У�
//	//			for (i = 0; i < maxH ; ++i) {
//	//				if (i < it.second) H[i] = temp[--j];
//	//				else H[i] = 0;
//	//			}
//	//		}
//	//		pre = it.second;
//	//		//sort(H.begin(), H.end());//û��Ҫȥ����ɡ���
//	//	}
//	//	//���һ�μ��H
//	//	for (int i = 0; i < maxH; ++i) {
//	//		if (H[i] < 3 && H[i] > 0) return false;
//	//	}
//	//	return true;
//	//}
//	//�ⷨ1������ÿ��Ԫ����Ϊ�����еĽ�βԪ�أ�value���Ը�key��Ϊ��β�������г���
//	//����nums(nums����)�� ������x��ȥ�鿴�Ƿ���x-1��β�������У��о�ѡ�������г�����̵Ľ��ϣ�ͬʱx-1��β��Ϊx��β
//	//û��x-1��β�ľʹ����µ�x��β�����У�����Ϊ1
//	bool isPossible(vector<int>& nums) {
//		unordered_map<int, priority_queue<int, vector<int>, greater<int>>> mp;
//		for (auto &x : nums) {
//			if (mp.find(x) == mp.end()) {
//				mp[x] = priority_queue<int, vector<int>, greater<int>>();
//			}
//			if (mp.find(x - 1) != mp.end()) {
//				int prevLength = mp[x - 1].top();  //�õ���������г���
//				mp[x - 1].pop();
//				//û���������ˣ���ɾ����mp[x-1]
//				if (mp[x - 1].empty()) {
//					mp.erase(x-1);
//				}
//				mp[x].push(prevLength+1);
//			}
//			else {
//				//�����µ�x��β��������
//				mp[x].push(1);
//			}
//		}
//		//����mp���õ���ȷ���
//		for (auto it = mp.begin(); it != mp.end(); ++it) {
//			priority_queue<int, vector<int>, greater<int>> queue = it->second;
//			if (queue.top() < 3) {
//				return false;
//			}
//		}
//		return true;
//	}
//	//�ⷨ2��̰�ġ�
//	bool isPossible2(vector<int>& nums) {
//		unordered_map<int, int> countMap; //����map
//		unordered_map<int, int> endMap; //��Ϊkey��β�������и���value��������Ԫ�ظ�����������>=3Ҫ���
//		for (auto& x : nums) {
//			int count = countMap[x] + 1;
//			countMap[x] = count;
//		}
//		//�˴�û�б���countMap���Ǳ���nums�����������ˣ�6p
//		for (auto& x : nums) {
//			int count = countMap[x];
//			if (count > 0) {
//				int prevEndCount = endMap[x - 1]; //endMap�оͷ��أ��޾ʹ���������0
//				if (prevEndCount > 0) {
//					//��������һ�������У��������н�β�ı䣬����endMap[x-1]����
//					//endMap[x]���
//					//countMap[x] ����
//					countMap[x] = count - 1;
//					endMap[x - 1] = prevEndCount - 1;
//					endMap[x] = endMap[x] + 1;
//				}
//				else {
//					//���x-1û�У����Ծ���x��ʼ�������ҵ�x+1,x+2,��������Ϊһ��������
//					int count1 = countMap[x + 1];
//					int count2 = countMap[x + 2];
//					if (count1 > 0 && count2 > 0) {
//						countMap[x] = count - 1;
//						countMap[x + 1] = count1 - 1;
//						countMap[x + 2] = count2 - 1;
//						endMap[x + 2] = endMap[x + 2] + 1;
//					}
//					else {
//						return false;
//					}
//				}
//			}
//		}
//		//������Է���nums����return true
//		return true;
//	}
//};
//
//int main()
//{
//	Solution S;
//	vector<int> nums{1,2,3,3,3,4,4,5,5,5,6,6,6,7};
//	S.isPossible(nums);
//	return 0;
//}