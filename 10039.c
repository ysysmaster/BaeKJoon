 #include <stdio.h>
    int main() {
        int num, sub=0;
        int i;
        
        for(i=0; i<5; i++){
            scanf("%d", &num);
            if(num<40)
            sub+=40;
            else
            sub+=num;
        }
        printf("%d", sub/5);
    }