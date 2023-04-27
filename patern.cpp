#include <iostream>
using namespace std;
void solve( int n ){
   int i, j;
   for( i = 1; i <= n; i++ ) {
      for( j = 1; j <= n; j++ ) {
         if( i == 1 || i == n ) {
            cout << "* ";
         } else if( j == 1 || j == n ) {
            cout << "* ";
         } else {
            cout << "  ";
         }
      }
      cout << endl;
   }
}
int main(){
   int n = 5;
   cout << "Hollow Square Star Pattern of " << n << " lines:" << endl;
   solve( n );
}