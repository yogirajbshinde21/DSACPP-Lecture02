#include<iostream>
using namespace std;

int main(){
/*


/* BASIC INPUR OUTPUT */
/*
    int a = 234;

    cout<<a<<endl;

    char b = 'v'; // char contains only single character.
    //        ^
    //For 'a' value, compilor gets confused that how it will have first int and then char value. so it will give error.
    //To avoid this error, i used new variable and declared it as 'b'.
    
    cout<<b<<endl;

    bool bl = true;
    cout<<bl<<endl;

    float f = 1.2;
    cout<<f<<endl;

    double db = 3.33;
    cout<<db<<endl;

    int size = sizeof(a);
    cout<<sizeof(a)<<endl;

    // Or you can use below code to find out size of data type.

    int size1 = sizeof(a);
    cout<<"Size of a is :"<<size1<<endl;



/* TYPE CASTING */
/*
//Now we will learn Type casting as shown below.
//In typecasting, you can convert any data type to any other data type.
     
     int a = 'a';
     cout<<a<<endl;

     char ch = 98;
     cout<<ch<<endl;

     char ch1 = 123456; 
     //It will show error because it will exceeds the valid range of char datatype i.e.-128 to 127.
     //It will print '@' because 123456 % 256(i.e.2^8 that is possible range of char data type including 0) = 64 which is ASCII code of @.
     cout<<ch1<<endl;
*/



/* UNSIGNED & SIGNED NEGATIVE NUMBERS STORING*/
   /*  unsigned int a = 112;
     cout<<a<<endl;
     //output:112
     //'Unsigned datatype' means it will store only positive values, gives errors for negative values.
     
     unsigned int a1 = -112;
     cout<<a1<<endl;
     //here if you give any -ve value to unsigned integer, it will output the big number --->4294967184 in our case.
     //it is because first bit of any -ve number is 1. so where was 0 there will be 1 at every bits.
     //so number will become huge.

     // TO AVOID THIS ERROR :
     int a2 = -112; //  <-- By defualt, it is signed integer.
     cout<<a2<<endl;
      //'Signed datatype' means it can store positive to negative whole numbers.
*/



    /*OPERATORS*/
/*
   int a=2/5;
   cout<<a<<endl;

   int a1 = 2.0/5;
   cout<<a1<<endl;

   cout<<2.0/5<<endl;

   float a2 = 2.0/5;
   cout<<a2<<endl;

*/
/*
    int a =2;
    int b =3;

    bool first = a==b;
    cout<<first<<endl; 
    //output is 0, means false.

    bool second = a<=b;
    cout<<second<<endl; 
    //output is 1, means true.

    bool third = a>=b;
    cout<<third<<endl; 
    //output is 0, means false.

    bool fourth = a!=b;
    cout<<fourth<<endl; 
    //output is 1, means true.

*/

/*

      //HOMEWORK

    //Typecasting which was not shown in the course:
    float a = 2.576;
    int b = int (a);
    cout<<b<<endl;
    //output : 2

*/










}