#include<iostream>
using namespace std;
 class matrixB;
 class matrixA

{
            int a[5][5];                       
            int m,n;
  public:
            void getdataA();
            void putdataA();
            friend void matrixsum(matrixA,matrixB);
};

void matrixA::getdataA()

{

            int i,j;\
            cout<<"matrix A:\n";
            cout<<"Enter rows & columns: ";
            cin>>m>>n;
            cout<<"Enter elements:\n"; 
            for(i=0;i<m;i++)
            for(j=0;j<n;j++) 
            cin>>a[i][j];

}

void matrixA::putdataA()

{
            int i,j; 
            cout<<"matrix A:\n";
            for(i=0;i<m;i++)
            {
                        for(j=0;j<n;j++)
                                    cout<<a[i][j]<<" ";
                        cout<<endl;
            }
}

class matrixB 
{
            int b[5][5];
            int m,n;
public:
            void getdataB();
            void putdataB();
            friend void matrixsum(matrixA,matrixB);
};

void matrixB::getdataB() 
{
            int i,j;
            cout<<"matrix B:\n";
            cout<<"Enter rows & colums: ";
            cin>>m>>n;
            cout<<"Enter elements:\n";
            for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                        cin>>b[i][j];
}

void matrixB::putdataB() 
{
            int i,j;
            cout<<"matrix B:\n";
            for(i=0;i<m;i++)
            {
                        for(j=0;j<n;j++)
                                    cout<<b[i][j]<<" ";
                        cout<<endl;
            }
}

void matrixsum(matrixA g,matrixB h) 
{

            int i,j; 
            if(g.m==h.m && g.n==h.n)
            {
                         cout<<"Sum of matrix:\n"; 
                           for(i=0;i<g.m;i++)
                        {

                                    for(j=0;j<g.n;j++) 
                                                cout<<g.a[i][j]+h.b[i][j]<<" ";
                                    cout<<endl; 
                        }
            }
            else
                        cout<<"Addition not possile";
}

int main()
{
            matrixA m1;
            matrixB m2;
            m1.getdataA();                    
            m2.getdataB();
            m1.putdataA();                    
            m2.putdataB();
            matrixsum(m1,m2);
}

