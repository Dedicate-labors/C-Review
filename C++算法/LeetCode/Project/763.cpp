//#include<vector>
//#include<map>
//#include<set>
//#include<string>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	//��ⷽ��������ÿ���ַ���startλ�ú�endλ��
//	//����start��endλ���ж�һ���θ��Ƕ೤
//	vector<int> partitionLabels(string S) {
//		map<char, int[2]> histoy; //����ʹ��map���Լ��������ݽṹ
//		if (S == "") return vector<int>{0};
//		vector<char> vec; //��¼ÿ���ַ����ұ���˳���ظ�
//		for (int pos = 0; pos < S.length(); pos++) {
//			if (histoy[S[pos]][0] == 0) //[0]�±���ֻ��ʼ��һ��
//			{
//				histoy[S[pos]][0] = pos == 0 ? -1 : pos;
//				vec.push_back(S[pos]);
//			}
//			histoy[S[pos]][1] = pos;
//		}
//		//ע������-1�������ԣ��������ַ��޷�¼��end�±�
//		//�����޸Ļ���
//		histoy[S[0]][0] = 0;
//		//�õ�ÿ���ַ���start��end
//	
//		//ͨ��vec������˳����м��㣬��֤ÿ���ַ���start�ǵ�����
//		//���a�ַ���start��end��ȫǶ����b�ַ���start��end��Χ�У���������b�ķ�Χ
//		//���a�ַ���start��end����ȫǶ����b�ַ���start��end��Χ�У����·�Χ
//		//������߷�Χ�������ţ��õ�ǰ��Ƭ�η�Χ����˿�ʼ
//		int start=0, end=histoy[vec[0]][1];
//		vector<int> ret;
//		int i, j;
//		for (auto &ch : vec) {
//			i = histoy[ch][0], j = histoy[ch][1];
//			cout << ch << ": " << i << ' ' << j << endl;
//			if (start <= i && end >= j) {
//				//���䣬����
//				continue;
//			}
//			else if (end < i) {
//				//һ��Ƭ�ν��
//				ret.push_back(end-start+1);
//				start = i;
//				end = j;
//			}
//			else {
//				//����ȫ�ص�
//				start = i > start ? start : i;
//				end = j > end ? j : end;
//			}
//		}
//		//��Ϊ���һ����ôҲ���Ậ��(end < histoy[ch].second[0])�������������Լ�push
//		ret.push_back(end - start + 1);
//		return ret;
//	}
//
//	//��������̰���㷨 + ˫ָ��
//	//1. �õ�ÿ����ĸ���һ�γ��ֵ��±�λ��
//	//����Ƭ�ε��±���ֺͽ���λ��start��end
//	//������ĸ���±���ֺͽ���λ��startC��endC
//	//2. ÿ��Ƭ��һ��������ĸ�����һ�γ����±�
//	//3. ʹ��̰�ĵ�˼��Ѱ��ÿ��Ƭ�ο��ܵ���С�����±�
//	vector<int> partitionLabels2(string S) {
//		int last[26]; //��¼ÿ����ĸ�����һ�γ����±�
//		int len = S.length();
//		//�����Ǹ�ɧ����������ѧϰ��
//		for (int i = 0; i < len; ++i) {
//			last[S[i] - 'a'] = i;
//		}
//		vector<int> partition;
//		int start = 0, end = 0; //����Ƭ�ε�start��end
//		for (int i = 0; i < len; ++i) {
//			//��һ���Ǿ���
//			end = max(end, last[S[i] - 'a']);
//			if (i == end) {
//				partition.push_back(end-start+1);
//				start = end + 1;
//			}
//		}
//		return partition;
//	}
//};
//
//int main() {
//	Solution S;
//	string s;
//	vector<int> ret;
//	cin >> s;
//	ret = S.partitionLabels2(s);
//	for (auto it : ret)
//		cout << it << ' ';
//	return 0;
//}