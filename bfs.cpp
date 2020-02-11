#include<iostream>
#include<list>
#include<queue>
using namespace std;
int main(){
	int n=8;
	int komsuluk[n][n]={
		{0,1,1,0,0,0,0,0},
		{1,0,1,1,1,0,0,0},
		{1,1,0,0,1,0,1,1},
		{0,1,0,0,1,0,0,0},
		{0,1,1,1,0,1,0,0},
		{0,0,0,0,1,0,0,0},
		{0,0,1,0,0,0,0,1},
		{0,0,1,0,0,0,1,0}
	};
	list<int> komsular[n];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(komsuluk[i][j]==1){
				komsular[i].push_back(j);
			}
		}
	}

	for(int i=0;i<n;i++){
		for(list<int>::iterator it=komsular[i].begin();it!=komsular[i].end();it++){
			cout<<i<<"->"<<*it<<endl;
				}
	}
	
	bool discovered[n]={false,false,false,false,false,false,false,false};
	queue<int> dugumler;
	dugumler.push(0);
	list <int>bfs[n];
	while(!dugumler.empty()){
		for(int i=0;i<n;i++){
		
		if(discovered[i]==false){
		dugumler.push(i);
		discovered[i]=true;
		for(list<int>::iterator it=komsular[i].begin();it!=komsular[i].end();it++){
			if(discovered[*it]==false){
			
			dugumler.push(*it);
			bfs[i].push_back(*it);}
				}
		dugumler.pop();
		cout<<dugumler.back();//son atýlan dugumu at
		}//ifsonu
	
		}

	}
	cout<<endl;
	cout<<"BFS:"<<endl;
		for(int i=0;i<n;i++){
		for(list<int>::iterator it=bfs[i].begin();it!=bfs[i].end();it++){
			cout<<i<<"->"<<*it<<endl;
				}
	}
}

	

