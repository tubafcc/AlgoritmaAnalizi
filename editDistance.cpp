 #include<iostream>

 using namespace std;
 int min(int a,int b, int c){
 	int min=a;
 	if(min>b){
 		min=b;
	 }
	if(min>c){
		min=c;
	}
	
	return min;
 }
 int main(){
 	int k1=5;
 	int k2=6;
 	int bos=1;
 	int degis=2;
 	int x,y,z;
 	char kelime1[k1]={' ','m','e','r','y'};
 	char kelime2[k2]={' ','b','e','r','r','y'};
 	int m[k1][k2];
 	for(int i=0;i<k1;i++){
 		m[i][0]=i*bos;
	 }
	 for(int j=0;j<k2;j++){
 		m[0][j]=j*bos;
	 }
 	for(int i=1;i<k1;i++){
 		for(int j=1;j<k2;j++){
 			if(kelime1[i]==kelime2[j]){
 				x=m[i-1][j-1];
			 }else{
			 	x=degis+m[i-1][j-1];
			 }
 			
 			y=bos+m[i-1][j];
 			z=bos+m[i][j-1];
 			m[i][j]=min(x,y,z);
		 }
	 }
	 
	 for(int a=0;a<k1;a++){
	 	for(int b=0;b<k2;b++){
	 		cout<<m[a][b]<<"	";
		 }
		 cout<<endl;
	 }
 	
 }
