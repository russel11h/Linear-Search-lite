// Linear Searching

#include <iostream>
using namespace std;

int main()
{
    int A[20] = {1,5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,100};
    int x;
    bool search = false;

    cout << "Enter a number to search : ";
    cin >> x;

    for(int i=0; i<20; i++)
    {
        if(A[i] == x)
        {
            cout << x << " is found at " << i << " index." <<endl;
            search = true;
            break;
        }
    }

    if(!search)
    {
        cout << x << " is not found at any index." <<endl;
    }

    return 0;
}
