#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile("C:\\numbers.txt");
    int number1, number2, number3;
    cout<<"Enter an integer: ";
    cin>>number1;
    cout<<"Enter another integer: ";
    cin>>number2;
    cout<<"Enter a final integer: ";
    cin>>number3;

    // write numbers to file.
    outputFile<<number1<<endl;
    outputFile<<number2<<endl;
    outputFile<<number3<<endl;
    cout<<"The numbers have been saved to the file!";
    outputFile.close();
    cout<<"Done";

    return 0;
}
