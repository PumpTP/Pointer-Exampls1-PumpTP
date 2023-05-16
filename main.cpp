#define SIZE 1000
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

int main (void){
  char *pa, *pb, temp;
  char a[SIZE]; 
  int i, u, y;
  cout << "Input a string : ";
  cin >> a;
  int len = strlen(a);
  pa = &a[0];
  
  cout << "Original: ";
  
  for (i = 0; i < len; i++, pa++){
    cout << setw(3) << *pa << " ";
  }
  cout << endl;
  pa = &a[0]; 
  pb = &a[len - 1];
  cout << "Reverse: ";
  
  for (u = 0; u < len / 2 ; u++) {
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    pa++; pb--;
  }

  pa = &a[0];
  for (y = 0; y < len; y++,pa++){
    cout<<setw(3)<<*pa<<"  ";
  }
  cout<<endl;
return 0;
}