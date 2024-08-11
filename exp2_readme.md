# AIM:
To learn about different data types and their size and demonstration of storage classes.

# Software Used:
VS Code

# Problem Statement:
1.) Write a program to show size of different data types.
2.) Write a program for static class.

# Theory:
 
| Data type  | Size (bytes) |
| ------------- | ------------- |
|int	  | 4  |
| float  | 4 |
|string| 24 |
|char| 1 |
|short int| 2|

 _'size of'_ function is used to get the size of data 

 # Program Codes:
 ```javascript
//Size
#include<iostream>
using namespace std;
int main()
{ 
cout << "Size of Integer is: "   << sizeof(int) <<" bytes"<< endl;
cout << "Size of Float is: "   << sizeof(float) <<" bytes"<< endl;
cout << "Size of String is: "   << sizeof(string) <<" bytes"<< endl;
cout << "Size of Character is: "   << sizeof(char) <<" bytes"<< endl;
cout << "Size of Short Integer is: "   << sizeof(short int) <<" bytes"<< endl;
}

//Static
#include<iostream>
using namespace std;
void staticExample(){
int z = 0;
z++;
cout<<"the value of z is: "<<z<<endl;
}
int main(){
staticExample();
staticExample();
return 0;
}
```

# Conclusion:
We learnt to use _'size of'_ function & static class.

We learnt about different data types and their use.
