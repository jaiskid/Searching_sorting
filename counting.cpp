#include<bits/stdc++.h>
using namespace std;
bool comp(int a, int b) 
{ 
    return (a < b); 
}
void counting_sort(int *a,int max,int n){
	int count[10005]={0};
	for(int i=0;i<n;i++){
	count[a[i]]++;
	}
	for(int i=0;i<=max;i++){
	for(int j=1;j<=count[i];j++){
	cout<<i<<" ";
	}
	}
}
int main(){
	int n;
	cin>>n;
	int arr[10005];
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	int max=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	counting_sort(arr,max,n);
}