#include<stdio.h>
#include<math.h>

main()
{
    double p1,p2,x1,y1,x2,y2,sum;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);

    p1=(x2-x1)*(x2-x1);
    p2=(y2-y1)*(y2-y1);

    sum=sqrt(p1+p2);

    printf("%.4lf",sum);

}
