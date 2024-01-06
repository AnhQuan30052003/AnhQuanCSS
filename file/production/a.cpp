#include <iostream>
#include <fstream>
using namespace std;

int main() {
  system("cls");

  string pathFile, fileName, css, tenClass, thuocTinh, donVi, nhanManh, am;
  int soLanLap, giaTriBatDau;

  fileName = "position.css";
  pathFile = "../module/" + fileName;
  auto moFileDe = ios::app;

  giaTriBatDau = 1;
  soLanLap = 100;

  tenClass = "bottom";
  thuocTinh = "bottom";
  donVi = "px";

  am = "co"; // co or khong
  if (am.length() != 0) am = "-";

  nhanManh = "co"; // co or khong
  if (nhanManh.length() != 0) nhanManh = " !important";

  fstream file(pathFile, moFileDe);
  for (short i = giaTriBatDau; i <= soLanLap; i++) {
    css = "." + am + tenClass + "-" + to_string(i) + " { " + thuocTinh + ": " + am + to_string(i) + donVi + nhanManh + "; }";
    file << css << endl;
    giaTriBatDau += 1;
  }

  cout << "Build successfull.";
}