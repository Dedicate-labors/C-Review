//#include<iostream>
//#include<vector>
//using namespace std;
////十字链表针对的是有向图：将邻接表和逆邻接表合一了
////可以通过想象有向图邻接矩阵创建
//
////边表节点
//struct EdgeNode {
//	int tailvex; //下标
//	int headvex;
//	struct EdgeNode * headlink;
//	struct EdgeNode * taillink;
//	EdgeNode(int tail, int head, struct EdgeNode * ptrH = nullptr, struct EdgeNode *ptrT = nullptr) :
//		tailvex(tail), headvex(head), headlink(ptrH), taillink(ptrT) {}
//};
//
////顶点表节点
//struct VertexNode {
//	int data;
//	EdgeNode * firstin;
//	EdgeNode * firstout;
//	VertexNode(int d = 0) :data(d) {}
//};
//
//class Graph {
//public:
//	Graph(int v, int e):vexs(v) {
//		//初始化顶点表
//		for (int i = 0; i < v; ++i)
//			cin >> vexs[i].data;
//		//建立边表
//		int i, j;
//		EdgeNode * edge;
//		for (int k = 0; k < e; ++k) {
//			cout << "请输入边(vi, vj)的下标i,j:" << endl;
//			cin >> i >> j;
//			edge = new EdgeNode(i, j);
//			//先建立出边表,taillink代表同一个顶点出发的弧
//			edge->taillink = vexs[i].firstout;
//			vexs[i].firstout = edge;
//			//建立入边表,headlink代表同一个顶点为终点的弧
//			edge->headlink = vexs[j].firstin;
//			vexs[j].firstin = edge;
//		}
//	}
//	//销毁边表,妈的智障(指写博客的)，写那么复杂还不如再记录一个边节点指针数组，到时候一次删除
//	void Destroy() {
//		EdgeNode *edge;
//	}
//	//删除一条边,i->j
//	void DeleteEdge(int i, int j) {
//		//一条边只关联i,j两个节点，所以从in和out两个方向分别去删除
//		//删除前记录该edge指针
//		EdgeNode *temp, *pre = nullptr;
//		//出边表删除
//		if (vexs[i].firstout->headvex == j) {
//			temp = vexs[i].firstout;
//			vexs[i].firstout = temp->taillink;
//		}
//		else {
//			for (EdgeNode *k = vexs[i].firstout; k != nullptr; k = k->taillink) {
//				if (k->headvex == j) {
//					temp = k;
//					pre->taillink = k->taillink;
//				}
//				pre = k;
//			}
//		}
//		//入边表删除
//		if (vexs[j].firstin->tailvex == i) {
//			temp = vexs[i].firstin;
//			vexs[j].firstin = temp->headlink;
//		}
//		else {
//			for (EdgeNode *k = vexs[j].firstin; k != nullptr; k = k->headlink) {
//				if (k->tailvex == i) {
//					temp = k;
//					pre->headlink = k->headlink;
//				}
//				pre = k;
//			}
//		}
//		delete temp;
//	}
//private:
//	vector<VertexNode> vexs;//顶点表
//	int numV, numE; //当前顶点和边的数目
//};
//
//int main() {
//
//	return 0;
//}
