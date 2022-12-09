#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double d2r){
    return (d2r*2*M_PI)/360  ;
}
double rad2deg(double r2d){
    return (r2d*360)/(2*M_PI);
}
double  findXComponent(double x1 , double x2 , double y1 ,double y2 ){
    return (x1*cos(y1))+(x2*cos(y2));
}
double  findYComponent(double x3 , double x4 , double y3 ,double y4 ){
    return (x3*sin(y3))+(x4*sin(y4));
}
double pythagoras(double pt1 , double pt2){
    return sqrt(pow(pt1,2)+pow(pt2,2));
}
double showResult(double lenght , double direction){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << lenght << "\n";
    cout << "Direction of the resultant vector (deg) = " << direction << "\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
    return 0 ;
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
