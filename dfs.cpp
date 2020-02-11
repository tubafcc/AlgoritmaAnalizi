#include <iostream>
#include <list>
#include<stack>
#include<utility>
using namespace std;

int main()
{
	int n=8;

	int A[n][n]={
	 {0, 1, 1, 0, 0, 0, 0, 0},
	 {1, 0, 1, 1, 1, 0, 0, 0},
	 {1, 1, 0, 0, 1, 0, 1, 1},
	 {0, 1, 0, 0, 1, 0, 0, 0},
	 {0, 1, 1, 1, 0, 1, 0, 0},
	 {0, 0, 0, 0, 1, 0, 0, 0},
	 {0, 0, 1, 0, 0, 0, 0, 1},
	 {0, 0, 1, 0, 0, 0, 1, 0},
	
	};
	
	list<int> adjList[n];
	
	for(int i=0; i<n;i++)
		for(int j=0;j<n; j++)
			if(A[i][j]==1)
				adjList[i].push_back(j);

	cout<<"Edges of the Graph: "<<endl;
	for(int i=0;i<n;i++)
		for(list<int>::iterator it = adjList[i].begin(); it != adjList[i].end(); it++)
			cout << i << "->" << *it  << endl;
			
	bool explored[n];
	for(int i=0;i<n;i++)	
		explored[i]=false;
		
	stack<pair<int,int> > yigin;
	pair <int,int> p;
	explored[0]=true;
	for(int i=0;i<n;i++){
		if(A[0][i]==1){
			p.first=0;
			p.second=i;
		}
		yigin.push(p);
	}
	
	list<pair<int,int> > dfs;
	
	while(!yigin.empty()){
		pair <int,int> dugum=yigin.top();
		yigin.pop();
		if(explored[dugum.second]==false){
			explored[dugum.second]=true;
			dfs.push_back(dugum);
			for(list<int>::iterator it = adjList[dugum.second].begin(); it != adjList[dugum.second].end(); it++)
				{pair<int,int> p(dugum.second,*it);
				yigin.push(p);}
			
			
		}
		
	}
	cout<<endl;
	cout<<"Edges of the tree:"<<endl;
	for(list<pair<int,int> >::iterator it = dfs.begin(); it != dfs.end(); it++)
			cout << it->first << "-" << it->second  << endl;


	
	return 0;
}







