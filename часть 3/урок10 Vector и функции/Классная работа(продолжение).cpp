//Создайте функцию void print(vector<int>), выводящую элементы вектора через пробел.
#include <iostream>
#include <vector>

using namespace std;
void print (const vector<int>& v){
  for (int i=0; i<v.size();i++){
    cout << v[i] << " ";
  }
}
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  print(a);
  return 0;
}
