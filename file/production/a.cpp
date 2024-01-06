#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
using namespace std;

int main() {
  system("cls");

  string pathFile, fileName, css, tenClass, thuocTinh, donVi, nhanManh, am;
  int soLanLap, giaTriBatDau;

  fileName = "opacity.css";
  pathFile = "../module/" + fileName;
  auto moFileDe = ios::app;

  giaTriBatDau = 0;
  soLanLap = 100;

  tenClass = "opacity";
  thuocTinh = "opacity";
  donVi = "";

  am = ""; // co or khong
  if (am.length() != 0) am = "-";

  nhanManh = ""; // co or khong
  if (nhanManh.length() != 0) nhanManh = " !important";

  fstream file(pathFile, moFileDe);
  for (int i = giaTriBatDau; i <= soLanLap; i++) {
    stringstream stream;
    stream << fixed << setprecision(2) << (float) i / 100;
    string value = stream.str();
    // css = "." + am + tenClass + "-" + to_string(i) + " { " + thuocTinh + ": " + am + to_string(i) + donVi + nhanManh + "; }";
    // css = "." + tenClass + "-" + to_string(i) + " { " + thuocTinh + "top: " + am + to_string(i) + donVi + nhanManh + "; " + thuocTinh + "bottom: " + am + to_string(i) + donVi + nhanManh + "; }";
    // css = "." + am + tenClass + "-" + to_string(i) + " { " + thuocTinh + ": " + am + "" + value + "" + donVi + nhanManh + "; }";
    file << css << endl;
  }

  cout << "Build successfull.";
}