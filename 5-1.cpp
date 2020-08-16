#include<bits/stdc++.h>
using namespace std;

int n=2;
int a[101]={0,12,13};
int b[101][101];
char c[101]={'0','R','B'};

int main(){
	int L=5;
	int k=1;
	for (int i=1;i<=L;i++){
		for (int j=1;j<=L;j++){
			if ((i+j)&1){
				b[i][j]=k;
				a[k]--;
				if (a[k]==0){
					k++;
				}	
			}
		}
	}	
	
	for (int i=1;i<=L;i++){
		for (int j=1;j<=L;j++){
			if (b[i][j]==0){
				b[i][j]=k;
				a[k]--;
				if (a[k]==0){
					k++;
				}	
			}
		}
	}
	
	int p=0;
	for (int i=1;i<=L;i++){
		for (int j=1;j<=L;j++){
			if (b[i][j]==b[i-1][j]) p++;
			if (b[i][j]==b[i][j-1]) p++;
		}
	}
	cout<<p<<endl;
	
	ofstream out;
	out.open("5-1.txt");
	
	for (int i=1;i<=L;i++){
		for (int j=1;j<=L;j++){
			out<<c[b[i][j]]<<" \n"[j==L];
		}
	}
	out.close();
	
}
/*
B R B R B
R B R B R
B R B R B
R B R B R
B R B R B

*/
