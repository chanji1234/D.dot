#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream fout;
    fout.open("o.txt");
    fout << "1 2 3 4 5 ";
    fout.close();
    return 0;
}
