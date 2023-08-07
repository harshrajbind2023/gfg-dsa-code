//  M-1
//  Find the largest three elements in an array


#include<bits/stdc++.h>
using namespace std;


void three_largest(int arr[], int arr_size)
  {
   int i, first, second, third;
  
    if (arr_size < 3)
    {
        cout << "Invalid Input";
    }
  
    third = first = second = INT_MIN;
    for (i = 0; i < arr_size ; i ++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
         else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
  
        else if (arr[i] > third)
            third = arr[i];
    }
  
      cout << "\nThree largest elements are: " <<first <<", "<< second <<", "<< third;
}

int main()
{
    int nums[] = {7, 12, 9, 15, 19, 32, 56, 70};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
   three_largest(nums, n);
    return 0;
}




//  M-2
// second largest element
#include<bits/stdc++.h>
using namespace std;

void second_largest(int nums[], int arr_size)
  {
   int i, first_element, second_element;
 
    /* There should be atleast two elements */
    if (arr_size < 2)
    {
        cout<< " Invalid Input ";
        return;
    }
 
    first_element = second_element = INT_MIN;
    for (i = 0; i < arr_size ; i ++)
    {
  
        if (nums[i] > first_element)
        {
            second_element = first_element;
            first_element = nums[i];
        }
 

        else if (nums[i] > second_element && nums[i] != first_element)
        {
            second_element = nums[i];
        }
    }
    if (second_element == INT_MIN)
     {
        cout<< "No second largest element";
     }
    else
     { 
        cout<< "\nThe second largest element is: " <<second_element;
     }
}



int main()
{
    int nums[] = {7, 12, 9, 15, 19, 32, 56, 70};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
   second_largest(nums, n);
    return 0;
}



//  M-3
//        k largest elements
#include<bits/stdc++.h>
using namespace std;

 void kLargest(int nums[], int n, int k)
{
   sort(nums, nums+n, greater<int>());
    cout << "\nLargest " << k << " Elements: ";
    for (int i = 0; i < k; i++)
        cout << nums[i] << " ";
}
 
int main()
{
    int nums[] = {4, 5, 9, 12, 9, 22, 45, 7};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    int k = 4;
    kLargest(nums, n, k);
}

//  M-4 
//          find the second smallest elements
#include<bits/stdc++.h>
using namespace std;
 
int find_Second_Smallest(int array_num[], int n) {

  int smallest_num, second_smallest_num;

  if (array_num[0] < array_num[1]) {
    smallest_num = array_num[0];
    second_smallest_num = array_num[1];
  } 
  else {
    smallest_num = array_num[1];
    second_smallest_num = array_num[0];
  }


for (int i = 0; i < n; i++) {

if (smallest_num > array_num[i]) {
second_smallest_num = smallest_num;
smallest_num = array_num[i];
} 
else if (array_num[i] < second_smallest_num && array_num[i] > smallest_num) {
second_smallest_num = array_num[i];
}

}

  return second_smallest_num;
  
}



int main() {
  int n = 7;

  int array_num[7] = {
    5,
    6,
    7,
    2,
    3,
    4,
    12
  };

  int s = sizeof(array_num) / sizeof(array_num[0]);

    cout << "Original array: ";

    for (int i=0; i < s; i++)
    cout << array_num[i] <<" ";

  int second_smallest_num = find_Second_Smallest(array_num, n);

  cout<<"\nSecond smallest number: "<<second_smallest_num;

  return 0;
}



//  M-5 
//    most frequent element in an array
#include<bits/stdc++.h>
using namespace std;

void most_occurred_number(int nums[], int size)
{

  int max_count = 0;
  
  cout << "\nMost occurred number: ";
  for (int i=0; i<size; i++)
  {
   int count=1;
   for (int j=i+1;j<size;j++)
       if (nums[i]==nums[j])
           count++;
   if (count>max_count)
      max_count = count;
  }

  for (int i=0;i<size;i++)
  {
   int count=1;
   for (int j=i+1;j<size;j++)
       if (nums[i]==nums[j])
           count++;
   if (count==max_count)
       cout << nums[i] << endl;
  }
 }
 
int main()
{
    int nums[] = {4, 5, 9, 12, 9, 22, 45, 7};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    most_occurred_number(nums, n);
}




//  M-6
//              next greater element of every element 
#include<iostream>
using namespace std;

void next_greater(int nums[], int n)
{
    stack<int> data_stack;
 
    data_stack.push(nums[0]);
 
   for (int i=1; i<n; i++)
    {
        int next_element = nums[i];
 
        if (data_stack.empty() == false)
        {
            int array_element = data_stack.top();
            data_stack.pop();
 
         while (array_element < next_element)
            {
                cout << array_element << ": " << next_element
                     << endl;
                if (data_stack.empty() == true)
                   break;
                array_element = data_stack.top();
                data_stack.pop();
            }
 
           if (array_element > next_element)
                data_stack.push(array_element);
           }
 
          data_stack.push(next_element);
         }
 
     } 
