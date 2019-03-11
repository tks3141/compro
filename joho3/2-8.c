#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int selectionsort_2f(double* numbers,int* subarray, int n);
double calcDistance(double* U,double *V,int n);
int knn_diag(double* target_ar,double **pat_matrix,int* pat_ill,int n,int d,int k);


int main(int argc, char const *argv[])
{
    int n,d;
    scanf("%d %d",&n,&d);
    int* pat_ill=(int*)malloc(sizeof(int)*n);//患者の病気かどうかの１次元配列
    double **pat_matrix=(double**)malloc(n*sizeof(double*));//患者の情報のn*d配列
    double *target_ar=(double*)malloc(d*sizeof(double));
    for(int i=0;i<n;i++){
        pat_matrix[i]=(double*)malloc(d*sizeof(double));
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<d;j++)
        {
            scanf("%lf",&pat_matrix[i][j]);
        }
        scanf("%d",&pat_ill[i]);
    }
    for(int i=0;i<d;i++){
        scanf("%lf",&target_ar[i]);
    }       
    //入力終わり
    //計算部
    int target_ill=knn_diag(target_ar,pat_matrix,pat_ill,n,d,3);//k=3
    if(target_ill){
        printf("You have a heart disease!\n");
    }else{
        printf("You are healthy!\n");
    }

    //開放
    for(int i=0;i<n;i++){
        free(pat_matrix[i]);
    }
    free(pat_matrix);
    free(pat_ill);
    free(target_ar);
    return 0;    
}

double calcDistance(double* U,double*V,int n){
    double retval=0;
    for(int i=0;i<n;i++){
        retval+=pow((U[i]-V[i]),2);
    }
    retval=sqrt(retval);
    return retval;
}

int selectionsort_2f(double* numbers,int *subarray, int n)
{
    int i,j,k;
    int min,count=0; // 最小値を持つ要素のインデックス
    double temp; 

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
            //subarrayについても交換
            temp=subarray[i];
            subarray[i]=subarray[min];
            subarray[min]=temp;
        }
        
    }
    return count;
}

int knn_diag(double* target_ar,double **pat_matrix,int* pat_ill,int n,int d,int k)
{
    //計算部
    //すべてのテンとの距離を出す
    double *dist_ar=malloc(n*sizeof(double));
    for(int i=0;i<n;i++){
        dist_ar[i]=calcDistance(target_ar,pat_matrix[i],d);
    }

    //距離についてpat_illとソートする。
    selectionsort_2f(dist_ar,pat_ill,n);

    //k=3までを表示し、カウントする。
    int count_ill=0;

    for(int i=0;i<k;i++){
        printf("%lf %d\n",dist_ar[i],pat_ill[i]);
        count_ill += pat_ill[i];
    }
    //illか多数決
    free(dist_ar);
    return (count_ill>(k/2))? 1 :0 ;
    
}