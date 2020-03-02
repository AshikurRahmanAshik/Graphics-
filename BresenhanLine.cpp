#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main(){
    int x1,x2,y1,y2,x,y,p,dx,dy;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    printf("Enter the first coordinate: ");
    scanf("%d%d",&x1,&y1);

    printf("\nEnter the last coordinate: ");
    scanf("%d%d",&x2,&y2);

    dx=x2-x1;
    dy=y2-y1;

    p=2*dy-dx;

    x=x1;
    y=y1;

    putpixel(x,y,RED);
    while(x<=x2){
        if(p<0){
            x=x+1;
            y=y;
            p=p+2*dy;
        }
        else{
            x=x+1;
            y=y+1;
            p=p+2*dy-2*dx;
        }
        putpixel(x,y,RED);
    }
    getch();
    closegraph();

    return 0;
}
