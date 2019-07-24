#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile("C:\\countries.txt");
    outputFile<<"Kenya\n";
    outputFile<<"Uganda\n";
    outputFile<<"Tanzania\n";

    //but i dont have that file
    outputFile.close();
    cout<<"Done writing to file. ";

    return 0;
}
