//15. Binary Searching

#include <iostream>
using namespace std;

int main()
{
    int A[20] = {1,5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,100};
    int x;
    bool search = false;

    cout << "Enter a number to search : ";
    cin >> x;

    int left = 0;
    int right = 19;
    int mid;

    while (left <= right)
    {
        mid = (left + right)/2;

        if(A[mid] == x)
        {
            cout << x << " is found at " << mid << " index." <<endl;
            search = true;
            break;
         }

         if(A[mid] < x)
         {
             left = mid + 1;
         }

         if(A[mid] > x)
         {
             right = mid - 1;
         }
    }

    if (!search)
    {
        cout << x << " is not found at any index." <<endl;
    }

    return 0;
}
