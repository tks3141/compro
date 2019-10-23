#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int merge(int* array,int p,int q,int r);
int merge_sort(int* array,int a,int b);

int main(int argc, char const *argv[])
{
    int i,j;
    int n;
    scanf("%d",&n);
    int* array=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    int c=merge_sort(array,0,n-1);

    printf("%d",array[0]);
    for(i=1;i<n;i++){
        printf(" %d",array[i]);
    }
    printf("\n%d\n",c);
    free(array);
    return 0;
}

int merge(int* array,int p,int q,int r){
    int count=0,i,pi=p,qi=q+1;
    int* T=(int*)malloc(sizeof(int)*(r-p+1));
    for(i=0;i<r-p+1;i++){
        
        if(pi==q+1){
            T[i]=array[qi];
            qi++; continue;
        }else if(qi==r+1){
            T[i]=array[pi];
            pi++; continue;
        }else{
            count++;
            if(array[pi] < array[qi]){
                T[i]=array[pi];
                pi++; continue;
            }else{
                T[i]=array[qi];
                qi++; continue;
            }
        }
    }
    for(i=0;i<r-p+1;i++){
        array[i+p]=T[i];
    }
    free(T);
    return count;
}

int merge_sort(int* array,int a,int b){
    int count=0,s;
    if(a+1==b){//最小まで分けたら単純比較
        if(array[a]>array[b]){
            int temp=array[a];
            array[a]=array[b];
            array[b]=temp;
        }
        return 1;//比較回数１なので
    }

    s=(a+b)/2;//切り捨て
    //2つに分ける
    count+=merge_sort(array,a,s);//マージしたときの回数もカウント
    count+=merge_sort(array,s+1,b);
    //分けてソートしたのをマージする
    count+=merge(array,a,s,b);

    return count;
}