    #include<stdio.h>
    #include<time.h>
    #include<stdlib.h>
    int main()
    {
        int n;
        srand((unsigned) time(NULL));
        n=rand()%101;//��0~100���������
        printf("%d\n",n);
        return 0;
    }
