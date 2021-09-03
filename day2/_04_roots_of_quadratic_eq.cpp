#include<bits/stdc++.h>
using namespace std;
void root(float a, float b, float c){
    float disc = (b * b)-(4*a*c);
    float root1, root2, real, img;
    // If discriminant is greater than 0, the roots are real and different.
    // If discriminant is equal to 0, the roots are real and equal.
    // If discriminant is less than 0, the roots are complex and different.

    if(disc > 0.0){
        root1 = (-b + sqrt(disc))/ (2 * a);
        root2 = (-b - sqrt(disc))/ (2 * a);
        cout<<"Roots : "<<root1<<" "<<root2;
    }else if(disc == 0.0){
        root1 = root2 = -b / (2 * a);
        cout<<"Roots : "<<root1<<" "<<root2;

    }else{
        real = -b / (2 * a);
        img = sqrt(-disc)/(2*a);
        cout<<"Roots : "<<real<<" + "<<img<<"i"<<endl;
        cout<<real<<" - "<<img<<"i"<<endl;
    }
}
int main(){
    float a,b,c;
    cin>>a,b,c;
    float disc = (b*b)-(4*a*c);
    float root1, root2, real, img;
    // If discriminant is greater than 0, the roots are real and different.
    // If discriminant is equal to 0, the roots are real and equal.
    // If discriminant is less than 0, the roots are complex and different.

    if(disc > 0.0){
        root1 = (-b + sqrt(disc))/ (2 * a);
        root2 = (-b - sqrt(disc))/ (2 * a);
        cout<<"Roots are real and different."<<endl;
        cout<<"Roots : "<<root1<<" "<<root2;
    }else if(disc == 0.0){
        root1 = root2 = -b / (2 * a);
        cout<<"Roots are real and same."<<endl;
        cout<<"Roots : "<<root1<<" "<<root2;

    }else{
        real = -b / (2 * a);
        img = sqrt(-disc)/(2*a);
        cout<<"Roots are complex and different."<<endl;
        cout<<"Roots : "<<real<<" + "<<img<<" i"<<endl;
        cout<<real<<" - "<<img<<" i"<<endl;
    }
    return 0;
}