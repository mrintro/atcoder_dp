#include <iostream>
using namespace std;

int ans[100000][3];

int main(){
	int n;
	cin>>n;
	int arr[n][3];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
	}
	ans[0][0]=arr[0][0];
	ans[0][1]=arr[0][1];
	ans[0][2]=arr[0][2];
	for(int i=1;i<n;i++){
		if(ans[i-1][1]>ans[i-1][2])
			ans[i][0]=ans[i-1][1]+arr[i][0];
		else
			ans[i][0]=ans[i-1][2]+arr[i][0];
		if(ans[i-1][0]>ans[i-1][2])
			ans[i][1]=ans[i-1][0]+arr[i][1];
		else
			ans[i][1]=ans[i-1][2]+arr[i][1];
		if(ans[i-1][0]>ans[i-1][1])
			ans[i][2]=ans[i-1][0]+arr[i][2];
		else
			ans[i][2]=ans[i-1][1]+arr[i][2];
		//cout<<arr[i][0]<<endl<<arr[i][1]<<endl<<arr[i][2]<<endl;
		
	}
	int max=0;
	for(int i=0;i<3;i++){
		if(ans[n-1][i]>max)
			max=ans[n-1][i];
	}
	cout<<max<<endl;
}
