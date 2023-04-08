#include <iostream>
using namespace std;
  void forl() {
  for (int i=0; i<10; i++) {
    for (int j=0; j<10; j++){
      cout << i*j << " ";
    }
  } 
  }
int main () {
  forl();
  return 0;
}