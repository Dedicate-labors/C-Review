//#include<vector>
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//	//你搁这儿扭魔方了？？要求最后的每行二进制和最大
//	//首列全部为1，不是1开头的行，进行翻转
//	//从第二列开始，列中1的数目小于0的数目的列翻转，保证1的数目多
//	//计算结果返回
//	int matrixScore(vector<vector<int>>& A) {
//		int row = A.size(), col = A[0].size(); //行,列的数目
//		int ans = row * (1 << (col - 1)); //当第一列全是1时的大小和
//		//注意进行了部分行翻转，所以后面从第二列开始我们需要注意的变量还有行开头是0的行
//
//		//从第二列开始的查看
//		int count = 0; //统计该列1的个数，0的个数 = row - count
//		for (int j = 1; j < col; ++j) {
//			count = 0;
//			//遍历行
//			for (int i = 0; i < row; ++i) {
//				//先判断A[i][0] 是否为1
//				if (A[i][0] && A[i][j] || !A[i][0] && !A[i][j]) count++;
//			}
//			if (count >= row - count) ans += count * (1 << col-j-1);
//			else ans += (row - count) * (1 << col - j - 1); //翻转该列再统计结果
//		}
//		return ans;
//	}
//};
//
//int main()
//{
//
//	return 0;
//}