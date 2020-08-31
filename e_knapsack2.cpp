#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,c;
	cin>>n>>c;
	long long wei[n], p= 1000000000000;
	long long val[n];
	long long total=0;
	for(int i=0;i<n;i++){
		cin>>wei[i]>>val[i];
		total+=val[i];
	}
	long long ans[total+1];
	for(int i=0;i<total+1;i++)
		ans[i]=p;
	for(int i=1;i<n+1;i++){
		for(int j=total-val[i-1];j>0;j--){
			//cout<<"here"<<endl;
			
//			if(ans[j]<ans[j]){
//				ans[i][j]=ans[i-1][j];
//			}
			//cout<<j+val[j-1]<<endl;
			if(ans[j]+wei[i-1]<ans[j+val[i-1]])
				ans[j+val[i-1]]=ans[j]+wei[i-1];
			//cout<<ans[j]<<" ";	
		}
		
		if(ans[val[i-1]]>=wei[i-1])
			ans[val[i-1]]=wei[i-1];
		//cout<<endl;
	}
	int answer=0,max=0;
	for(int i=total;i>0;i--){
		if(ans[i]<=c){
				answer=i;
				break;
			}
	}
	cout<<answer<<endl;
			
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,c;
	cin>>n>>c;
	long long wei[n], p= 1000000000000;
	long long val[n];
	long long total=0;
	for(int i=0;i<n;i++){
		cin>>wei[i]>>val[i];
		total+=val[i];
	}
	long long ans[total+1];
	for(int i=0;i<total+1;i++)
		ans[i]=p;
	for(int i=1;i<n+1;i++){
		for(int j=total-val[i-1];j>0;j--){
			//cout<<"here"<<endl;
			
//			if(ans[j]<ans[j]){
//				ans[i][j]=ans[i-1][j];
//			}
			//cout<<j+val[j-1]<<endl;
			if(ans[j]+wei[i-1]<ans[j+val[i-1]])
				ans[j+val[i-1]]=ans[j]+wei[i-1];
			//cout<<ans[j]<<" ";	
		}
		
		if(ans[val[i-1]]>=wei[i-1])
			ans[val[i-1]]=wei[i-1];
		//cout<<endl;
	}
	int answer=0,max=0;
	for(int i=total;i>0;i--){
		if(ans[i]<=c){
				answer=i;
				break;
			}
	}
	cout<<answer<<endl;
			
}
