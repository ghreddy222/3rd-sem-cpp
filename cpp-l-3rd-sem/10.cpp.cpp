#include<iostream>
using namespace std;
class matrix
{
        int x[5][5],m,n;
public:
        matrix(){ }
        matrix(int a,int b)
        {
               m=a;n=b;
        }
        void get();
        void put();
        matrix operator !();
};
void matrix::get()
{
        int i,j;
        cout<<"\n Enter elemntd";
               for(i=0;i<m;i++)
                   for(j=0;j<n;j++) 
                        cin>>x[i][j];
}
void matrix::put()
{
         int i,j;
        cout<<"\nTRANSPOSE is :\n";
        for(i=0;i<n;i++)
        {
               for(j=0;j<m;j++)
                    cout<<x[i][j]<<"\t";
               cout<<endl;
     }
}

matrix matrix::operator !()
{
        matrix c(n,m);
        int i,j;
        for(i=0;i<m;i++)
               for(j=0;j<n;j++)
                    c.x[i][j]=x[j][i];
         return c;

}


int main()

{

        int m,n;
        cout<<"\n Enter the order of  matrix \t";
        cin>>m>>n;
        matrix a(m,n),c;
        a.get();
        c=!a;
        c.put();
        return 0;

}
