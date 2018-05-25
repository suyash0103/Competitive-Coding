#include<bits/stdc++.h>

using namespace std;

int main()
{
	int B = 38;
	int A[] = {9, 10, 12, 13, 24, 26, 27, 28, 29, 43, 48, 51, 54, 56, 57, 59, 62, 66, 70, 71, 72, 74, 75, 77, 78, 81, 83, 85, 87, 88, 89, 90, 91, 92, 93, 97, 98, 99, 101, 102, 104, 105, 107, 112, 113, 115, 123, 126, 127, 132, 133, 134, 135, 136, 143, 144, 148, 150, 151, 152, 154, 159, 160, 161, 163, 167, 169, 170, 174, 176, 177, 179, 180, 181, 183, 185, 186, 187, 188, 193, 194, 196, 197, 198, 199, 200, 203, 1, 6, 7, 8};
	int n = sizeof(A) / sizeof(A[0]);
    int low = 0, high = n - 1, flag = 0, pos;
    while(low < high)
    {
    	cout << "A";
        int mid = (low + high) / 2;
        if(A[low] <= A[high])
        {
            flag = 1;
            pos = low;
            break;
        }
        int next = (mid + 1) % n;
        int prev = (mid + n - 1) % n;
        if(A[mid] <= A[next] && A[mid] <= A[prev])
        {
            flag = 1;
            pos = mid;
            break;
        }
        else if(A[mid] < A[high])
            high = mid - 1;
        else
            low = mid + 1;
    }
    // vector <int> ans;
    cout << pos << endl;
    int final;
    cout << "FLAG" << flag;
//    if(flag == 1)
//    {
        if(A[pos] <= B && A[n - 1] >= B)
        {
            // call func
            cout << "!!!!"; 
            int l = pos, h = n - 1;
            while(l <= h)
            {
                int m = (l + h) / 2;
                if(A[m] == B)
                {
                	final = m;
                	cout << final;
                	exit(0);
				}
                else if(A[m] < B)
                    l = m + 1;
                else
                    h = m - 1;
            }
            final = -1;
        }
        else if(!(A[pos] <= B && A[n - 1] >= B) && pos == 0)
        {
        	cout << "soso";
            return -1;
        }
        else
        {
            // call func
            int l = 0, h = pos - 1;
            while(l <= h)
            {
                int m = (l + h) / 2;
                if(A[m] == B)
                {
                	cout << "YO";
                	final = m;
                	cout << final;
                	exit(0);
				}
                else if(A[m] < B)
                    l = m + 1;
                else
                    h = m - 1;
            }
            cout << "NO";
            final = -1;
        }
//    }
    cout << final;
}
