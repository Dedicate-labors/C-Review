//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//	vector<int> sortByBits(vector<int>& arr) {
//		//ps:һ��Ҫע��map��key��ͬ��value������ͬ
//		unordered_map<int, int> arrOnes; //key���±꣬value��1�ĸ���
//		for (int i = 0; i < arr.size(); ++i) {
//			arrOnes[i] = getOneNums(arr[i]);
//		}
//		//��value������������ú󣬴�arrȡ���ݷ���ret��
//		vector<int> ret; 
//		vector<pair<int, int>> temp(arrOnes.begin(), arrOnes.end()); //���������vector
//		sort(temp.begin(), temp.end(), [arr](const pair<int, int> & lhs, const pair<int, int> & rhs) {
//			return (lhs.second < rhs.second) || (!(rhs.second < lhs.second) && (arr[lhs.first] < arr[rhs.first])); });
//		for (auto it : temp) {
//			//cout << arr[it.first] << "  " << it.second << endl;
//			ret.emplace_back(arr[it.first]);
//		}
//		return ret;
//	}
//
//	//���һ���������ٸ�1
//	int getOneNums(int num) {
//		int count = 0;
//		while (num) {
//			num = num & (num - 1);
//			count++;
//		}
//		return count;
//	}
//};
//
//int main() {
//	Solution S;
//	vector<int> arr{1024,512,256,128,64,32,16,8,4,2,1};
//	vector<int> ret;
//	ret = S.sortByBits(arr);
//	return 0;
//}