#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct flavours{
    int t;
    int o;
    int b;
};

typedef struct flavours flav;

int main() {
    int x;
    scanf("%d",&x);
    for(int b =0;b<x;b++)
    {
        int n;
        scanf("%d",&n);        //printf("%d\n",n);
        n*=2;
        int n1=n/2;
        char s[n];
        for(int i =0;i<n;i++){
            s[i]=getchar();
        }
        flav f[n1];
        flav res={0,0,0};

        for(int i = 0;i<n;i++){
            if(i%2==1){
                int j=(i-1)/2;
                switch(s[i]){
                case 's':
                    f[j]=(flav){1,1,1};
                    break;
                case 'p':
                    f[j]=(flav){1,1,0};
                    break;
                case 'y':
                    f[j]=(flav){0,1,1};
                    break;
                case 'c':
                    f[j]=(flav){1,0,1};
                    break;
                case 't':
                    f[j]=(flav){1,0,0};
                    break;
                case 'b':
                    f[j]=(flav){0,0,1};
                    break;
                case 'o':
                    f[j]=(flav){0,1,0};
                    break;
                }         
            }

        }
        flav flag = {0,0,0};
        for(int i = 0;i<(n1);i++){

            if(f[i].t==1){
                if(flag.t==0){
                    flag.t=1;
                    res.t++;                    //printf("{%d %d}",flag.t,res.t);
                }
            }else if(f[i].t==0){
                if(flag.t==1) flag.t=0;                //printf("{{%d %d}}",flag.t,res.t);
            }

            if(f[i].o==1){
                if(flag.o==0){
                    flag.o=1;
                    res.o++;                    //printf("{%d %d}",flag,res.t);
                }
            }else if(f[i].o==0){
                if(flag.o==1) flag.o=0;                //printf("{%d %d}",flag,res.t);
            }

            if(f[i].b==1){
                if(flag.b==0){
                    flag.b=1;
                    res.b++;                    
                    //printf("{%d %d}\n",flag,res.b);
                }
            }else if(f[i].b==0){
                if(flag.b==1) flag.b=0;                
                //printf("{{%d %d}}\n",flag,res.b);
            }
        }
        printf("%d\n",res.t+res.o+res.b);

        // for(int i = 0; i<(n1);i++){
        //     printf("%c, %d. %d; %d:\n",s[2*i+1],f[i].t,f[i].o,f[i].b);
        // }
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
