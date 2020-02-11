#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
	vector< pair <int,int> > ayritlar;
	ayritlar.push_back( make_pair(3,4));
	ayritlar.push_back( make_pair(0,1));
	ayritlar.push_back( make_pair(1,3));
	ayritlar.push_back( make_pair(2,3));
	ayritlar.push_back( make_pair(2,4));
	ayritlar.push_back( make_pair(4,5));
	ayritlar.push_back( make_pair(3,5));
	ayritlar.push_back( make_pair(1,2));
	ayritlar.push_back( make_pair(0,2));
	
	vector<vector <int> > dugum;	
	for(int i=0;i<6;i++){
		vector<int>sira;
		sira.push_back(i);
		dugum.push_back(sira);
	}
	pair <int,int> temp;
	int gecici1=0;
	for(int i=0;i<ayritlar.size();i++){
		temp=ayritlar[i];
		for(int a=0;a<dugum.size();a++){
			for(int b=0;b<dugum[a].size();b++){
				if(dugum[a][b]==temp.first || dugum[a][b]==temp.second){
					gecici1++;//ayný kümedelerse gecici1=2 olur
				}
			}	
		}
		if(gecici1!=2){//ayný kümede deðiller ise
			for(int d=0;d<dugum[temp.second].size();d++)
				dugum[temp.first].push_back(dugum[temp.second][d]);
			dugum[temp.second].clear();
		}
	}

	for(int i=0;i<dugum.size();i++){
		for(int j=0;j<dugum[i].size();j++)
		cout<<dugum[i][j]<<endl;
	}
}
