#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

/*
Notes:
Mas Required ang paggamit ng Vector sa paggawa ng multi dimensional value.
at paggawa ng Algorithms dahilan ng Dynamic size, Memory management.

Ang ranged-based for loop ay ginagamit kapag kailangan nating mag-iterate sa mga elemento ng koleksyon at 
hindi natin kailangang malaman ang index ng mga elemento. 
Ito ay mas simple, mas malinaw na syntax, at 
nagbibigay-daan sa atin na mas ma-focus sa pagproseso ng mga elemento mismo.
*/
//functions Prototype

void callFunc(double a, double b);
void callFunc1(double *ptr);
double callFunc2(double *c,double *d);  //pointers return
double callFunc3(double e,double f);
void callFuncv(vector<double>& vect, vector<double>* vect1);
void callfuncarr(double arr[], int size);



//Function Definition

void callFunc(double a, double b){
   double z{0};
z = a+b;
cout << z << endl;
}

void callFunc1(double *ptr){ 
*ptr = 25;   //pointers return modify value.

}

double callFunc2(double *c,double *d){    //pointers return
double result {0};
   return result = *c * *d;
}

double callFunc3(double e,double f){    // return value
   double result {0};  

   return result = e + f;
}

void callFuncv(vector<double>& vect,vector<double>* vect1){    
for(int i = 0; i < vect.size(); i++){        //vector using reference parameter
   cout << vect[i] << " ";
}
 cout << "using vector parameter reference" << endl;
for(int i = 0; i < (*vect1).size(); i++){       //vector using pointers
   cout << (*vect1)[i] << " " << endl;  
}
cout << "using vector pointer" << endl;
}

void callfuncarr(double arr[],int size){
for(int i = 0;i < size;i++){
   cout << arr[i];
}
}

     
int main(){

cout << "hello world\n";

double score {10};
double Points {13};
double value {5};
double *ptr = &value;  //pointers declaration
double *ptr1 = &score;
callFunc(score,Points);
callFunc1(ptr);
double result = callFunc2(ptr,ptr1);
cout << *ptr << endl;
cout << result << endl;
double z = callFunc3(score,Points);
cout << z << endl;
double arr[3]  {1,2,3};     //array  declaration
int n = sizeof(arr) / sizeof(arr[0]);
vector<double>Myvector  {1,2,3,4,5};  //vector delaration

callFuncv(Myvector, &Myvector);

callfuncarr(arr, n);


   return 0;
}
