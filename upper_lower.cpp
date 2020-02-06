#include<bits/stdc++.h>
using namespace std;
int first_occurence(int *a,int n,int key){
	int s=0;
	int e=n-1;
	int ans=-1;
	while(s<=e){
		int mid=(s+e)/2;
		if(a[mid]==key){
		ans=mid;
		e=mid-1;
		}
		else if(a[mid]>key){
		e=mid-1;
		}
		else{
		s=mid+1;
		}
	}
	return ans;
}
int last_occurence(int *a,int n,int key){
	int s=0;
	int e=n-1;
	int ans=-1;
	while(s<=e){
	int mid=(s+e)/2;
	if(a[mid]==key){
		ans=mid;
		s=mid+1;
		}
	
	 else if(a[mid]>key){
	e=mid-1;
	}
	else{
	s=s+1;
	}
}
return ans;
}
int main(){
	int n;
	cin>>n;
	int arr[10005];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	cout<<first_occurence(arr,n,key);
	cout<<endl;
	cout<<last_occurence(arr,n,key);
}