//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////����Ŀ����ת��Ϊһ�ֿ���ͼ��h����ǰ���Ӹ߶ȣ�k����ǰ����ǰ������ߵ�������Ŀ���͵����Ӳ�����
////˵�������źøߵģ����εݼ��߶ȣ���Ϊ���ڸ����Ӷ��ԣ���������û�������
////�и߶���ȥȷ������λ��
////(7,0) h >= 7�Ķ��ں�����
////(7, 0) (7, 1) ѡ��ԭ���������µ����h
////(7,0) (6, 1) (7, 1) //h=6�ĸ���k������,��һ����(5,0) (5,2) //h��ͬ������k����
////(5,0)(7,0)(5,2)(6,1)(7,1) //��һ����(4,4)
////(5,0)(7,0)(5,2)(6,1)(4,4)(7,1)
//
//class Solution {
//public:
//	vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
//		//����people��h�����Ǹ���������
//		sort(people.begin(), people.end(), [](const vector<int> &a, const vector<int> &b) {
//			if (a[0] > b[0]) return true;
//			else {
//				if (a[0] < b[0]) return false;
//				return a[1] < b[1];
//			}
//		});
//		//�Ƚ�h�ߵ������(�̶�һ���˳��)�������εݼ��߶�
//		int len = people.size();
//		vector<vector<int>> ret;
//		int i = 0, j = 0, h; //i���±꣬h�Ǹ߶�
//		while (i < len) {
//			h = people[i][0];
//			//�ҵ�[i,end)����ߵ�������
//			for (j = i; j < len; ++j) {
//				if (people[j][0] < h) break;
//			}
//			//�õ�[i, j)
//			//ɨ��ret,����k��ȷ��λ�ã����ÿ���h��
//			inSert(ret, i, j, people);
//			i = j;
//		}
//		return ret;
//	}
//
//	//[i, j)��Χ�ڵ����ݲ��뵽ret�еĺ���λ��
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
//				//people[k][1]-->��ֵ
//				beg = ret.begin(); //Ҫ���ϸ��µ�
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