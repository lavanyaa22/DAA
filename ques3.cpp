#include <iostream>
using namespace std;

	int position(int a[], int lb, int ub)
	{
		int p=a[lb];
		int start =lb;
		int end =ub;
		while(start<end)
		{
			while(start <= ub && a[start]<=p){
				start++;
			}
			while(a[end]>p){
				end--;
			}
		
		if(start<end)
		{
			swap(a[start],a[end]);
		}
	}
		swap(a[lb],a[end]);
		return end;
	}
	void quick (int a[], int lb, int ub)
	{
		if(lb<ub)
		{
			int loc=position(a,lb,ub);
			quick(a,lb,loc-1);
			quick(a,loc+1,ub);
		}
	}
int main()
{
    int a[5] = {4, 2, 6, 9, 2};
    int n = 5;

    quick(a, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

