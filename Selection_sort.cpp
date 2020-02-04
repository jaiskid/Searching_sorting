//selection sort
#include <bits/stdc++.h>
using namespace std;
void selection(int *a,int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(a[minindex]>a[j]){
                minindex=j;
            }
        }
        swap(a[minindex],a[i]);
    }
}
int main() {
  int n;
  cin>>n;
  int a[10005];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
    selection(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
