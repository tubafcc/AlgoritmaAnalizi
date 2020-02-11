#include<iostream>
#include<vector>
using namespace std;
 int main(){
 	char isler[]={'b','c','a','e','d','f','g','h'};
 	int bitis[]={4,5,6,7,8,9,10,11};
 	int baslangic[]={1,3,0,4,3,5,6,8};
 	vector<int>yapilanIsler;
 	vector<int>saat;
 	yapilanIsler.push_back(0);
 	for(int a=baslangic[0];a<=bitis[0];a++){
 		saat.push_back(a);
	 }
 	for(int i=0;i<saat.size();i++)
 		cout<<saat[i];
 	int kontrol=
 	for(int i=1;i<8;i++){//iþlerin kontrolü
 		for(int j=0;j<saat.size();j++){//saat içi kontrol
 			if((saat[j]>baslangic[i]) && (saat[j]<bitis[i])){
 				kontrol =1;
			 }
		 }
 		if(kontrol==0){
 			yapilanIsler.push_back(i);
 			for(int b=baslangic[i];b<=bitis[i];b++)
 				saat.push_back(b);
		 }
 		
	 }
	for(int i=0;i<yapilanIsler.size();i++)
		cout<<isler[i]<<" ";
		
 }
