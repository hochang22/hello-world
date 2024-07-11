#include <stdio.h>

int main(){

     int N;
     scanf("%d", &N);

     int count = 0;

     for(int A = 1; A <= 500; A++){

        for(int B = 1; B <= A; B++){
            if( (A * A) - (B * B) == N) count++;
                if( (A * A) - (B * B) < N) break;
									      
        }
     }

        printf("%d\n", count);
        return 0;
}
