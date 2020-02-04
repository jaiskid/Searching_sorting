#include<bits/stdc++.h>
using namespace std;
int linear_search(int *arr,int key,int n){
	for(int i=0;i<n;i++){
	if(arr[i]==key)
	return i;
	}
	return -1;
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
	cout<<linear_search(arr,key,n);

}
