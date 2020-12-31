//#include<iostream>
//#include<vector>
//using namespace std;
//
//int parent[100];
//
////一定要找到父节点
//int find(int x) {
//	return parent[x] == x ? x : find(parent[x]);
//}
//
//void to_union(int x1, int x2) {
//	int p1 = find(x1);
//	int p2 = find(x2);
//	parent[p1] = p2;
//}
//
//class DisjSet {
//private:
//	vector<int> parent;
//	//秩
//	vector<int> rank;
//public:
//	DisjSet(int max_size) :parent(vector<int>(max_size)),rank(vector<int>(max_size, 0)) {
//		// 初始化每一个元素的根节点都为自身
//		for (int i = 0; i < max_size; ++i)
//			parent[i] = i;
//	}
//	int find(int x) {
//		//return parent[x] == x ? x : find(parent[x]);
//		//下面是路径压缩
//		return parent[x] == x ? x : (parent[x] = find(parent[x]));
//	}
//
//	//迭代版本的find(),但无优化
//	int findDD(int x) {
//		while (parent[x] != x) {
//			x = parent[x];
//		}
//		return x;
//	}
//
//	void to_union(int x1, int x2) {
//		int p1 = find(x1);
//		int p2 = find(x2);
//		//按秩合并
//		if (rank[p1] > rank[p2]) parent[p2] = p1;
//		else {
//			parent[p1] = p2;
//			if (rank[p1] == rank[p2])
//				++rank[p2];
//		}
//	}
//	//判断两个元素是否属于同一个集合
//	bool is_same(int e1, int e2) {
//		return find(e1) == find(e2);
//	}
//};
//
//int main() {
//	return 0;
//}