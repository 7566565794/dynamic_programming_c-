#include<bits/stdc++.h>
using namespace std;
int lis(int arr[],int n){
    int dp[n];
    for(int i=0;i<n;i++){
        dp[i]=1;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j] && dp[i]<dp[j]+1){
                dp[i]=dp[j]+1;
            }
        }
    }
     return *max_element(dp, dp+n);
}

  
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cout<<lis(arr,n)<<endl;
	}
	return 0;
}
