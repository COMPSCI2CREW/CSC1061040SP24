#include <iostream>
using namespace std;

int main() {
   int numVals;
   int value;
   int i;

   cin >> numVals;
   
   
   
   int currVal;
   value = 0;
   
   for (i = 0; i <= numVals - 1; ++i) {
      cin >> currVal;
      value += currVal;
      cout << "Amount = " << currVal << endl;
   }


   return 0;
}
