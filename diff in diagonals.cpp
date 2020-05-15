#include <bits/stdc++.h>

using namespace std;

int main(){


int a[100][100],n,c,b,diff;

cin>>n;
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
cin>>a[i][j];

for(int x=0;x<n;x++){

    b+=a[x][x];
    c+=a[x][n-x-1];
}

diff=abs(b-c);
cout<<diff;






    return 0;

}
