//Настоящий рыцарь делает даме сердца как минимум 50 комплиментов в 4 недели. Известно, что сэр Ивейн сделал своей даме сердца в течении 4 недель по Ai комплиментов. Определите, на сколько сэр Ивейн превзошел планку настоящего рыцаря. 
#include <iostream>
using namespace std;
int main() {
  int a, b, c, d, sum = 0;
  cin >> a >> b >> c >> d;
  sum = sum + a + b + c + d;
  cout << sum - 50;
}

