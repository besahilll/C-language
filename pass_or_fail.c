//WAP to find out whether a student is pass or fail
#include<stdio.h>

    int main(){
    int p,c,m;    //p->physics, c-> chemistry, m-> maths
    float total;  //t-. total percentage
    printf("Enter the marks in physics: ");
    scanf("%d",&p);
    printf("Enter the marks in chemistry: ");
    scanf("%d",&c);
    printf("Enter the marks in maths: ");
    scanf("%d",&m);
    
    total=(p+c+m)/3;
    if((total<40) || p<33 || c<33 || m<33) {
        printf(" Your total percentage is %f and you are failed",total);
    }
    else {
        printf(" Your total percentage is %f and you are passed", total);
    }
    
return 0;
}
