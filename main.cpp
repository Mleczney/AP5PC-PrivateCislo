
#include<iostream>

using namespace std;

class Cislo {
  private:
  int privateNumber = 0;

  public:
  void setPrivateNumber(int newPrivateNumber) {
    privateNumber = newPrivateNumber;
  };

  void printPrivateNumber() {
    cout << "Zadane private number je: " << privateNumber << endl;
  }
};

int main() {
  Cislo prepisCisla;

  int vklad;
  cout << "Zadej cislo:" << endl;
  cin >> vklad;

  prepisCisla.setPrivateNumber(vklad);
  prepisCisla.printPrivateNumber();

  return 0;
}