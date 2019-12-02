#include<iostream>
using namespace std;
 class matrix2;
 class matrix1

{
            int a[5][5];                       
            int m,n;
  public:
            void getmatrix1();
            void putmatrix1();
};

void matrix1::getmatrix1()

{

            int i,j;
            cout<<"MATRIX 1:\n";
            cout<<"Rows and Columns: ";
            cin>>m>>n;
            cout<<"Enter elements:\n"; 
            for(i=0;i<m;i++)
            for(j=0;j<n;j++) 
            cin>>a[i][j];

}

void matrix1::putmatrix1()

{
            int i,j; 
            cout<<"MATRIX 1:\n";
            for(i=0;i<m;i++)
            {
                        for(j=0;j<n;j++)
                                    cout<<a[i][j]<<" ";
                        cout<<endl;
            }
}

class matrix2 
{
            int b[5][5];
            int m,n;
public:
            void getmatrix2();
            void putmatrix2();
};

void matrix2::getmatrix2() 
{
            int i,j;
            cout<<"MATRIX 2:\n";
            cout<<"Rows and Colums: ";
            cin>>m>>n;
            cout<<"Enter elements:\n";
            for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                        cin>>b[i][j];
}

void matrix2::putmatrix2() 
{
            int i,j;
            cout<<"MATRIX 2:\n";
            for(i=0;i<m;i++)
            {
                        for(j=0;j<n;j++)
                                    cout<<b[i][j]<<" ";
                        cout<<endl;
            }
}
int main()
{
            matrix1 m1;
            matrix2 m2;
            m1.getmatrix1();                    
            m2.getmatrix2();
            m1.putmatrix1();                    
            m2.putmatrix2();
 }
