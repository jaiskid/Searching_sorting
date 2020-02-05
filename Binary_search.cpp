//Binary_search works on the sorted data
#include<bits/stdc++.h>
using namespace std;
int binary_search(int *a,int key,int n){
	int s=0;
	int e=n-1;
	while(s<=e){
	int mid=(s+e)/2;
	if(a[mid]==key){
	return mid;
	}
	if(a[mid]<key){
	s=mid+1;
	}
	else{
	e=mid-1;
	}
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	int a[10005];
	for(int i=0;i<n;i++){
	cin>>a[i];
	}
	int key;
	cin>>key;
	cout<<binary_search(a,key,n);
}