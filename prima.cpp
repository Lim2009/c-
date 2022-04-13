#include <cstdio>

int n;
int main() {
    scanf("%d", &n);
    long long b;
    for(int i = 0; i < n; i++){
        scanf("%lld", &b);
        bool cek = true;
        int counter = 0;
        for(int j = 2; j <= b/2; j++){
            if(b%j == 0 && j != b){
                counter++;
            }
            if(counter > 2){
                cek = false;
                break;
            }
        }
        if(cek){
            printf("YA\n");
        }else{
            printf("BUKAN\n");
        }
    }
}