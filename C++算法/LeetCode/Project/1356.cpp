//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//	vector<int> sortByBits(vector<int>& arr) {
//		//ps:一定要注意map的key不同，value可以相同
//		unordered_map<int, int> arrOnes; //key是下标，value是1的个数
//		for (int i = 0; i < arr.size(); ++i) {
//			arrOnes[i] = getOneNums(arr[i]);
//		}
//		//对value进行排序，排序好后，从arr取数据放入ret中
//		vector<int> ret; 
//		vector<pair<int, int>> temp(arrOnes.begin(), arrOnes.end()); //用于排序的vector
//		sort(temp.begin(), temp.end(), [arr](const pair<int, int> & lhs, const pair<int, int> & rhs) {
//			return (lhs.second < rhs.second) || (!(rhs.second < lhs.second) && (arr[lhs.first] < arr[rhs.first])); });
//		for (auto it : temp) {
//			//cout << arr[it.first] << "  " << it.second << endl;
//			ret.emplace_back(arr[it.first]);
//		}
//		return ret;
//	}
//
//	//获得一个整数多少个1
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