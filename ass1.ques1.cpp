#include<iostream>
using namespace std;
class mydemo{
	int *a;
	int i,size;
	public:
		mydemo(int s){
			size=s;
			a = new int[size];
			i=0;
		}
		void insert (int n){
			if(i==size){
				cout<<"\narray is full";
			}
			else{
				
				a[i]=n;
				i++;
			}
		}
		void traverse()
		{
			int j;
			for(j=0;j<i;j++)
			{
				cout<<endl<<a[j];
			}
		}
		void binary(int n)
		{
			int start=0, end=i, mid,c=0;
			while(start<=end)
			{
				mid= (start +end)/2;
				if(a[mid]==n)
				{
					cout<<"element found"<<endl;
					cout<<"location of element ="<<mid+1;
					c=1;
					break;
				}
				else if(a[mid]>n)
				{
					end =mid-1;
				}
				else
				{
					start =mid+1;
				}
			}
			if(c==0)
			{
				cout<<"element not found";
			}
		}
	
};
int main()
{
	mydemo obj(11);
	obj.insert(2);
	obj.insert(5);  
	obj.insert(8); 
	obj.insert(12);  
	obj.insert(16);
	obj.insert(23);
	obj.insert(38);
	obj.insert(56);
	obj.insert(72);
	obj.insert(91);
	obj.binary(23);
	obj.traverse();
	return 0;
}
