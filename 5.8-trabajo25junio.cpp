#include <iostream>
#include <cmath>

using namespace std;

int main() {
   for (double x = 0; x <= 5; x += 0.5) {
      double y = cos(3 * x) - 2 * x;
      cout << "Para x = " << x << ", y = " << y << "\n";
   }

   return 0;
}
