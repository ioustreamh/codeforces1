#include<iostream>
using namespace std;
int main()
{
int n,sum=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{

cin>>arr[i];

}

for(int i=0;i<n;i++)
{

sum=sum+arr[i];

}
if(sum>=1)
{
cout<<"HARD";
}
else
{

cout<<"EASY";
}

return 0;

}
