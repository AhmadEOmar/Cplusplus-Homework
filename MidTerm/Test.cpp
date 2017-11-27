#include <cstdlib>
#include <iostream>
using namespace std;

void someFunct(int , int );

         int main( )

     {

           int x = 5;

           int y = 8;

           someFunct(x, y);

           cout << y << endl; // (1)

     }

      void someFunct(int  a, int  b)

     {

            a = 2;

            b = a + 5;

      }
