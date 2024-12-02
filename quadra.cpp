#include<iostream>
#include<math.h>
using namespace std;
void roots(double *x,double *y,double *z)
{
    double r1,r2,root1,root2;
    if ((*y)*(*y) == 4 *(*x)*(*z))
    {
        root1 = -(*y)/2*(*x);
        cout <<"Roots are equal"<<endl;
        cout<<"Value"<<root1;
    }

    else if((*y)*(*y) > 4*(*x)*(*z))
    {
        root1= (-(*y) + sqrt((*y)*(*y) -(4*(*x)*(*z))))/(2*(*x));

        root2= (-(*y) - sqrt((*y)*(*y) -(4*(*x)*(*z))))/(2*(*x));
        cout<<"Root 1= "<<root1<<"\nRoot 2= "<<root2;

    }

    else
    {

       cout<<"\nImaginary roots";
       root1= (-(*y) + sqrt((*y)*(*y) -(4*(*x)*(*z))))/(2*(*x));
       root2= (-(*y) - sqrt((*y)*(*y) -(4*(*x)*(*z))))/(2*(*x));
      
       cout<<"are  "<<r1<<"+i"<<r2<<" , "<<r1<<"-i"<<r2;

}

}
int main()
{
    double a,b,c;
    cout<<"Enter the values of a,b and c :"<<endl;
    cin >>a>>b>>c;

    roots (&a,&b,&c);
    return 0;
}

