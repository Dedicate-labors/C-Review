//#include<vector>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
////��д���Ǳ����ⷨ
////�����������棬ʹ�ù�ϣ��ά��һ��i-j�Ľ�����ڲ������������ͬ�ľͿ���ֱ�ӷ���
////�����������棬һ��ѭ���н�i = 0��jΪ�����±���ۼӺʹ洢��һά������,ʹ�õ�ʱ��sum[j+1] - sum[i];
//class NumArray {
//public:
//	NumArray(vector<int>& nums) {
//		//temp = nums;
//		temp = make_shared<vector<int>>(nums.size()+1, 0);
//		for (int i = 0; i < nums.size(); ++i) {
//			(*temp)[i + 1] = (*temp)[i] + nums[i];
//		}
//	}
//
//	int sumRange(int i, int j) {
//		return (*temp)[j + 1] - (*temp)[i];
//	}
//private:
//	shared_ptr<vector<int>> temp;
//};
//
//
//int main() {
//	vector<int> nums;
//	NumArray* obj = new NumArray(nums);
//	int i, j;
//	int param_1 = obj->sumRange(i, j);
//	return 0;
//}