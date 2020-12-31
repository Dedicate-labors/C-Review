//#include<iostream>
//#include<string>
//#include<vector>
//#include<stack>
//#include<cstdio>
//#define MAXVEX 100
//
//using namespace std;
////边表顶点
//struct EdgeNode {
//	int adjvex;
//	int weight;
//	struct EdgeNode * next;
//};
//
////顶点表顶点
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
//		int count = 0; //记录输出的顶点个数
//		//初始化栈
//		for (int i = 0; i < GL.numVertexes; ++i)
//			if (GL.adjList[i].in == 0)
//				stackNode.push(i);
//		
//		//下面开始循环：出栈/入栈，入度为0的，出栈时，将相关联的出边去掉
//		int getTop; //stack的顶点
//		int k;//代表相关顶点的下标
//		while (!stackNode.empty()) {
//			getTop = stackNode.top();
//			stackNode.pop();
//			printf_s("%d -> ", GL.adjList[getTop].data);
//			count++;
//			//遍历与getTop相关联的边，减少他们的入度
//			for (e = GL.adjList[getTop].firstedge; e; e = e->next) {
//				k = e->adjvex;
//				if ((--GL.adjList[k].in) == 0)
//					stackNode.push(k);
//			}
//		}
//		//如果count数目小于总顶点数，代表有向图有环，不能拓扑排序
//		if (count < GL.numVertexes) return false;
//		else return true;
//	}
//private:
//	GraphAdjList GL;
//	stack<int> stackNode; //存储的顶点下标
//};
//
//int main() {
//
//	return 0;
//}