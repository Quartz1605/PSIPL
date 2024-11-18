//Codes by Vrinda Agrawal.
#include<stdio.h>
#include<math.h>
void main()
{
    double a[6][3]={{137.4,80.9,0.78},{155.2,92.62,0.89},{149.3,97.93,1.35},{160.0,100.25,9.00},{155.6,68.95,1.25},{149.7,120.0,1.75}};
    double Area[6],l;
    for(int i=0; i<6; i++)
    {
            Area[i]=0.5*a[i][0]*a[i][1]*sin(a[i][2]);
            if(Area[i]>l)
                l=Area[i];
    }
    for(int i=0; i<6; i++)
    {
            printf("Area of side %.2lf and %.2lf is: %.3lf \n",a[i][0],a[i][1],Area[i]);
    }
    printf("Largest area is: %.3lf \n",l);
}