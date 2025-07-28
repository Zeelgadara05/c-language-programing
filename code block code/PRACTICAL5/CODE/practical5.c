#include<stdio.h>
void main()
{
    long long tp; //tp=total population
    long long tm,tw,lm,lw,ilm,ilw; /* tm=total men
                                        tw=total womemn
                                        ilm=illitrate men
                                        ilw=illitrate women */
    tp=1441981744;
    tw=(48.4*tp)/100;
    tm=(51.6*tp)/100;
    printf("Total population of men is: %lld", tm);
    printf("\nTotal population of women is: %lld", tw);
    lm=(80.95*tm)/100;
    lw=(62.84*tw)/100;
    printf("\nTotal number of litrate men is: %lld", lm);
    printf("\nTotal number of litrate women is: %lld", lw);
    ilm=tm-lm;
    ilw=tw-lw;
    printf("\nTotal number of illitrate men is: %lld", ilm);
    printf("\nTotal number of illitrate women is: %lld", ilw);
    printf("\nThe programm iss done by : ZEEL GADARA_(25TCEKY2)");
}
