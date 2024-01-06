#include <iostream>
#include <fstream>
using namespace std;

// void TaoClass();

int main() {
  system("cls");

  string pathFile, fileName;
  int soLanLap, giaTriBatDau;
  string css, tenClass, thuocTinh, donVi, nhanManh;

  fileName = "flex.css";
  pathFile = "../module/" + fileName;
  auto moFileDe = ios::app;

  giaTriBatDau = 1;
  soLanLap = 50;

  tenClass = ".gap";
  thuocTinh = "gap";
  donVi = "px";
  nhanManh = ""; // !important

  fstream file(pathFile, moFileDe);
  for (short i = 1; i <= soLanLap; i++) {
    css = tenClass + "-" + to_string(i) + " { " + thuocTinh + ": " + to_string(i) + donVi + nhanManh + "; }";
    file << css << endl;
    giaTriBatDau += 1;
  }

  cout << "Build successfull.";
}