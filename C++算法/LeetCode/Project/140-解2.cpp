//#include<iostream>
//#include<vector>
//#include<string>
//#include<unordered_map>
//#include<unordered_set>
//using namespace std;
//
////��������ʹ�õļ��仯�����ͷ���һһ����ֻ��������������������û���������Ż����������ȵļ�֦
////���仯����Ҳ���Կ����Զ����µĶ�̬�滮��
////ans[index] = ans[i]+word; //ans[s]�Ե�ǰindex�±꿪ʼ�ľ�����(��index�±��ַ���ͷ�ĵ���wordҲ�ҵ�)��
////ans[i]�����index  word���ʳ���  ����i��ͷ�ľ�����
////ps�������wordҲ�����Ƕ����ͨ��wordSet�ж��Ƿ���Ҫ����
//class Solution {
//private:
//	unordered_map<int, vector<string>> ans;
//	unordered_set<string> wordSet;
//
//public:
//	vector<string> wordBreak(string s, vector<string>& wordDict) {
//		wordSet = unordered_set<string>(wordDict.begin(), wordDict.end()); //����Ҳû���ظ���
//		backtrack(s, 0);
//		return ans[0];
//	}
//
//	void backtrack(const string& s, int index) {
//		//������жϣ���Ϊ�˼�֦�������ظ��ļ���
//		if (!ans.count(index)) {
//			//��������֮һ
//			if (index == s.size()) {
//				ans[index] = { "" }; //Ϊ�����ж�Ϊ�գ�β��������Ҫ��ʼ����һ�����ַ���
//				//Ҳ��������±�index==s.size()ʱ����ͷ�ľ��Ӿ��ǿ��ַ�����ȷ����
//				return;
//			}
//			ans[index] = {};
//			//��ѭ������s index������ַ�
//			for (int i = index + 1; i <= s.size(); ++i) {
//				string word = s.substr(index, i - index);
//				//wordSet֮ǰ�Ѿ���ʼ������
//				if (wordSet.count(word)) {
//					backtrack(s, i); //��ȡi�±꿪ͷ�ľ����ǣ���ʣ�ಿ�ֵ���ɾ���
//					//ans[index]����ǰ�Ը��±꿪ͷ�ľ�����
//					//ans[index]�����word����word+ans[i]�еľ�����
//					for (const string& succ : ans[i]) {
//						ans[index].push_back(succ.empty() ? word : word + " " + succ);
//					}
//				}
//			}
//		}
//	}
//};
//
//int main() {
//
//	return 0;
//}