#include <Magick++.h>
#include <iostream>

int main() {
  Magick::Image image;
  image.read("bird");
  std::cout << image.columns() << std::endl;
}
