#include <iostream>
#include "Point.h"
using namespace std;
Point::~Point(){
    delete x;delete y;
}
Point::Point(){
    x = new int ; y = new int;
    *x = 0; *y=0;
    cout<<"Constructeur par default-------------"<<endl;
}
Point::Point(int a, int b){
    x = new int ; y = new int;
    *x=a;*y=b;
    cout<<"Constructeur usuelle--------------"<<endl;
}
void Point::affiche(){
    cout<<"x = "<<*x<<"\ty = "<<*y<<endl;
}
void Point::deplacer(int dx,int dy){
    *x+=dx;
    *y+=dy;
}