// C++ code to demonstrate the working of iterator, begin() and end(), advance()
#include<iostream>
#include<iterator>
#include<vector>
using namespace std;

int main(){
    vector<int> ar = { 1, 2, 3, 4, 5, 6 };

    //----------------------------------------------------------------
    
    // Declaring iterator to a vector
    vector<int>::iterator ptr;

    // Displaying vector elements using begin() and end()
    cout << "The vector elements are : ";
    for (ptr = ar.begin(); ptr < ar.end(); ptr++)
        cout << *ptr << " ";
    
    cout << endl;
    //----------------------------------------------------------------
    
    // Declaring iterator to a vector
    vector<int>::iterator ptr2 = ar.begin();

    // Using advance() to increment iterator position points to 4
    advance(ptr2, 3);

    // Displaying iterator position
    cout << "The position of iterator after advancing is : " << *ptr2 << endl;
    
    //----------------------------------------------------------------

    // Declaring iterators to a vector
    vector<int>::iterator ptr3 = ar.begin();
    vector<int>::iterator ftr = ar.end();
    
    // Using next() to return new iterator points to 2
    auto it = next(ptr3, 2);

    // Using prev() to return new iterator points to 5
    auto it1 = prev(ftr, 2);

    // Displaying iterator position
    cout << endl << "The position of new iterator using next() is : " << *it << endl;

    // Displaying iterator position
    cout << endl << "The position of new iterator using prev() is : " << *it1 << endl;

    //----------------------------------------------------------------

    vector<int> ar1 = {1, 2, 3, 4, 5};
    vector<int> ar2 = {10, 20, 30};

    // Declaring iterator to a vector
	vector<int>::iterator ptr4 = ar1.begin();
	
	// Using advance to set position
	advance(ptr4, 3);
	
	// Copying 1 vector elements in other using inserter()
	// Inserts ar2 after 3rd position in ar1
	copy(ar2.begin(), ar2.end(), inserter(ar1, ptr4));
	
	// Displaying new vector elements
	cout << "The new vector after inserting elements is : " << endl;
	for (int &x : ar1)
		cout << x << " ";
    
    cout << endl;
    
    
    
    return 0;
}

