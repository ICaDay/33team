#include<bits/stdc++.h>
using namespace std;
int max1[2002][2002]={};
int gg[2002][2002]={};
int main(){
	int n,m,c;
	cin>>n>>m>>c;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>max1[i][j];
		}
	}
	int max111=-0x3f3f3f3f;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			gg[i][j]=max1[i][j]+gg[i-1][j]+gg[i][j-1]-gg[i-1][j-1];
		}
	}
/*	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<gg[i][j]<<" ";
		}
		cout<<endl;
	}*/
	int xx,yy;
	for(int i=1;i<=n-c+1;i++){
		for(int j=1;j<=m-c+1;j++){
			if(gg[i-1][j-1]+gg[i+c-1][j+c-1]-gg[i-1][j+c-1]-gg[i+c-1][j-1]>max111){
				max111=gg[i+c-1][j+c-1]-gg[i-1][j+c-1]-gg[i+c-1][j-1]+gg[i-1][j-1];
				xx=i;
				yy=j;
			}
		}
	}
	cout<<xx<<" "<<yy<<endl;
	return 0;
}
