#include <iostream>
using namespace std;

int k_small(int a[],int k)
{
return a[k-1];
}

int k_large(int a[],int k,int n)
{
return a[n-k];
}

int main(){
int a[100],n,i,j,temp,k1,k2;
cout<<"ENTER THE NUMBER OF ELEMENTS IN THE ARRAY.";
cin>>n;
cout<<"\nENTER THE ELEMENTS OF THE ARRAY.";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{for(j=i+1;j<n;j++)
{if(a[i]>a[j])
{temp=a[i];
a[i]=a[j];
a[j]=temp;}
else a[i]=a[j]
}
}
cout<<"\n\nENTER A POSITIVE NUMBER TO FIND KTH LARGEST NUMBER IN THE ARRAY.";
cin>>k1;
int small=k_small(a,k1);
cout<<"\nTHE "<<k1<<"THE SMALLEST ELEMENT IN THE ARRAY IS "<<small;	       
	
cout<<"\n\nENTER A POSITIVE NUMBER  TO FIND KTH LARGEST NUMBER IN AN THE ARRAY.";
cin>>k2;
int large=k_large(a,k2,n);
cout<<"\nTHE "<<k2<<"THE LARGEST ELEMENT IN THE ARRAY IS "<<large;	       
	return 0;	
	
	
}
