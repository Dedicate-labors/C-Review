//#include<iostream>
//#include<string>
//#include<vector>
//#include<stack>
//#include<cstdio>
//#define MAXVEX 100
//
//using namespace std;
////�߱���
//struct EdgeNode {
//	int adjvex;
//	int weight;
//	struct EdgeNode * next;
//};
//
////�������
//struct VertexNode {
//	int in;
//	int data;
//	EdgeNode *firstedge;
//};
//
//typedef struct{
//	VertexNode adjList[MAXVEX];
//	int numVertexes, numEdges;
//}GraphAdjList;
//
//class TopologicalSort {
//public:
//	bool operator()() {
//		EdgeNode *e;
//		int count = 0; //��¼����Ķ������
//		//��ʼ��ջ
//		for (int i = 0; i < GL.numVertexes; ++i)
//			if (GL.adjList[i].in == 0)
//				stackNode.push(i);
//		
//		//���濪ʼѭ������ջ/��ջ�����Ϊ0�ģ���ջʱ����������ĳ���ȥ��
//		int getTop; //stack�Ķ���
//		int k;//������ض�����±�
//		while (!stackNode.empty()) {
//			getTop = stackNode.top();
//			stackNode.pop();
//			printf_s("%d -> ", GL.adjList[getTop].data);
//			count++;
//			//������getTop������ıߣ��������ǵ����
//			for (e = GL.adjList[getTop].firstedge; e; e = e->next) {
//				k = e->adjvex;
//				if ((--GL.adjList[k].in) == 0)
//					stackNode.push(k);
//			}
//		}
//		//���count��ĿС���ܶ���������������ͼ�л���������������
//		if (count < GL.numVertexes) return false;
//		else return true;
//	}
//private:
//	GraphAdjList GL;
//	stack<int> stackNode; //�洢�Ķ����±�
//};
//
//int main() {
//
//	return 0;
//}