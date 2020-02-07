#include<bits/stdc++.h>
using namespace std;
int interpolation_search(int *arr,int low,int high,int key)
{
	int mid;
	while(low<=high){
	mid=low+(high-low)*((key-arr[low])/(arr[high]-arr[low]));
	
	if(key==arr[mid])
			return mid;
	if(key<arr[mid]){
			high=mid-1;
	}
	else{
			low=mid+1;
	}
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
	cout<<interpolation_search(arr,0,n-1,key);

}