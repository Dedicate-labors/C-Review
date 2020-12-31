//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	//每个数是左上方和右上方的数的和
//	//每行开始和结尾都是1，中间的数可以使用左上方和右上方和,从第2行开始
//	vector<vector<int>> generate(int numRows) {
//		vector<vector<int>> ans(numRows);
//		if (numRows == 0) return ans;
//		ans[0].push_back(1); //最开始的第一行
//		for (int i = 0; i < numRows - 1; ++i) {
//			//i+1表示当前行下标，i表示当前行要写入的元素个数
//			ans[i + 1].push_back(1);
//			//插入i个元素
//			for(int j = 0; j < i; ++j){
//				int num = ans[i][j] + ans[i][j + 1];
//				ans[i + 1].push_back(num);
//			}
//			ans[i + 1].push_back(1);
//		}
//		return ans;
//	}
//};
//
//int main()
//{
//	Solution S;
//	S.generate(5);
//	return 0;
//}