//this is a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of array.

//library
#include<iostream>
using namespace std;


void mean(int a[],int n)
{	
    //varible for mean
    int s=0;
	
	//loop for finding the sum of provided elements
	for (int i=0;i<n;i++)
 	s+=a[i];
	
	//finding mean using float
	float m=float(s)/float(n);
	
	//print mean 
	cout<<"The mean of the elements of array is "<< m<<endl;
}
//declaring function for median 
void median (int a[],int n)
{	int o,t,i,j;
 	
	//lets short the array elements(loop)
   
 	do
 	{	o=0;
		for(i=0;i<(n-1);i++)
   		{	if (a[i]>a[i+1])
    			{ t=a[i];
     			  a[i]=a[i+1];
    			  a[i+1]=t;
     			  o+=1;
			}
		}
	}while(o!=0);
      
	//print median
	//hmare pas 2 cases hai,where there are odd and even numbers hence we use if and else
	if (n%2==0)
   	{	float m=(float(a[n/2])+float (a[(n/2)-1]))/2;
  		cout<<"The median is = "<<m<<endl;
	}
    else
	    cout<<"The median is = "<<a[n/2]<<endl;
}

//declaring function for finding maximum and minimum value of array
void maxormin(int a[],int n)
{ cout<<"maxima in the array is "<<a[n-1]<<endl;
  cout<<"minima in the array is "<<a[0]<<endl;
}

//main function 
int main()
{	int a[10],n;
 	
	//ask user for the limit
	cout<<"How many numbers do you desire the array to contain?"<<endl;
 	cin>>n;
 	
	//ask user for array elements 
	cout<<"Enter array elements "<<endl;
 	for(int i=0;i<n;i++)
  	cin>>a[i];
 	
	// calling mean function 
	mean(a,n);
	//calling median function
	median(a,n);
	//calling maxmin function 
	maxormin(a,n);
	
	return 0;
}
