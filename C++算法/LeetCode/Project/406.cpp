//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////把题目条件转换为一种可视图：h代表当前柱子高度，k代表当前柱子前面比它高的柱子数目，低的柱子不作数
////说白了先排好高的，依次递减高度，因为对于高柱子而言，低柱子是没有意义的
////有高度再去确定他的位置
////(7,0) h >= 7的都在后面了
////(7, 0) (7, 1) 选择原序列中余下的最高h
////(7,0) (6, 1) (7, 1) //h=6的根据k随便插入,下一组是(5,0) (5,2) //h相同，根据k排序
////(5,0)(7,0)(5,2)(6,1)(7,1) //下一组是(4,4)
////(5,0)(7,0)(5,2)(6,1)(4,4)(7,1)
//
//class Solution {
//public:
//	vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
//		//根据people的h排序，是个降序数组
//		sort(people.begin(), people.end(), [](const vector<int> &a, const vector<int> &b) {
//			if (a[0] > b[0]) return true;
//			else {
//				if (a[0] < b[0]) return false;
//				return a[1] < b[1];
//			}
//		});
//		//先将h高的排序好(固定一般的顺序)，再依次递减高度
//		int len = people.size();
//		vector<vector<int>> ret;
//		int i = 0, j = 0, h; //i是下标，h是高度
//		while (i < len) {
//			h = people[i][0];
//			//找到[i,end)中最高的那批人
//			for (j = i; j < len; ++j) {
//				if (people[j][0] < h) break;
//			}
//			//得到[i, j)
//			//扫描ret,根据k来确定位置，不用考虑h了
//			inSert(ret, i, j, people);
//			i = j;
//		}
//		return ret;
//	}
//
//	//[i, j)范围内的数据插入到ret中的合理位置
//	void inSert(vector<vector<int>> &ret, int i, int j, vector<vector<int>> &people) {
//		if (ret.size() == 0) {
//			for (int k = i; k < j; ++k) {
//				ret.push_back(people[k]);
//			}
//			return;
//		}
//		else
//		{
//			vector<vector<int>>::iterator beg;
//			for (int k = i; k < j; ++k) {
//				//people[k][1]-->的值
//				beg = ret.begin(); //要不断更新的
//				ret.insert(beg+people[k][1], people[k]);
//			}
//		}
//	}
//};
//
//int main() {
//
//	return 0;
//}