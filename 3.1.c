#include<stdio.h>
#include<stdlib.h>

void main(){
    int n, t=1,s;
    FILE *f, *f2;
    

    f = fopen("D:\\cprogram\\file.txt","r");
    if(f == NULL){
        f2 = fopen("D:\\cprogram\\file.txt","w");
        if(f2 == NULL){
            printf("Error!");
            exit(1);
        }
        fprintf(f2,"%d",t);
        fclose(f2);
    }
    fscanf(f,"%d",&n);
    fclose(f);

    f = fopen("D:\\cprogram\\file.txt","w");
    if(f == NULL){
        printf("Error!");
        exit(1);
    }

    printf("Enter the number");
    scanf("%d",&t);
    s = n+t;
    fprintf(f,"%d",s);
    fclose(f);

    for(int i=n; i<s; i++){
        printf("%d\t",i);
    }
}