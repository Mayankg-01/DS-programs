#include<stdio.h>
struct rectangle
{
    int length;
    int breadth;
};
int area(struct rectangle r)
{
    return r.length*r.breadth;
}
int peri(struct rectangle r)
{
    int p;
    p= 2*(r.length+r.breadth);
    return p;
}
int main()
{
    struct rectangle r={0,0};
    printf("Enter length an breadth: ");
    scanf("%d%d",&r.length,&r.breadth);

    int a= area(r);
    int perimetre=peri(r);
    printf("area is:%d\n perimetre is:%d",a,perimetre);




return 0;
}