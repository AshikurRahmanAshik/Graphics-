#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
using namespace std;
void pixel(int xc,int yc,int x,int y){
    putpixel(xc+x,yc+y,RED);
    putpixel(xc+x,yc-y,RED);
    putpixel(xc-x,yc+y,RED);
    putpixel(xc-x,yc-y,RED);
    putpixel(xc+y,yc+x,RED);
    putpixel(xc+y,yc-x,RED);
    putpixel(xc-y,yc+x,RED);
    putpixel(xc-y,yc-x,RED);
    delay(100);
}

int main()
{
    int xc,yc,r,x,y,p;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    printf("Enter the point of circle: ");
    scanf("%d%d",&xc,&yc);
    printf("\nEnter the radious of circle : ");
    scanf("%d",&r);
    x=0;
    y=r;
    p=1-r;
    pixel(xc,yc,x,y);
    while(x<=y){
        if(p<0){
            x++;
            p=p+2*x+1;
        }
        else{
            x++;
            y--;
            p=p+2*(x-y)+1;
        }
        pixel(xc,yc,x,y);
    }
    getch();
    closegraph();
    return 0;
}
