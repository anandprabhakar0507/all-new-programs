#include<iostream>
using namespace std;
int kthlargest(int p,int pivot,int n,int a[])

{
	int k;
	cout<<"ENTER THE kth LARGEST NUMBER ";
	cin>>k;
	k=n-k;
	for(int i=0;i<n;i++)
	{
		if(a[i]<=pivot)
		{
			a[p]=a[i];
			a[i]=a[p];
			p=p+1;
		}
		
	}a[p]=pivot;
	pivot=a[p];
	if(p>k)return kthlargest(pivot,p-1,n,a);
	else if(p<k)return kthlargest(p+1,pivot,n,a);
	else return a[p];
	
	
}
int main()
{
	int n;
	cout<<"ENTER THE NUMBER ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
			
	}cout<<"\n";
	int e_p=a[n-1];
	int s_p=a[0];
	cout<<kthlargest(s_p,e_p,n,a);
}
