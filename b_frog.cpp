#include<iostream>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int hei[n];
	for(int i=0;i<n;i++)
		cin>>hei[i];
	int ans[n+1],temp;
	ans[0]=0;
	ans[1]=(hei[1]-hei[0]);
	if(ans[1]<0)
		ans[1]*=-1;
	for(int i=2;i<n;i++){
		int min=1000000000;
		if(i<k){
			for(int j=0;j<i;j++){
				temp=(hei[i-1-j]-hei[i]);
				if(temp<0)
					temp*=-1;
				temp+=ans[i-1-j];
//				cout<<temp<<" x"<<endl;
				if(min>temp)
					min=temp;
			}
//			cout<<endl<<temp<<endl;
			ans[i]=min;
		}
		else{
			for(int j=0;j<k;j++){
				temp=(hei[i-1-j]-hei[i]);
				if(temp<0)
					temp*=-1;
				temp+=ans[i-1-j];
				if(min>temp)
					min=temp;
			}
			ans[i]=min;
//			cout<<ans[i]<<endl;
		}
	}
	cout<<ans[n-1]<<endl;
}
