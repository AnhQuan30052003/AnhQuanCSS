#include <iostream>
#include <fstream>
using namespace std;

int main() {
  system("cls");

  string fileName = "../file-module/button.css";
  fstream file(fileName, ios::out);

  int numberLoop = 100;
  int value = 1;
  for (short i = 1; i <= numberLoop; i++) {
    file << ".fs-" << value << "{ font-size: " << value << "px; }" << endl;
    value += 1;
  }

  cout << "Build successfull.";
}