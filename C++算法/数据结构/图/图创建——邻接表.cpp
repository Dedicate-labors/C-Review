//#include<iostream>
//#include<vector>
//using namespace std;
//
////�߱�ڵ�
//struct EdegeNode {
//	int adjvex;
//	int weight;
//	struct EdgeNode *next;
//	EdegeNode(int pos, int w):adjvex(pos), weight(w), next(nullptr){}
//};
//
////�����ڵ�
//struct VertexNode {
//	char data;
//	EdgeNode * firstedge;
//};
//
//class Graph {
//public:
//	Graph(int v, int e) :AdjList(v){
//		//�Զ�����ʼ��
//		for (int i = 0; i < v; ++i) {
//			cin >> AdjList[i].data;
//			AdjList[i].firstedge = nullptr;
//		}
//		//�����߱�
//		int i, j, w;
//		EdegeNode * edge; //�߱�ڵ�
//		//����������ͼ
//		for (int k = 0; k < e; ++k) {
//			cout << "�������(vi, vj)���±�i���±�j��Ȩw:" << endl;
//			cin >> i >> j >> w;
//			edge = new EdegeNode(j, w);
//			//ͷ�巨
//			edge->next = AdjList[i].firstedge;
//			AdjList[i].firstedge = edge;
//
//			edge = new EdegeNode(i, w);
//			edge->next = AdjList[j].firstedge;
//			AdjList[j].firstedge = edge;
//		}
//	}
//private:
//	vector<VertexNode> AdjList; //�����
//	int numV, numE; //��ǰ�������ͱ���
//};
//
//int main() {
//
//	return 0;
//}