//#include<stdio.h>
//#include<stdlib.h>
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//void Merage(vector<int> &arr, vector<int> &temp,int left,int mid,int right)
//{
//	//������arr[left...mid]������arr[mid+1...right]�ȽϺ�װ��temp
//	int i=left,j=mid+1,k = left;
//	while(i<=mid&&j<=right)
//	{
//		if(arr[i]<arr[j])
//			temp[k++] = arr[i++];
//		else
//			temp[k++] = arr[j++];
//	}
//	while(i<=mid) temp[k++] = arr[i++];
//	while(j<=right) temp[k++] = arr[j++];
//}
//
//void MeragePass(vector<int> &arr, vector<int> &temp, int k,int len)
//{
//	//arr�ļ�¼��kΪ��λ���ȣ������ȽϺ�װ��temp
//	int i=0,n = len-1;
//	for(i=0;i<=n-2*k+1;i=i+2*k)//��֤���ʣ�µļ�¼������2k
//		Merage(arr,temp,i,i+k-1,i+2*k-1);
//	if(i<n-k+1)//k < ��¼���� < 2k
//		Merage(arr,temp,i,i+k-1,n);
//	else//����������
//		for(int j=i;j<=n;j++)
//			temp[j] = arr[j];
//}
//
//void FDMSort(vector<int> &arr, vector<int> &temp,int len)
//{
//	int k = 1;
//	while(k<len)
//	{
//		MeragePass(arr,temp,k,len);//arr->temp��kΪ��¼�Ƚϳ��ȵ�λ
//		k*=2;//��ʹk�ڴ�>=length
//		MeragePass(temp,arr,k,len);//temp->arr��kΪ��¼�Ƚϳ��ȵ�λ
//		k *= 2;
//	}
//}
//
//int main()
//{
//	vector<int> arr{ 0,2,8,9,4 };
//	int len = arr.size();
//	//������������
//	vector<int> temp(len);
//	//printf("length = %d",length);
//	FDMSort(arr,temp,len);
//	for_each(arr.begin(), arr.end(), [](int &num) {cout << num << ' '; });
//	return 0;
//}
