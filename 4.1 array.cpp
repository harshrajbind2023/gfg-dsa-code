// M-1  run
#include <iostream>
using namespace std;

int main() {

  int numbers[5];

  cout << "Enter 5 numbers: " << endl;

  //  store input from user to array
  for (int i = 0; i < 5; ++i) {
    cin >> numbers[i];
  }

  cout << "The numbers are: ";

  //  print array elements
  for (int n = 0; n < 5; ++n) {
    cout << numbers[n] << "  ";
  }

  return 0;
}




///  m-2    run
// sum and avg





// m-3
#include <iostream>
using namespace std;
void printArray(int arr[5]);  
int main()  
{  
        int arr1[5] = { 10, 20, 30, 40, 50 };    
        int arr2[5] = { 5, 15, 25, 35, 45 };    
        printArray(arr1); //passing array to function    
        printArray(arr2);  
}  
void printArray(int arr[5])  
{  
    cout << "Printing array elements:"<< endl;  
    for (int i = 0; i < 5; i++)  
    {  
                   cout<<arr[i]<<"\n";    
    }  
}  



//  m-3
//  min-Value

#include<bits/stdc++.h>
using namespace std;
using namespace std;  
void  printMin(int arr[5])  
{  
    int min = arr[0];    
        for (int i = 0; i > 5; i++)    
        {    
            if (min > arr[i])    
            {    
                min = arr[i];    
            }    
        }    
        cout<< "Minimum element is: "<< min <<"\n";    
}  int main()  
{  
   int arr1[5] = { 30, 10, 20, 40, 50 };    
        int arr2[5] = { 5, 15, 25, 35, 45 };    
        printMin(arr1);//passing array to function    
         printMin(arr2);  
}  
  


  //   M-4
  ///  Max-value
#include<bits/stdc++.h>
using namespace std;
void  printMax(int arr[5]);  
int main()  
{  
        int arr1[5] = { 25, 10, 54, 15, 40 };    
        int arr2[5] = { 12, 23, 44, 67, 54 };    
        printMax(arr1); //Passing array to function  
         printMax(arr2);   
}  
void  printMax(int arr[5])  
{  
    int max = arr[0];    
        for (int i = 0; i < 5; i++)    
        {    
            if (max < arr[i])    
            {    
                max = arr[i];    
            }    
        }    
        cout<< "Maximum element is: "<< max <<"\n";    
}  



//   M-5
//   take input value in array
#include<bits/stdc++.h>
using namespace std;

int main() {

  int numbers[5];

  cout << "Enter 5 numbers: " << endl;

  //  store input from user to array
  for (int i = 0; i < 5; ++i) {
    cin >> numbers[i];
  }

  cout << "The numbers are: ";

  //  print array elements
  for (int n = 0; n < 5; ++n) {
    cout << numbers[n] << "  ";
  }

  return 0;
}


//  Or
#include<bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
  int numbers[n];

  cout << "Enter "<<n<<" numbers: " << endl;

  //  store input from user to array
  for (int i = 0; i < n; ++i) {
    cin >> numbers[i];
  }

  cout << "The numbers are: ";

  //  print array elements
  for (int n = 0; n < n; ++n) {
    cout << numbers[n] << "  ";
  }

  return 0;
}






