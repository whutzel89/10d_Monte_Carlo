//
//  main.c
//  10D_Monte
//
//  Created by William Hutzel on 4/12/20.
//  Copyright © 2020 William Hutzel. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    FILE *fptr;
    int i,ii=0,iii=0,Nmax=1;
    double x=0,sum=0,val;
    
    fptr = fopen("/Users/whutzel/Documents/practice/Monte_Carlo/wave.dat","w");
    srand48(time(NULL));
    
    while(Nmax<=8193){
        while(ii<Nmax){
            x=0;
            for (i=1;i<=10;i++){
                x+=drand48();
            }// for loop integral sum
            sum+=x*x;
            ii=ii+1;
        }// while loop for N runs
        val=sum/((double) Nmax);
        printf("The value of the Monte Carlo Integrtion is: %f\n",val);
        fprintf(fptr,"%d\t%f\n",Nmax,val);
        iii=iii+1;
        Nmax=pow(2,iii);
    }//iterations while loop
    fclose(fptr);
    return 0;
}

//compare to exact answer 155/6
