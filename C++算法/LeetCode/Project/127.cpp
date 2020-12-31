//#include<string>
//#include<iostream>
//#include<vector>
//#include<climits>
//#include<algorithm>
//#include<queue>
//#include<unordered_set>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//	//方法二：我原来的想法错误在觉得不能和兄弟节点相遇，事实上他们可以
//	//curWord,parentWord,双向广度优先搜索,所以还是广度搜索的思想
//	int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
//		//相对方法二改了一部分
//		//建立图模型，wordList保存顶点，edge保存边关系，全权值都是1，所以谁先找到，谁最短
//		for (string& word : wordList) {
//			addEdge(word);
//		}
//		addEdge(beginWord);
//		if (!wordId.count(endWord)) {
//			return 0;
//		}
//
//		vector<int> disBegin(nodeNum, INT_MAX);
//		int beginId = wordId[beginWord];
//		disBegin[beginId] = 0;
//		queue<int> queBegin;
//		queBegin.push(beginId);
//
//		vector<int> disEnd(nodeNum, INT_MAX);
//		int endId = wordId[endWord];
//		disEnd[endId] = 0;
//		queue<int> queEnd;
//		queEnd.push(endId);
//
//		while (!queBegin.empty() && !queEnd.empty()) {
//			int queBeginSize = queBegin.size();
//			for (int i = 0; i < queBeginSize; ++i) {
//				int nodeBegin = queBegin.front();
//				queBegin.pop();
//				if (disEnd[nodeBegin] != INT_MAX) { //相遇了
//					return (disBegin[nodeBegin] + disEnd[nodeBegin]) / 2 + 1;
//				}
//				for (int& it : edge[nodeBegin]) {
//					if (disBegin[it] == INT_MAX) {
//						disBegin[it] = disBegin[nodeBegin] + 1;
//						queBegin.push(it);
//					}
//				}
//			}
//
//			int queEndSize = queEnd.size();
//			for (int i = 0; i < queEndSize; ++i) {
//				int nodeEnd = queEnd.front();
//				queEnd.pop();
//				if (disBegin[nodeEnd] != INT_MAX) { //相遇了
//					return (disBegin[nodeEnd] + disEnd[nodeEnd]) / 2 + 1;
//				}
//				for (int& it : edge[nodeEnd]) {
//					if (disEnd[it] == INT_MAX) {
//						disEnd[it] = disEnd[nodeEnd] + 1;
//						queEnd.push(it);
//					}
//				}
//			}
//		}
//		return 0;
//	}
//
//	//方法一：广度优先搜索 + 优化建图(使用的哈希表), 模仿的一个图wordId节点，edge表示边
//	unordered_map<string, int> wordId;
//	vector<vector<int>> edge;
//	int nodeNum = 0;
//
//	void addWord(string & word) {
//		if (!wordId.count(word)) {
//			wordId[word] = nodeNum++;
//			edge.emplace_back();
//		}
//	}
//
//	void addEdge(string& word) {
//		addWord(word);
//		int id1 = wordId[word];
//		for(char& it:word){
//			char tmp = it;
//			it = '*';
//			addWord(word); //此处可能会在哈希表中找到曾经有过的
//			int id2 = wordId[word];
//			edge[id1].push_back(id2);
//			edge[id2].push_back(id1);
//			it = tmp;
//		}
//	}
//
//	//此图的权值都是1，所以最短路劲计算就是看谁先找到目标即可
//	int ladderLength1(string beginWord, string endWord, vector<string>& wordList) {
//		//优化建图，目前还是哈希表，map是关键字是不重复的
//		//通过edge和wordId建立了图
//		for (string& word : wordList) {
//			addEdge(word);
//		}
//		addEdge(beginWord);
//		//没找到endWord的话，返回0
//		if (!wordId.count(endWord)) {
//			return 0;
//		}
//		vector<int> dis(nodeNum, INT_MAX); //dis是开始走路
//		//beginWord和endWord是不同的，题目说明了
//		int beginId = wordId[beginWord], endId = wordId[endWord];
//		dis[beginId] = 0;
//
//		queue<int> que;
//		que.push(beginId);
//		while (!que.empty()) {
//			int x = que.front();
//			que.pop();
//			if (x == endId) {
//				//除以2是因为我们查找的路劲中多了一倍用于辅助查找的word，+1是因为之前没有算入起始节点的贡献
//				return dis[endId] / 2 + 1;
//			}
//			for (int& it : edge[x]) { //edge已经是个vector<int>了包含相关联的wordId，带*号的那些
//				if (dis[it] == INT_MAX) { //不为INT_MAX代表有路了，不能回头
//					dis[it] = dis[x] + 1;
//					que.push(it);
//				}
//			}
//		}
//		//没寻找到
//		return 0;
//	}
//};
//
//int main() {
//	string word = "abc";
//	for (char & ch : word) {
//		ch = '*';
//		cout << word << endl;
//	}
//	return 0;
//}