#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n=6;
	int deger[n]={0,1,6,18,22,28};
	int agirlik[n]= {0,1,2,5,6,7}; 
	
	int w=11;
	int matris[n][w+1];
	for(int i=0;i<w+1;i++){
		matris[0][i]=0;
	}

	for(int a=1;a<n;a++){
		for(int b=0;b<w+1;b++){
			if(agirlik[a]>b){
				matris[a][b]=matris[a-1][b];
			}else{
				matris[a][b]=max(matris[a-1][b],deger[a]+matris[a-1][b-agirlik[a]]);
			}
		}
	}

	for(int a=0;a<n;a++){
		for(int b=0;b<w+1;b++){
			cout<<matris[a][b]<<"	";
		}
		cout<<endl;
	}
	
	cout<<"Deger..:"<<matris[n-1][w]<<endl;
}
