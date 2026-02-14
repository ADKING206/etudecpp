#ifndef _POINT_H
#define _POINT_H

class Point{
    private:
        int *x;
        int *y;
    public:
        void deplacer(int,int);
        void affiche();
        Point(int, int);
        Point();
        ~Point();
};

#endif