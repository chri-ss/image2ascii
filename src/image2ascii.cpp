#include <iostream>
#include <vector>
#include <Magick++.h>

using std::cout;
using std::endl;
using std::vector;

int main() {
  Magick::Image image;
  image.read("../images/bird.jpg");
  cout << image.columns() << endl;
  cout << image.rows() << endl;

  vector<vector<int>> rows;

  for (int i = 0; i != image.columns(); ++i) {
    for (int j = 0; j != image.rows(); ++j) {
      Magick::ColorRGB clr = image.pixelColor(i, j);
      cout << clr.red() * 255 << " " << clr.green() * 255 << " "
           << clr.blue() * 255 << endl;
    }
  }
}
