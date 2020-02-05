#include<bits/stdc++.h>
using namespace std;
void wave_sort(int *a,int n){
	for(int i=0;i<n;i+=2){
		if(i>0&&a[i-1]>a[i]){
		swap(a[i],a[i-1]);
		}
		if(i<n-2&&a[i+1]>a[i]){
		swap(a[i],a[i+1]);
		}
	}
}
int main(){
	int n;
	cin>>n;
	int a[10005];
	for(int i=0;i<n;i++){
	cin>>a[i];
	}
	wave_sort(a,n);
	for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
	}
}