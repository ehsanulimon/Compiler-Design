
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char a[100];
    int i,co=0,cl=0,n=10;


     printf("\n enter Char C \n");
    for(i=0;i<n;i++){
        scanf("%c",&a[i]);
    }




    printf("\n output\n");
    for(i=0;i<n;i++){
       /* printf("%c",a[i]);*/
        if(a[i]==' '){


             co=co+1;
        }
        else if(a[i]=='\n'){
            cl=cl+1;

        }
    }
    int ascii =a;
    printf("\n blank number %d ",co);
    printf("\n new line %d  ",cl);
    printf("\n  ascii value %c= %d",a,ascii);
    return 0;
}
