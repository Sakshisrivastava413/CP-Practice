#include <iostream> 
using namespace std; 

int decToBinary(int n) 
{ 
  int c = 0;
  for (int i = 31; i >= 0; i--) { 
    int k = n >> i; 
    if (k & 1) 
      c++; 
  }
    return c;
} 

int main() 
{ 
    int n = 32; 
    cout << decToBinary(n) << endl; 
} 
