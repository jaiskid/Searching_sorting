#include<bits/stdc++.h>
using namespace std;
void merging(long int *a ,long int s,long int e )
{
	int mid=(s+e)/2;
	long long int temp[100005];
	int i=s, j=mid+1,k=s;
	while(i<=mid&&j<=e){
	if(a[i]>a[j]){
	temp[k++]=a[j++];
	}
	else{
	temp[k++]=a[i++];
	}
	}
	while(i<=mid){
	temp[k++]=a[i++];
	}
	while(j<=e){
	temp[k++]=a[j++];
	}
	for(i=s;i<=e;i++){
	a[i]=temp[i];
	}
}
void merge_sort(long int *a,long int s,long int e){
	if(s>=e)
	{
	return;
	}
	long int mid=(s+e)/2;
	merge_sort(a,s,mid);
	merge_sort(a,mid+1,e);
	merging(a,s,e);
}
int main(){
	int n;
	cin>>n;
	long int a[n];
	for(int i=0;i<n;i++){
	cin>>a[i];
	}
	merge_sort(a,0,n-1);
	for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
	}
}