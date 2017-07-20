//
//  main.cpp
//  array3
//
//  Created by Jae Won Hyun on 9/24/16.
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int main ()
{
    // declare count as 0 - the number of contents in the array
    int count = 0;
    
    // alert users about the purpose of the program
    cout << "This program takes one positive integer at a time and output the list of integers until eof\n";
    
    // number that the user will input into the array
    int number;
    
    // while it is not the end of the file
    while(!cin.eof() && cin.good())
    {
        // declare pointers to dynamically allocated arrays
        int *arr1;
        int *bigger_array;
        
        // ask user for number
        cout << "Please enter in your number: ";
        
        // intake number
        cin>>number;
        
        // if that number is not the end of the file
        if(!cin.eof() && cin.good())
        {
            // increase count
            count++;
            
            // declare a dynamically allocated array arr1
            arr1 = new int[count];
            
            if(arr1 != NULL)
            {
                // if count is bigger than 1
                if(count > 1)
                {
                    // copy contents of bigger_array into arr1
                    copy(bigger_array, bigger_array + count, arr1);
                    
                    // delete bigger_array
                    delete [] bigger_array;
                    
                    bigger_array = arr1;
                }
                
                // put the number into the right most allocated space
                for(int i = count - 1; i < count; i++)
                {
                    arr1[i] = number;
                }
                
                // print out the contents in arr1
                cout << "The contents in your array are: \n";
                for (int j = 0; j < count; j++)
                {
                    cout << arr1[j] <<"\n";
                }
                
                // declare a dyamically allocated array bigger_array
                bigger_array = new int[count];
                
                // if there is enough space for bigger_array
                if(bigger_array != NULL)
                {
                    // copy arr1 into bigger_array
                    copy(arr1, arr1 + count, bigger_array);
                    
                    // delete arr1
                    delete [] arr1;
                    
                    // pointer arr1 = bigger_array
                    arr1 = bigger_array;
                }
                // if not throw error
                else
                {
                    cout << "No more space. Good bye. \n" << endl;
                    return 1;
                }

            }
            // if not throw error
            else
            {
                cout<<"No more space. Good bye. \n" << endl;
                return 1;
            }
        }
        // if the number is end of the file, say good bye and delete.
        else
        {
            cout << "Good bye. \n" <<endl;
            delete [] arr1;
        }

    }
    
    return 0;

}
