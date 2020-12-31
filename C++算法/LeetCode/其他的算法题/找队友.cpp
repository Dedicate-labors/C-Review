//#include <iostream>
//#include <vector>
// 
//using namespace std;
// 
//typedef pair<int,int> Pair;
// 
//void findParent(const vector<Pair> &friends,vector<int> &parents){
//    int sz=friends.size();
//    for(int i=0;i<sz;i++){
//        Pair cp=friends[i];
//        if(cp.first!=cp.second){
//            parents[cp.second]=parents[cp.first];
//        }
//    }
//}
// 
//int getParent(const vector<int> &parents,int i){
//    while(i!=parents[i])
//        i=parents[i];
//    return i;
//}
// 
//bool isFriend(const vector<int> &parents,Pair friends){
//    int f1=friends.first;
//    int f2=friends.second;
//    return getParent(parents,f1)==getParent(parents,f2);
//}
// 
// 
// 
//int main()
//{
//    vector<Pair> friends;
//    Pair p[5]={Pair(1,3),Pair(2,5),Pair(3,6),Pair(6,7),Pair(1,4)};
//    for(int i=0;i<5;i++){
//        friends.push_back(p[i]);
//    }
//    int num=7;
//    vector<int> parents(num+1);
//    for(int i=0;i<=num;i++)
//        parents[i]=i;
// 
//    findParent(friends,parents);
//    Pair f(1,7);
//    cout<<isFriend(parents,f)<<endl;
// 
//    return 0;
//}