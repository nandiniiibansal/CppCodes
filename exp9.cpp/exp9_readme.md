# AIM
To use pointers and access elements of array and find address of different data types.

# Software Used
VS Code

# Problem Statement

1.) Write a c++ program to initialize pointers of different data types and print the required values.

2.) Write a c++ program to access elements of array using pointer.

3.) Write a c++ program to access elements of array without using pointer variable.

# Theory

Pointers are symbolic representations of addresses. They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures. Iterating over elements in arrays or other data structures is one of the main use of pointers. 

# Problem Codes

```javascript
 //INITIALIZE POINTERS OF DIFFERENT DATA TYPES

//INT
 #include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr;
    ptr=&a;
   cout<< "The value pointed by *ptr is: "<<*ptr << endl;
    cout << "The value in b is: " <<a << endl;
    cout << "The value in pointer variable ptr is: "<<(void*)ptr << endl;

    cout << "the address of variable b is: "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;
}

//FLOAT
 #include <iostream>
using namespace std;
int main()
{
    float a = 'A';
    float *ptr;
    ptr=&a;
     cout<< "The value pointed by *ptr is: "<<*ptr << endl;
    cout << "The value in b is: " <<a << endl;
    cout << "The value in pointer variable ptr is: "<<(void*)ptr << endl;

    cout << "the address of variable b is: "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;
}

//CHAR
#include<iostream>
using namespace std;
int main()
{
    char a = 'c'; 
    

    char *ptr;

    ptr = &a;

    cout<< "The value pointed by *ptr is"<<*ptr << endl;
    cout << "The value in b is" <<a << endl;
    cout << "The value in pointer variable ptr is"<<(void*)ptr << endl;

    cout << "the address of variable b is "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;

    
}


//ACCESS ELEMENTS OF ARRAY USING POINTER.

#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int a[5] = { 1,2,4,8,9};
    ptr = &a[0];
    int i;
    for(i=0 ; i<5 ; i++)
    {
        cout << "Element "<< i+1 <<" "<<"="<<" "<<*ptr << endl;
        ptr ++;

    }
}

//ACCESS ELEMENTS OF ARRAY WITHOUT USING POINTER VARIABLE.

#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int a[5] = { 1,2,4,8,9};
    ptr = &a[0];
    int i;
    for(i=0 ; i<5 ; i++)
    {
        cout << "Element "<< i+1 <<" "<<"="<<" "<<*(a+i) << endl;
        ptr ++;

    }
}


```

# Output:
1) ![image](https://github.com/user-attachments/assets/7245ff59-9b99-4a35-8379-aa839a3574a3)

2) ![image](https://github.com/user-attachments/assets/6bd6409d-abb0-433c-932b-cdc5afc911ac)

3) ![image](https://github.com/user-attachments/assets/701eaf3d-1313-43f1-9eb0-6c3736084c9e)

4) ![image](https://github.com/user-attachments/assets/4ae9f407-4f64-42b2-84dc-4da0e87fec44)

5) ![image](https://github.com/user-attachments/assets/948d67cc-625f-46ef-923d-8852cd844142)


# Conclusion:
We learnt to initialize pointers of different data types.
We learnt to access elements of array using pointers and without pointers variable.
