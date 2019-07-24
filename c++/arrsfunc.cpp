#include <iostream>
using namespace std;

const int MAXELS = 5;
int findMax (int[MAXELS]);//function prototype

int main()
{
    int nums[MAXELS] = {2, 18, 1, 27, 16};
    cout<<"The maximum values is: "<<findMax(nums)<<endl;

    return 0;
}

//function to find the maximum value of array
int findMax(int vals[MAXELS])
{
    int i;
    int max = vals[0];
    for (i=1; i<MAXELS; i++)
    {
        if (max <vals[i])
        {
            max = vals[i];
        }

    }
    return max;
}
