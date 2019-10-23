#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int selectionsort(int* numbers, int n);

int selectionsort(int* numbers, int n)
{
    int i,j,k;
    int min; // 最小値を持つ要素のインデックス
    int temp,count=0; 

    for (i = 0; i < n-1; i++) {
        min = i; 
        for (j = i+1; j < n; j++) { 
            if (numbers[j] < numbers[min]) {
                min = j; // 最小値を持つ要素を更新
            }
            count++;
        }
        if(i!=min){
            // 最小値と先頭の要素とを交換
            temp = numbers[i];
            numbers[i] = numbers[min];
            numbers[min] = temp;
            printf("SWAP(%d,%d)\n",i,min);
            printf("*");
            for(k=0;k<n;k++){
                printf(" %d",numbers[k]);
            }
            printf("\n");
        }
        
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int n,i,k,count=0;
    scanf("%d",&n);
    int* x=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    count=selectionsort(x,n);
    printf("%d",x[0]);
    for(k=1;k<n;k++){
        printf(" %d",x[k]);
    }
    printf("\n");
    printf("%d\n",count);

    free(x);
    return 0;
}


