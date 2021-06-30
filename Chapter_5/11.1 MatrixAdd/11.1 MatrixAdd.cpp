/** Practice Program - Addition of 2 Matrices
*/
#include<iostream>
using namespace std;

#define row 4
#define col 4

int main()
{
    int a[row][col],b[row][col],c[row][col],r1,c1,r2,c2,i,j,k,sum;

	cout<<"\nENTER ORDER OF MATRIX A : ";
	cin>>r1>>c1;
	cout<<"\nENTER ORDER OF MATRIX B : ";
	cin>>r2>>c2;

    cout<<"\nENTER ELEMENTS FOR MATRIX A : \n";
	for(i=0;i<r1;i++)
	{	for(j=0;j<c1;j++)
		{	cout<<"\nENTER ELEMENT FOR "<<i<<" and  "<<j<<" POSITION : ";
				cin>>a[i][j];
		}
	}
	cout<<"\nENTER ELEMENTS FOR MATRIX B : \n";
	for(i=0;i<r2;i++)
	{	for(j=0;j<c2;j++)
		{	cout<<"\nENTER ELEMENT FOR "<<i<<" and  "<<j<<" POSITION : ";
                cin>>b[i][j];
        }
    }
	cout<<"\n\nTHE MATRIX A IS : \n";
	for(i=0;i<r1;i++)
	{	for(j=0;j<c1;j++)
		{	cout<<"\t"<<a[i][j];
		}
        cout<<endl;
    }
	cout<<"\n\nTHE MATRIX B IS : \n";
	for(i=0;i<r2;i++)
	{	for(j=0;j<c2;j++)
		{	cout<<"\t"<<b[i][j];
		}
        cout<<endl;
    }
	for(i=0;i<r1;i++)
	{
	    for(j=0;j<c2;j++)
		{

		    c[i][j] = a[i][j] + b[i][j];

        }
	}
	cout<<"\n\nTHE ADDITION of 2 MATRICES IS : \n";
	for(i=0;i<r1;i++)
	{	for(j=0;j<c2;j++)
		{	cout<<"\t"<<c[i][j];
		}
		cout<<endl;
	}
	return(0);
}
