#include <stdio.h>

struct point {
    double x, y;
};

void get_point(struct point* p)
{
    scanf("(%lf, %lf)", &(p->x), &(p->y));
}

int judge_point(struct point p)
{
    double x, y;
    x = p.x;
    y = p.y;
    if (x == 0.0 && y == 0.0) {
        printf("(0.0, 0.0) is origin");
        return 0;
    } else {
        if (x == 0.0) {
            printf("(0.0, %.1lf) is on the y axis", y);
            return 0;
        }
        if (y == 0.0) {
            printf("(%.1lf, 0.0) is on the x axis", x);
            return 0;
        }
        if (x > 0.0) {
            if (y > 0.0)
                printf("(%.1lf, %.1lf) is in quadrand I", x, y);
            else
                printf("(%.1lf, %.1lf) is in quadrand IV", x, y);
        } else {
            if (y > 0.0)
                printf("(%.1lf, %.1lf) is in quadrand II", x, y);
            else
                printf("(%.1lf, %.1lf) is in quadrand III", x, y);
        }
    }
}

int main()
{
    struct point p;
    get_point(&p);
    judge_point(p);
    return 0;
}
/**************************************************************
	Problem: 2039
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

