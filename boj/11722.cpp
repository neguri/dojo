#include <iostream>

int a[1001];
int d[1001];
int n;

int main()
{
    std::cin>>n;
    for(int i = 0; i<n; i++){
        std::cin>>a[i];
        d[i] = 1;
    }

    int max = 1;

    for(int i = 1; i<n; i++){
        for(int j = 0; j<i; j++){

            if(a[i] < a[j] && (d[i] < d[j] + 1)){
                d[i] = d[j]+1;
                if(max < d[i]) max = d[i];
            }
        }
    }

    std::cout<<max<<std::endl;

    return 0;
}




#if 0
#include <iostream>
#include <cstdio>

int n,m;
int a[1001];
int d[1001];

int main()
{
    std::cin>>n;
    m = 1;

    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
        d[i] = 1;
    }

    for(int i = 1; i<n; i++){

        for(int j = 0; j<i; j++){
            if(a[i] < a[j] && (d[i] < d[j]+1)){

                d[i] = d[j]+1;
                if(d[i] > m) m = d[i];

            }

        }
    }

    std::cout<<m<<std::endl;
    /*
    for(int i = 0; i<n; i++) {
        std::cout<<d[i]<<" ";
    }
    std::cout<<std::endl;
    */

    return 0;
}
#endif
