#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inputFile;
    string country;
    inputFile.open("C:\\countries.txt");
    inputFile>>country;
    cout<<country<<endl;
    inputFile>>country;
    cout<<country<<endl;
    inputFile>>country;
    cout<<country<<endl;

    inputFile.close();

    return 0;
}