int main()
{
    int nums[] = {4, 1, 5, 9, 12, 9, 22, 45, 7};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    cout << "\nNext Greater Element:\n";
    next_greater(nums, n);
}
// Original array: 4 1 5 9 12 9 22 45 7
// Next Greater Element:
// 1: 5
// 4: 5
// 5: 9
// 9: 12
// 9: 22
// 12: 22
// 22: 45






//   M-7   
//                   Sort a given unsorted array of integers
#include<iostream>
#include<algorithm>
using namespace std;
 
void swap_elements(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 
void array_wave(int nums[], int n)
{
    sort(nums, nums+n);
 
    for (int i=0; i<n-1; i += 2)
        swap_elements(&nums[i], &nums[i+1]);
}
 
int main()
{
    int nums[] = {4, 5, 9, 12, 9, 22, 45, 7};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    array_wave(nums, n);
    cout << "\nWave form of the said array: ";
    for (int i=0; i<n; i++)
       cout << nums[i] << " ";
    return 0;
}
// array[0] >= array[1] <= array[2] >= array[3] <= array[4] >= . . . .
// output
// Original array: 4 5 9 12 9 22 45 7 
// Wave form of the said array: 5 4 9 7 12 9 45 22 





//  M-8
//              smallest element missing from a sorted array.
// Original array: 0 1 3 4 5 6 7 8 10 
// Smallest missing element is 2

#include<iostream>
#include<algorithm>
using namespace std;

int smalest_missing_num(int nums[], int start_pos, int end_pos)
{
    if (start_pos  > end_pos)
        return end_pos + 1;
 
    if (start_pos != nums[start_pos])
        return start_pos;
 
    int mid = (start_pos + end_pos) / 2;
 
    if (nums[mid] == mid)
        return smalest_missing_num(nums, mid + 1, end_pos);
 
    return smalest_missing_num(nums, start_pos, mid);
}
 
int main()
{
    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
    int result;
	int n = sizeof(nums)/sizeof(nums[0]);
	cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    result = smalest_missing_num(nums, 0, n-1);
    cout << "\nSmallest missing element is " << result;
  return 0;     
}
   



//         M-9
 //  Separate even and odd numbers of an array
 //output
 // Original array: 0 1 3 4 5 6 7 8 10 
 //Array after divided: 0 10 8 4 6 5 7 3 1    
#include<iostream>
using namespace std;
 
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
void segregateEvenOdd(int nums[], int size)
{
    int left_num = 0, right_num = size-1;
    while (left_num < right_num)
    {
         while (nums[left_num]%2 == 0 && left_num < right_num)
            left_num++;
 
        while (nums[right_num]%2 == 1 && left_num < right_num)
            right_num--;
 
        if (left_num < right_num)
        {
            swap(&nums[left_num], &nums[right_num]);
            left_num++;
            right_num--;
        }
    }
}
 
int main()
{
    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
    int n = sizeof(nums)/sizeof(nums[0]);
   	cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    segregateEvenOdd(nums, n);
 
    printf("\nArray after divided: ");
      for (int i=0; i < n; i++) 
      cout << nums[i] <<" ";
        return 0;
     }




//  M-10
//  Separate 0s and 1s from a given array
//output
// Original array: 0 1 0 0 1 1 1 0 1 0 
// Array after divided: 0 0 0 0 0 1 1 1 1 1 
#include<iostream>
using namespace std;
 

void segregateEvenOdd(int nums[], int n)
{
    int ctr = 0;  
 
    for (int i = 0; i < n; i++) {
        if (nums[i] == 0)
            ctr++;
    }
 
   for (int i = 0; i < ctr; i++)
        nums[i] = 0;
 
   for (int i = ctr; i < n; i++)
        nums[i] = 1;
}
 
int main()
{
    int nums[] = {0, 1, 0, 0 , 1, 1, 1, 0, 1, 0};
    int n = sizeof(nums)/sizeof(nums[0]);
   	cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    segregateEvenOdd(nums, n);
 
    printf("\nArray after divided: ");
      for (int i=0; i < n; i++) 
      cout << nums[i] <<" ";
        return 0;     
}



//  M-11
// rearrange a given sorted array 
// Original array: 0 1 3 4 5 6 7 8 10 
// Array elements after rearranging: 10 0 8 1 7 3 6 4 5
#include <iostream>
using namespace std;
 
void rearrange_max_min(int nums[], int n)
{
    int temp[n];
    int small_num=0, large_num=n-1;
    int result = true;
 
    for (int i=0; i<n; i++)
    {
        if (result)
            temp[i] = nums[large_num--];
        else
            temp[i] = nums[small_num++];
 
        result = !result;
    }
 
     for (int i=0; i<n; i++)
        nums[i] = temp[i];
}
 
int main()
{
    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10}; 
    int n = sizeof(nums)/sizeof(nums[0]);
   	cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    rearrange_max_min(nums, n);
 
    printf("\nArray elements after rearranging: ");
      for (int i=0; i < n; i++) 
      cout << nums[i] <<" ";
        return 0;
     
}




//