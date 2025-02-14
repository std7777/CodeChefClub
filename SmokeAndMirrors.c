#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int k =0;k<t;k++){
        int r ,c;
        scanf("%d %d",&r,&c);
        int a[r][c];
        for(int i =0;i<r;i++){
            for(int j =0; j<c;j++){
                scanf("%d",&a[i][j]);
            }
        }
        int b,i,j,x,y;
        scanf("%d",&b);

        i=0;x=c-1;
        j=0;y=r-1;
        switch(b){
            case 1: case 3: 
                while(i<=x){
                    j=0;
                    while(j<=y){
                        printf("%d ",a[j][i]);
                        j++;
                    }
                    i++;
                    printf("\n");
                }
                break;

            // case 2:
            //     while(i<=x){
            //         y=r-1;
            //         while(y>=j){
            //             printf("%d ",a[y][i]);
            //             y--;
            //         }
            //         i++;
            //         printf("\n");
            //     }
            //     break;
            // case 0: 
            //     while(x>=i){
            //         j=0;
            //         while(j<=y){
            //             printf("%d ",a[j][x]);
            //             j++;
            //         }
            //         printf("\n");
            //         x--;
            //     }
            //     break;
            case 2: case 0:
                while(x>=i){
                    y=r-1;
                    while(y>=j){
                        printf("%d ",a[y][x]);
                        y--;
                    }
                    printf("\n");
                    x--;
                }
                break;
        }
    }
    return 0;
}
