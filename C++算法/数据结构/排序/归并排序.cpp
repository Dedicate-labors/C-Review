//#include<iostream>
//#include<cstdlib>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
///*
//�鲢�����Ĺ������£�
//	(1) ����ռ䣬ʹ���СΪ�����Ѿ���������֮�ͣ��ÿռ�������źϲ��������
//	(2) �趨����ָ�룬���λ�÷ֱ�Ϊ�����Ѿ��������е���ʼλ��
//	(3) �Ƚ�����ָ����ָ���Ԫ�أ�ѡ�����С��Ԫ�ط��뵽�ϲ��ռ䣬���ƶ�ָ�뵽��һλ��
//	(4) �ظ�����3ֱ��ĳһָ�뵽������β
//	(5) ����һ����ʣ�µ�����Ԫ��ֱ�Ӹ���(��)���ϲ�����β
//�򵥵�˵�����ǽ�һ�����в��ϵĽ��ж��֣���ȻҲ�������֡���֣����ѣ�Ȼ��ݹ���ȥ���ٺϲ���
//*/
//
//void mergeAdd(vector<int> &arr, int left, int mid, int right, vector<int> &temp)//ʵ�֡��Ρ�
//{
//	int i = left;
//	int j = mid + 1;
//	int k = left;//��ʱ�±�
//	while (i <= mid && j <= right) {
//		if (arr[i] < arr[j]) {
//			temp[k++] = arr[i++];
//		}
//		else {
//			temp[k++] = arr[j++];
//		}
//	}
//	while (i <= mid)
//	{
//		temp[k++] = arr[i++];
//
//	}
//	while (j <= right) {
//		temp[k++] = arr[j++];
//	}
//	//��temp�е����ݿ���arr������
//	//���й鲢��ʱ�򣬴����������arr[left,right),��Ӧ�Ļ��
//	//�ⲿ������������temp[left,right)������
//	//memcpy(arr + left, temp + left, sizeof(int)*(right - left + 1));
//	for (int i = 0; i < right - left + 1; ++i) {
//		arr[left + i] = temp[left + i];
//	}
//}
//
//void mergeSort(vector<int> &arr, int left, int right, vector<int> &temp) {//ʵ�֡��֡�
//	int mid = 0;
//	if (left < right)
//	{
//		mid = left + (right - left) / 2;
//		mergeSort(arr, left, mid, temp); //left��mid�ź���
//		mergeSort(arr, mid + 1, right, temp); //mid+1��right�ź��� 
//		mergeAdd(arr, left, mid, right, temp); //�ϲ�
//	}
//}
//
//int main() {
//	vector<int> arr{8,4,5,7,1,3,6,2 };
//	int len = arr.size();
//	vector<int> temp(len); //��������
//	mergeSort(arr, 0, len-1, temp);
//	for_each(arr.begin(), arr.end(), [](int &num) {cout << num << ' '; });
//	return 0;
//}