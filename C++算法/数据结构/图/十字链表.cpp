//#include<iostream>
//#include<vector>
//using namespace std;
////ʮ��������Ե�������ͼ�����ڽӱ�����ڽӱ��һ��
////����ͨ����������ͼ�ڽӾ��󴴽�
//
////�߱�ڵ�
//struct EdgeNode {
//	int tailvex; //�±�
//	int headvex;
//	struct EdgeNode * headlink;
//	struct EdgeNode * taillink;
//	EdgeNode(int tail, int head, struct EdgeNode * ptrH = nullptr, struct EdgeNode *ptrT = nullptr) :
//		tailvex(tail), headvex(head), headlink(ptrH), taillink(ptrT) {}
//};
//
////�����ڵ�
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
//		//��ʼ�������
//		for (int i = 0; i < v; ++i)
//			cin >> vexs[i].data;
//		//�����߱�
//		int i, j;
//		EdgeNode * edge;
//		for (int k = 0; k < e; ++k) {
//			cout << "�������(vi, vj)���±�i,j:" << endl;
//			cin >> i >> j;
//			edge = new EdgeNode(i, j);
//			//�Ƚ������߱�,taillink����ͬһ����������Ļ�
//			edge->taillink = vexs[i].firstout;
//			vexs[i].firstout = edge;
//			//������߱�,headlink����ͬһ������Ϊ�յ�Ļ�
//			edge->headlink = vexs[j].firstin;
//			vexs[j].firstin = edge;
//		}
//	}
//	//���ٱ߱�,�������(ָд���͵�)��д��ô���ӻ������ټ�¼һ���߽ڵ�ָ�����飬��ʱ��һ��ɾ��
//	void Destroy() {
//		EdgeNode *edge;
//	}
//	//ɾ��һ����,i->j
//	void DeleteEdge(int i, int j) {
//		//һ����ֻ����i,j�����ڵ㣬���Դ�in��out��������ֱ�ȥɾ��
//		//ɾ��ǰ��¼��edgeָ��
//		EdgeNode *temp, *pre = nullptr;
//		//���߱�ɾ��
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
//		//��߱�ɾ��
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
//	vector<VertexNode> vexs;//�����
//	int numV, numE; //��ǰ����ͱߵ���Ŀ
//};
//
//int main() {
//
//	return 0;
//}
