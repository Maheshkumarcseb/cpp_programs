// #include<bits/stdc++.h>
/*
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={2,4,1,3,76,4,56};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    // sort(arr.begin(),arr.end());
    if(binary_search(arr, arr + n, 76))
    {
        cout<<"element found";
    }
    else
    {
        cout<<"element not found";
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

*/



/*
#include<iostream>
#include<vector>        // for using the begin and end function
#include <algorithm>    //for using the sort function
#include <numeric>      //For accumulate operation
using namespace std;
int main()
{
    int arr[]={2,4,1,3,76,4,56};
    int n=sizeof(arr)/sizeof(arr[0]);    //finding the size of the array
    vector<int> vect(arr,arr+n);  //converting array into vector
    sort(vect.begin(),vect.end());   //sorting the vector in ascending order.
    
   
    for(int i=0;i<n;i++)
    {
        cout<<vect[i]<<" ";
    }
    cout << endl;
    sort(vect.begin(),vect.end(),greater<int>());  //sorting the vector in descending order.
    for(int i=0;i<n;i++)
    {
        cout<<vect[i]<<" ";
    }
    cout << endl;
     reverse(vect.begin(),vect.end());
     for(int i=0;i<n;i++)
    {
        cout<<vect[i]<<" ";
    }
    cout << endl;
    cout<<"maximum element is:";
    cout << *max_element(vect.begin(), vect.end());
    cout<<endl;

    cout<<"minimum element is:";
    cout << *min_element(vect.begin(), vect.end());
     cout<<endl;

    cout<<"the sum of element of vector is:";
    cout << accumulate(vect.begin(), vect.end(), 0);
    cout<<endl;

    cout<<"the count of element 4 is:";
    cout << count(vect.begin(), vect.end(), 4);
    cout<<endl;

    find(vect.begin(), vect.end(),5) != vect.end()?
    cout << "\nElement found":cout << "\nElement not found";
    return 0;
}
*/





/*
// C++ code to demonstrate working of all_of()
#include<iostream>
#include<algorithm> // for all_of()
#include<numeric>  // for using iota function
int main()
{
    using namespace std;
	// Initializing array
	int ar[6] = {1, 2, 3, 4, 5, -6};
    int n=sizeof(ar)/sizeof(ar[0]);

	// Checking if all elements are positive
	all_of(ar, ar+n, [](int x) { return x>0; })?
		cout << "All are positive elements" :
		cout << "All are not positive elements";
        cout<<endl;
        
        // Checking if any element is negative
        any_of(ar, ar+n, [](int x){ return x<0; })?
          cout << "There exists a negative element" :
          cout << "All are positive elements";
          cout<<endl;

          // Declaring second array
            int ar1[n];
 
            // Using copy_n() to copy contents
            copy_n(ar, n, ar1);
 
    // Displaying the copied array
    cout << "The new array after copying is : ";
    for (int i=0; i<n ; i++)
       cout << ar1[i] << " ";
        cout<<endl;



        // Initializing array with 0 values
    int ar2[6] =  {0};
 
    // Using iota() to assign values
    iota(ar2, ar2+6, 20);
 
    // Displaying the new array
    cout << "The new array after assigning values is : ";
    for (int i=0; i<6 ; i++)
       cout << ar2[i] << " ";
 

	return 0;

}

*/



// C++ code to demonstrate the working of 
// partition() and is_partitioned()
#include<iostream>
#include<algorithm> // for partition algorithm
#include<vector> // for vector
using namespace std;
int main()
{
	// Initializing vector
	vector<int> vect = { 2, 1, 5, 6, 8, 7 };
	
	// Checking if vector is partitioned 
	// using is_partitioned()
	is_partitioned(vect.begin(), vect.end(), [](int x)
	{
		return x%2==0;
		
	})?
	
	cout << "Vector is partitioned":
	cout << "Vector is not partitioned";
	cout << endl;
	
	// partitioning vector using partition()
	partition(vect.begin(), vect.end(), [](int x)
	{
		return x%2==0;
		
	});
	
	// Checking if vector is partitioned 
	// using is_partitioned()
	is_partitioned(vect.begin(), vect.end(), [](int x)
	{
		return x%2==0;
		
	})?
	
	cout << "Now, vector is partitioned after partition operation":
	cout << "Vector is still not partitioned after partition operation";
	cout << endl;
	
	// Displaying partitioned Vector
	cout << "The partitioned vector is : ";
	for (int &x : vect) cout << x << " ";


    // partitioning vector using stable_partition()
    // in sorted order
    stable_partition(vect.begin(), vect.end(), [](int x)
    {
        return x%2 == 0;        
    });
     
    // Displaying partitioned Vector
    cout << "The partitioned vector is : ";
    for (int &x : vect) cout << x << " ";
    cout << endl;
     
    // Declaring iterator
    vector<int>::iterator it1;
     
    // using partition_point() to get ending position of partition
    auto it = partition_point(vect.begin(), vect.end(), [](int x)
    {
        return x%2==0;
    });
     
    // Displaying partitioned Vector
    cout << "The vector elements returning true for condition are : ";
    for ( it1= vect.begin(); it1!=it; it1++)
    cout << *it1 << " ";
    cout << endl;
	
	return 0;
	
}

