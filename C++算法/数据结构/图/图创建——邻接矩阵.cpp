//#include<vector>
//#include<iostream>
//#include<climits>
//using namespace std;
//
//class Graph {
//public:
//	//初始化时请一定输入顶点数目和边的数目
//	Graph(int v, int e):vexs(v),arc(v, vector<int>(v)) {
//		//录入顶点信息
//		for (int i = 0; i < v; i++)
//			cin >> vexs[i];
//		//初始化边表
//		for (int i = 0; i < v; ++i)
//			for (int j = 0; j < v; ++j)
//				if (i == j) arc[i][j] = 0;
//				else arc[i][j] = INT_MAX;
//		//读入边,不过还是得区分有向图，无向图
//		int i, j, w;
//		//下面是无向图
//		for (int k = 0; k < e; ++k) {
//			cout << "请输入边(vi, vj)的下标i，下标j和权w:" << endl;
//			cin >> i >> j >> w;
//			arc[i][j] = w;
//			arc[j][i] = arc[i][j];
//		}
//	}
//private:
//	vector<int> vexs;//顶点表
//	vector<vector<int>> arc;//边表
//	int numV, numE; //当前顶点和边的数目
//};
//
//int main() {
//
//	return 0;
//}