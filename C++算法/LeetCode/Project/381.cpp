//#include<iostream>
//#include<vector>
//#include<unordered_map>
//#include<set>
//#include<algorithm>
//#include<ctime>
//#include<cstdlib>
//using namespace std;
//
////此题题解去官网看：
//class RandomizedCollection {
//public:
//	//还是想到哈希表配合缓存
//	//制造一个vector正常存储数据(存储核心)，map<int, set<int>> key是val，set存放下标
// 	//添加元素：vector.push_back
//	//删除元素：从map中找到val下标i，从vector交换i和numslength-1的元素，修改vector和map
//	//随机返回就从vector中随机返回
//	/** Initialize your data structure here. */
//	RandomizedCollection() {
//		
//	}
//
//	/** Inserts a value to the collection. Returns true if the collection did not already contain the specified element. */
//	bool insert(int val) {
//		//只要有插入，不管是否重复
//		count++;
//		nums.push_back(val);
//
//		int n = numsPos.count(val); //查看是否有过该元素，0表示无，1表示有
//		numsPos[val].insert(count - 1);
//		return n > 0 ? false: true;
//	}
//
//	/** Removes a value from the collection. Returns true if the collection contained the specified element. */
//	bool remove(int val) {
//		//此处定义的n在前面表示val是否存在，后面表示val的个数
//		int n = numsPos.count(val);
//		if (n == 0) return false;
//
//		set<int>::iterator it = numsPos[val].begin(); //取出第一个下标
//		int pos = *it; //下标
//		nums[pos] = nums[count - 1];
//
//		//开始删除
//		numsPos[val].erase(it); //删除该元素下标
//		//改变nums[count-1]值的下标
//		numsPos[nums[pos]].erase(count-1);
//		//此处是怕最后一个元素和删除元素是同一个元素
//		if (pos < count - 1) numsPos[nums[pos]].insert(pos);
//
//		if (numsPos[val].size == 0) numsPos.erase(val); //删除没有下标的元素
//
//		count--;
//		nums.pop_back(); //删除该元素
//		return true;
//	}
//
//	/** Get a random element from the collection. */
//	int getRandom() {
//		//我认为随机选出一个在对应范围内的下标，就是按照数组元素的概率计算的
//		//eg:sz[] = {1,1,2} 随机下标范围：0到2，1被选择的概率就是2/3， 2被选择的概率就是1/3
//		if (count == 0) return 0;
//		int pos = rand() % count;
//		return nums[pos];
//	}
//private:
//	vector<int> nums; //存放元素
//	unordered_map<int, set<int>> numsPos;//元素和下标集
//	int count = 0;//记录数组该包含多少个数
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