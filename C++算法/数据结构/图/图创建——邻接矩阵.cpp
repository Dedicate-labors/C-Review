//#include<vector>
//#include<iostream>
//#include<climits>
//using namespace std;
//
//class Graph {
//public:
//	//��ʼ��ʱ��һ�����붥����Ŀ�ͱߵ���Ŀ
//	Graph(int v, int e):vexs(v),arc(v, vector<int>(v)) {
//		//¼�붥����Ϣ
//		for (int i = 0; i < v; i++)
//			cin >> vexs[i];
//		//��ʼ���߱�
//		for (int i = 0; i < v; ++i)
//			for (int j = 0; j < v; ++j)
//				if (i == j) arc[i][j] = 0;
//				else arc[i][j] = INT_MAX;
//		//�����,�������ǵ���������ͼ������ͼ
//		int i, j, w;
//		//����������ͼ
//		for (int k = 0; k < e; ++k) {
//			cout << "�������(vi, vj)���±�i���±�j��Ȩw:" << endl;
//			cin >> i >> j >> w;
//			arc[i][j] = w;
//			arc[j][i] = arc[i][j];
//		}
//	}
//private:
//	vector<int> vexs;//�����
//	vector<vector<int>> arc;//�߱�
//	int numV, numE; //��ǰ����ͱߵ���Ŀ
//};
//
//int main() {
//
//	return 0;
//}