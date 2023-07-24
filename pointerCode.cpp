//============================================================================
// Name        : CrashCode01.cpp
// Author      : Eclipse
// Version     :Eclipse
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style

// Keyboard Shorcut-> highlight ctrl+/ for comment
// Keyboard Shorcut-> ctrl+\ for OR statement
//============================================================================

#include <iostream>
using namespace std;


int main() {
	cout << "Hello World!!!" << endl;

int *a {nullptr}, *q {nullptr};
int i = 1;

a = new int[4];     //dynamic memory allocation.  a is allocated in size 4 element in the memory
for(q = a; q <= &a[3]; q++)  //iterate q --> 1 2 3 4 elements
	*q = i++;

q = a; //resetting q from the first element.
*++q = 10;  //  ++q increase q then * dereference q. q is --> to second element = 10. (output 1 10 3 4)
// q --> 1 (10) 3 4
a[1] = *++q + 2;  // ++q increase q to second element 3 + 2 = 5. a[1] = 5  (output 1 5 3 4)
// q --> 1 5 (3) 4
a[2] = --*q;  // *q dereference and decrement the element in the a[2] = 2  (output  1 5 2 4)
// q --> 1 5 (2) 4
q--;
//*(q + 1); // *(q + 1) where ever q is pointing. increase +1 next element *(q + 1) --> 1 5 2 (4).
					// --q decrement the pointer q --> 1 (5) 2 4. * dereference then *(q + 1) = (output 1 5 2 5)
// q --> 1 (5) 2 5
*(q + 2) = ++*q + 3; // *(q + 2) where ever q is pointing. increase +2 next element *(q + 2) --> 1 5 2 (5).
// *q dereference the pointer then increment q is 1 (6) 2 5. then increment 6+3 *(q + 2) = (output 1 6 2 9)

for(q = a; q <= &a[3]; q++)
	cout << *q;

delete[] a;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~END CODE~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

int A = 1;
int B = 2;
int C = 3;

int *p1, *p2;
p1 = &A; // p1 = 1
p2 = &C; // p2 = 3

*p1 = (*p2)++;  // p1 --> A = 1 then (*p2) --> C = 3 ++increment then C = 4 output A B C , 3 2 4

p1 = p2;  //p1 --> C = 4 output A B C , 3 2 4

p2 = &B; // p2 --> B = 2

*p1 -= *p2; // *p1 --> C = 4 and *p2 --> B = 2 then C(4) - B(2) = C(2)  output A B C , 3 2 2

++*p2; // *p2 --> B = 2 ++increment then B = 3 output A B C , 3 3 2

*p1 *= *p2; // *p1 --> C = 2 and *p2 --> B = 3 then C(2) * B(3) = C(6)  output A B C , 3 3 6

A = ++*p2**p1;  // *p1 --> C = 6 and *p2 --> B = 3 ++increment then B = 4 * C(6) = A(24) output A B C , 24 3 6

p1 = &A; // p1 --> A = 24

*p2 = *p1 /= *p2;  // *p1 --> A = 24 and *p2 --> B = 4 then A(24) / B(4) = *p2 --> B = 6 and A = 6  output A B C , 6 6 6

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~END CODE~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
	return 0;
}
