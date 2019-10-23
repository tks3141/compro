#include <iostream>
#include <stdio.h>
using namespace std;
 
struct mas {			/* foo 構造体	*/
	int color;
    int kazu;
    int link[100001];
    int aida;
    			/* public です	*/
    public:
        mas(){			/* constructor	*/
            color=0;
            aida=0;
            kazu=0;
        }
        int ini(int N){
            for(int i=0;i<N;i++){
                link[i]=-1;
            }
        }
        int get_color() {return color;}
        int linking(int k){
            link[kazu]=k;
            kazu=kazu+1;
        }


    protected:
        
};

int find(int n,int N,mas m[],int kita){
    int kazu=m[n].kazu;
    int saki;
    kazu=m[n].kazu;
    if(n==N-1){
        return 1;
    }
    for(int i=0;i<kazu;i++){
        saki=m[n].link[i];
        if(saki!=kita){
            
            int c=find(saki,N,m,n);
            if( c!=0){
                m[n].aida=c;
                return c+1;
            }
        }
        
    }
    return 0;
}

int count(int n,int N,mas m[],int kita){
    int i,c;
    c=0;
    int kazu=m[n].kazu;
    if(kazu==1){
        return 0;
    }
    for(i=0;i<kazu;i++){
        int saki=m[n].link[i];
        if(saki!=kita && m[saki].aida==0){
             c=c+count(saki,N,m,n);
        }
        
       

    }
    return c+1;
}



int count_aida_fe(int n,int hukasa,int N,mas m[],int kita,bool guuki){
    int i,c;
    c=0;
    int kazu=m[n].kazu;
    if(kazu==1){
        return 0;
    }
    c=c+count(n,N,m,n);
    for(i=0;i<kazu;i++){
        int saki=m[n].link[i];

        if(saki!=kita && m[saki].aida-hukasa+guuki>0){
            c=c+count_aida_fe(saki,hukasa,N,m,n,guuki);

        }

    }
    return c+1;
}

int count_aida_su(int n,int hukasa,int N,mas m[],int kita){
    int i,c;
    c=0;
    int kazu=m[n].kazu;
    if(kazu==1){
        return 0;
    }
    c=c+count(n,N,m,n);
    for(i=0;i<kazu;i++){
        int saki=m[n].link[i];

        if(saki!=kita && m[saki].aida-hukasa<=0){
            c=c+count_aida_su(saki,hukasa,N,m,n);

        }

    }
    return c+1;
}

int main(){
    int N;
    scanf("%d",&N);
    int a[N],b[N];
    mas m[N];
    
    for(int i=0;i<N;i++){
        m[i].ini(N);
    }
    
    for(int i=0;i<N-1;i++){
        scanf("%d %d",&a[i],&b[i]);
        m[a[i]-1].linking(b[i]-1);
        m[b[i]-1].linking(a[i]-1);
        
    }    

    m[0].color=1;
    m[N-1].color=2;
    int aida=find(0,N,m,-1);
    int fe=0;
    int su=0;
    aida=aida-2;
    if(aida==0){
        fe=count(0,N,m,-1);
        su=count(N-1,N,m,-1);
    }else if(aida%2==0){
        fe=count_aida_fe(0,aida/2,N,m,-1,0);
        su=count_aida_su(N-1,aida/2,N,m,-1);
    }else if(aida %2==1){
        fe=count_aida_fe(0,aida/2+1,N,m,-1,1);
        su=count_aida_su(N-1,aida/2,N,m,-1);
    }
    if(fe>su){
        printf("Fennec\n");
    }else if(fe<=su){
        printf("Snuke\n");
    }


    

    return 0;
    
}