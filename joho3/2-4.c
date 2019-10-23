#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int merge(int* array,int p,int q,int r){//マージ関数
    int count=0,i,pi=p,qi=q+1;//カウンタを初期化、pi,qiはマージする部分配列をFETCHするため
    int* T=(int*)malloc(sizeof(int)*(r-p+1));//マージした一時配列、大きさは見ての通り
    if(T==NULL) return -1;
    for(i=0;i<r-p+1;i++){
        
        if(pi==q+1){//比較対象がないとき
            T[i]=array[qi];
            qi++; continue;
        }else if(qi==r+1){//比較対象がないとき
            T[i]=array[pi];
            pi++; continue;
        }else{//比較対象があるとき
            count++;//1UP
            if(array[pi] < array[qi]){//小さい方を部分配列の戦闘から取り出してく
                T[i]=array[pi];
                pi++; continue;
            }else{
                T[i]=array[qi];
                qi++; continue;
            }
        }
    }
    for(i=0;i<r-p+1;i++){//並び替えた配列を元の場所に戻す
        array[i+p]=T[i];
    }
    free(T);
    return count;
}

int main(int argc, char const *argv[])
{
    int i;
    int p,q,r,n;
    scanf("%d %d %d %d",&n,&p,&q,&r);
    int* array=(int*)malloc(sizeof(int)*n);
    if(array==NULL) return 1;
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int c=merge(array,p,q,r);

    printf("%d",array[0]);
    for(i=1;i<n;i++){
        printf(" %d",array[i]);
    }
    printf("\n%d\n",c);

    free(array);
    return 0;
}


