//#include<iostream>
//#include<vector>
//using namespace std;
//
////边表节点
//struct EdegeNode {
//	int adjvex;
//	int weight;
//	struct EdgeNode *next;
//	EdegeNode(int pos, int w):adjvex(pos), weight(w), next(nullptr){}
//};
//
////顶点表节点
//struct VertexNode {
//	char data;
//	EdgeNode * firstedge;
//};
//
//class Graph {
//public:
//	Graph(int v, int e) :AdjList(v){
//		//对顶点表初始化
//		for (int i = 0; i < v; ++i) {
//			cin >> AdjList[i].data;
//			AdjList[i].firstedge = nullptr;
//		}
//		//建立边表
//		int i, j, w;
//		EdegeNode * edge; //边表节点
//		//下面是无向图
//		for (int k = 0; k < e; ++k) {
//			cout << "请输入边(vi, vj)的下标i，下标j和权w:" << endl;
//			cin >> i >> j >> w;
//			edge = new EdegeNode(j, w);
//			//头插法
//			edge->next = AdjList[i].firstedge;
//			AdjList[i].firstedge = edge;
//
//			edge = new EdegeNode(i, w);
//			edge->next = AdjList[j].firstedge;
//			AdjList[j].firstedge = edge;
//		}
//	}
//private:
//	vector<VertexNode> AdjList; //顶点表
//	int numV, numE; //当前顶点数和边数
//};
//
//int main() {
//
//	return 0;
//}