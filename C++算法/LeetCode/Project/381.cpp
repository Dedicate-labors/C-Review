//#include<iostream>
//#include<vector>
//#include<unordered_map>
//#include<set>
//#include<algorithm>
//#include<ctime>
//#include<cstdlib>
//using namespace std;
//
////�������ȥ��������
//class RandomizedCollection {
//public:
//	//�����뵽��ϣ����ϻ���
//	//����һ��vector�����洢����(�洢����)��map<int, set<int>> key��val��set����±�
// 	//���Ԫ�أ�vector.push_back
//	//ɾ��Ԫ�أ���map���ҵ�val�±�i����vector����i��numslength-1��Ԫ�أ��޸�vector��map
//	//������ؾʹ�vector���������
//	/** Initialize your data structure here. */
//	RandomizedCollection() {
//		
//	}
//
//	/** Inserts a value to the collection. Returns true if the collection did not already contain the specified element. */
//	bool insert(int val) {
//		//ֻҪ�в��룬�����Ƿ��ظ�
//		count++;
//		nums.push_back(val);
//
//		int n = numsPos.count(val); //�鿴�Ƿ��й���Ԫ�أ�0��ʾ�ޣ�1��ʾ��
//		numsPos[val].insert(count - 1);
//		return n > 0 ? false: true;
//	}
//
//	/** Removes a value from the collection. Returns true if the collection contained the specified element. */
//	bool remove(int val) {
//		//�˴������n��ǰ���ʾval�Ƿ���ڣ������ʾval�ĸ���
//		int n = numsPos.count(val);
//		if (n == 0) return false;
//
//		set<int>::iterator it = numsPos[val].begin(); //ȡ����һ���±�
//		int pos = *it; //�±�
//		nums[pos] = nums[count - 1];
//
//		//��ʼɾ��
//		numsPos[val].erase(it); //ɾ����Ԫ���±�
//		//�ı�nums[count-1]ֵ���±�
//		numsPos[nums[pos]].erase(count-1);
//		//�˴��������һ��Ԫ�غ�ɾ��Ԫ����ͬһ��Ԫ��
//		if (pos < count - 1) numsPos[nums[pos]].insert(pos);
//
//		if (numsPos[val].size == 0) numsPos.erase(val); //ɾ��û���±��Ԫ��
//
//		count--;
//		nums.pop_back(); //ɾ����Ԫ��
//		return true;
//	}
//
//	/** Get a random element from the collection. */
//	int getRandom() {
//		//����Ϊ���ѡ��һ���ڶ�Ӧ��Χ�ڵ��±꣬���ǰ�������Ԫ�صĸ��ʼ����
//		//eg:sz[] = {1,1,2} ����±귶Χ��0��2��1��ѡ��ĸ��ʾ���2/3�� 2��ѡ��ĸ��ʾ���1/3
//		if (count == 0) return 0;
//		int pos = rand() % count;
//		return nums[pos];
//	}
//private:
//	vector<int> nums; //���Ԫ��
//	unordered_map<int, set<int>> numsPos;//Ԫ�غ��±꼯
//	int count = 0;//��¼����ð������ٸ���
//};
//
//int main() {
//	int val = 1;
//	RandomizedCollection* obj = new RandomizedCollection();
//	bool param_1 = obj->insert(val);
//	bool param_2 = obj->remove(val);
//	bool param_3 = obj->insert(val);
//	return 0;
//}