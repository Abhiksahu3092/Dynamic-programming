#include<bits/stdc++.h>
using namespace std;

int arr[]={10,20,50,1,100};
int n=(sizeof(arr)/sizeof(arr[0]))-1;//value of n is 4

int matrix[4][4];
int s[4][4];
int mcm(){
    for(int i=1;i<=n;i++){
        matrix[i][i]=0;
    }

    for(int d=1;d<=n-1;d++){
        for(int i=1;i<=n;i++){
            int j=i+d;
            matrix[i][j]=INT_MAX;
            if(j<=n){
            for(int k=i;k<=j-1;k++){
                int q=matrix[i][k]+matrix[k+1][j]+arr[i-1]*arr[k]*arr[j];
                if(q<matrix[i][j]){
                    matrix[i][j]=q;
                    s[i][j]=k;
                }
            }
            }
        }
        }
    return matrix[1][n];
}

int main(){
    int ans=mcm();
    cout<<ans<<endl;
}