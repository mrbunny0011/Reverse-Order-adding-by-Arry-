#include<iostream>
using namespace std;

int main()
{ 
  // BsCS section (D) AbdulBasit Roll no 26 
//.    Assignment part 1. ...!!!...
   
cout<<"      Assignment    part 1 "<<endl;
cout<<"________________________________________"<<endl;
    int arr[10];
    for(int i=1 ;i<=10;i++)
   {cout<<"Enter your number. : ";
    cin>>arr[i];}
    cout<<"your number in reverse order "<<endl;
    
     for(int i=10;i>0;i--){
    cout<< "reverse values. : ";
    cout<<arr[i]<<endl;}
    cout <<"_____________________________________"<<endl;
    
    
    
 //.   Assignment pàrt 2  ...!!!!...   
    
    
    
    cout<<"      Assignment    part 2 "<<endl;
    cout<<"_______________________________________"<<endl;
    int sum=0;
    int arry[10],j;
    for(int i=0 ;i<10;i++)
    {
    cout<<"Enter your number  : ";
    cin>>arry[i];
    }
    
    for( j=0;j<10;j++)
    {
       if(j==3 || j==5)
       continue;
       sum =sum+arry[j];
    }
    cout<<"sum of 10 integers with skip the value of index 3 and 5 : "<<sum<<endl;
    cout<<"_______________________________________"<<endl;
    
}