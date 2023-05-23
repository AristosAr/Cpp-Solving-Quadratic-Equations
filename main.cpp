#include <iostream>
#include <cmath>

using namespace std;

 void gt(float a,float b,float& r1,float& r2,float delta);
 void eq(float a,float b,float& r);
 void lt(float a,float b,float& r1,float& r2,float& r,float delta);

int main()
{
    float a,b,c;
    float r1,r2,r;
    float delta;

    cout<< "Give the coefficients a,b and c: " << endl;
    cin>> a >> b >> c;

    delta = (b*b)-(4*a*c);

    if (delta > 0){
        gt(a,b,r1,r2,delta);
        cout<< "Roots are real and different" <<endl;
        cout<< "r1= " << r1 <<endl;
        cout<< "r2= " << r2 <<endl;
    }
        else if (delta == 0){
            eq(a,b,r);
            cout<< "Roots are real and same" <<endl;
            cout<< "r1=r2=r " << r <<endl;
        }
            else{
                lt(a,b,r1,r2,r,delta);
                cout<< "Roots are complex and different" <<endl;
                cout<< "r1= " << r << "+" << r1 << "i" <<endl;
                cout<< "r12 " << r << "-" << r2 << "i" <<endl;
            }
    return 0;
}

void gt(float a,float b,float& r1,float& r2,float delta){

        r1=(-b + sqrt(delta)) / (2*a);
        r2=(-b - sqrt(delta)) / (2*a);
    }

    void eq(float a,float b,float& r){

        r=-b / (2*a);
    }

    void lt(float a,float b,float& r1,float& r2,float& r,float delta){

        r= -b / (1*a);
        r1= sqrt(abs(delta)) / (2*a);
        r2= sqrt(abs(delta)) / (2*a);
    }
