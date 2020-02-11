#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int> a,vector<int> b){
	vector<int> c;
	int asayac=a.size();
	int bsayac=b.size();
	
	while(!a.empty() && !b.empty()){
		if(a[0]>b[0]){
			c.push_back(b[0]);
			b.erase(b.begin());

		}else{
			c.push_back(a[0]);
			a.erase(a.begin());
		}
	}
	while(!a.empty()){
			c.push_back(a[0]);
			a.erase(a.begin());
	}
	while(!b.empty()){
			c.push_back(b[0]);
			b.erase(b.begin());
	}
	return c;
}

vector<int> mergeSort(vector<int> dizi){
	if(dizi.size()==1) {return dizi;}
	vector<int> l1;
	vector<int> l2;
	for(int i=0;i<dizi.size()/2;i++)
		l1.push_back(dizi[i]);
	for(int i=dizi.size()/2;i<dizi.size();i++)
		l2.push_back(dizi[i]);
	
	l1=mergeSort(l1);
	l2=mergeSort(l2);
	return merge(l1,l2);
}
int main(){
	vector<int> siralanacak;
	siralanacak.push_back(1);siralanacak.push_back(5);siralanacak.push_back(4);
	siralanacak.push_back(8);siralanacak.push_back(10);siralanacak.push_back(2);
	siralanacak.push_back(6);siralanacak.push_back(9);siralanacak.push_back(12);
	siralanacak.push_back(11);siralanacak.push_back(3);siralanacak.push_back(7);
	vector<int> siralanmis;
	siralanmis=mergeSort(siralanacak);
	
	cout<<"Siralanmis dizi....:";
	for(int i=0;i<12;i++){
		cout<<siralanmis[i]<<" ";
	}
}	

