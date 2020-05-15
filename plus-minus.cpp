#include <bits/stdc++.h>

using namespace std;

void cal(int arr[],int n);
int main(){
    int a[1000],n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    cal(a,n);
       return 0;
    
}
void cal(int arr[],int n){


    float zero=0,neg=0,positive=0;
    for(int k=0;k<n;k++){

        if(arr[k]==0)
        zero++;
        else if(arr[k]<0)
        neg++;
        else 
        positive++;
    }
    float pos=positive/n;
    float negative=neg/n;
    float z=zero/n;
    cout<<pos<<"\n";
    cout<<negative<<"\n";
    cout<<z<<"\n";

}
