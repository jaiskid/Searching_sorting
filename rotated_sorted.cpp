#include<bits/stdc++.h>
using namespace std;
int search_In(int *arr,int s,int e,int key){
	if(s>e){
	return -1;
	}
	  int mid=(s+e)/2;
	if(arr[mid]==key){
	return mid;
	}
	if(arr[s]<=arr[mid]){
		if(key>=arr[s]&&key<=arr[mid]){
		return search_In(arr,s,mid-1,key);
		}
		else{
		return search_In(arr,mid+1,e,key);
		}
	}else{
	if(key>=arr[mid]&&key<=arr[e]){
	return search_In(arr,mid+1,e,key);
	}
	else{
	return search_In(arr,s,mid-1,key);
	}
	}
}
int main(){
	int n;
	cin>>n;
	int arr[100005];
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	int key;cin>>key;
	cout<<search_In(arr,0,n-1,key);
}