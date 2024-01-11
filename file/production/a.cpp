#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
using namespace std;

int main() {
  system("cls");

  string pathFile, fileName, css, tenClass, thuocTinh, donVi, nhanManh, am, dauTru, phanTram, tenClassCon1, tenClassCon2;
  int giaTriKetThuc, giaTriBatDau;

  fileName = "min-width.css";
  pathFile = "../modules/basic/" + fileName;
  auto moFileDe = ios::app;

  giaTriBatDau = 0;
  giaTriKetThuc = 2000;

  tenClass = "min-w";
  tenClassCon1 = "";
  tenClassCon2 = "";
  thuocTinh = "min-width";
  donVi = "px";

  phanTram = ""; // co or khong
  if (phanTram.length() != 0) phanTram = "p";

  nhanManh = ""; // co or khong
  if (nhanManh.length() != 0) nhanManh = " !important";

  fstream file(pathFile, moFileDe);
  for (int i = giaTriBatDau; i <= giaTriKetThuc; i++) {
    am = "";
    dauTru = "-";
    if (i < 0) {
      am = "-";
      dauTru = "";
    }
    css = "." + am + tenClass + dauTru + to_string(i) + phanTram + " { " + thuocTinh + ": " + to_string(i) + donVi + nhanManh + "; }";

    // css = "." + am + tenClass + dauTru + to_string(i) + phanTram + " { " + thuocTinh + dauTru + tenClassCon1 + ": " + am + to_string(i) + donVi + nhanManh + "; " + thuocTinh + dauTru + tenClassCon2 + ": " + am + to_string(i) + donVi + nhanManh + "; }";

    // string value = stream.str();
    // stringstream stream;
    // stream << fixed << setprecision(2) << (float) i / 100;
    // css = "." + am + tenClass + "-" + to_string(i) + " { " + thuocTinh + ": " + am + "" + value + "" + donVi + nhanManh + "; }";
    file << css << endl;
  }

  cout << "Build successfull.";
}