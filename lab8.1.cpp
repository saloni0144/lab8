//lab 8 q.1
//library 
#include<iostream>
using namespace std;

//assigning values to array using given functions
int * func(int arr[]){
	// value to array
	for(int i = 0 ; i < 10 ; i++){
		arr[i] = i + 1;
	}
	return arr;
}


//main function
int main(){
	
int arr[10] = {10,20,30,40,50};
	//printing the sum
	cout<<"The answer of 0";
	//lets take the values from the arrays
	int *p = func(arr);
		for(int i = 0 ; i < 10 ; i++){
			cout <<" + "<< *(p+i);
			}
	// sums value to array
	int x = 0;
	for(int i = 0 ; i < 10 ; i++){
		x = x + arr[i];
	}
	//printing the final value
	cout << " is equal to "<<x << endl;
return 0;
}
