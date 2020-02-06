#include<iostream>
using namespace std;
int pivot(int *arr,int s,int e){
	if(s>e){
	return -1;
	}
	while(s<=e){
	int mid=(s+e)/2;
	if(mid<e&&arr[mid]>arr[mid+1]){
	return mid;
	}
	if(mid>s&&arr[mid]<arr[mid-1])
	return mid-1;
	if(arr[s]>=arr[mid]){
	e=mid-1;
	}else{
	s=mid+1;
	}
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	int arr[1005];
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	cout<<pivot(arr,0,n-1);
}