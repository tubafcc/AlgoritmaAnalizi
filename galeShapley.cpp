#include<iostream>
using namespace std;

int main(){
int i=3;
int secen[3]={0,0,0};
int tercihler[3]={0,0,0};

int chooseYourMan[3][3]={{1,0,2},{0,1,2},{0,1,2}};
int chooseYourWoman[3][3]={{0,1,2},{1,0,2},{0,1,2}};

int secenErkekler[3]={0,0,0};
int secilenKadinlar[3]={0,0,0};

while(secenErkekler[i]!=0){
	for(int j=0;j<3;j++)
		secen[j]=chooseYourWoman[i][j];
	if(secilenKadinlar[secen[i]]==0){
		secenErkekler[i]=secen[i];
		secilenKadinlar[secen[i]]=secen[i];
	}else if(secilenKadinlar[secen[i]]==1){
		for(int a=0;a<2;a++){
			tercihler[a]=chooseYourMan[secilenKadinlar[secen[i]]][a];
		}
		if(tercihler[0]==secen[i]){
			secenErkekler[secilenKadinlar[secen[i]]]=0;
			secenErkekler[i]=secen[i];
			secilenKadinlar[secen[i]]=secen[i];	
		}
		else if(tercihler[1]==secen[i] && tercihler[2]==secenErkekler[secilenKadinlar[secen[i]]]){
			secenErkekler[secilenKadinlar[secen[i]]]=0;
			secenErkekler[i]=secen[i];
			secilenKadinlar[secen[i]]=secen[i];	
		}	
	}else{
		secilenKadinlar[secen[i]]=0;	
	}
	i++;
}
for(int y=0;y<3;y++){
	cout<<secenErkekler[y]<<" "<<secilenKadinlar[y]<<endl;
}
return 0;
}


