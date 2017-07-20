# Array3
CS341 Homework 2

"
My C++ program Array3.cpp demonstrates how to use the new operator to create a dynamic array in the program’s Heap.  The program creates and populates its dynamic array five int elements at a time by doing internal calculations, for a total of ten elements.  
I need another program which does this kind of creation and population but which does it only one element at a time for each input data to create an array of different length for each run of the program.  However, there will be five major differences, as follows: 
(1)	The program will not create its own data.  Instead, it will use the cin >> syntax to accept one integer at a time until the user enters the keyboard EOF indicator, i.e. ctrl-z under Windows. 
(2)	The main work of this program will be done in a for loop or a while loop, but Not in a “forever” loop.
(3)	The user input must be tested using the conditional  !cin.eof() && cin.good()   to test whether or not the user had terminated his input and if not, it will test whether or not the data was valid.  If either test proves false the program will display the user’s array and then terminate.  However, if the data is not valid i.e. cin.good() produces a value of false, the program will also display an error message before it terminates.
(4)	The program will create a series of longer and longer arrays to contain all previous elements and the current incoming one.  Also, the program will delete the previous version of the array after completing the current version.
(5)	The program will test if Heap memory is exhausted immediately after each usage of the new operator.  If the new operator returns a NULL value, the Heap has no more memory to devote the program.  In the likelihood that this event might occur, the program should go to display an error message before it terminates.
It may seem humanly impossible to have the Heap entirely used up on the basis of human input.  But, we don’t know how the program will be run.  As one mischievous example, the user may build execution of the program into a .bat file which churns out millions of random numbers and feeds them to the program. In this kind of environment, the program must terminate when Heap space is no longer available.  It must not just crash with an error message such as “Insufficient system resources”.
"
