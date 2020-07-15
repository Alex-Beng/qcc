int a;
char b;
int c[23];
char d[23];
const int e = 1;
const char f = 'f';


int test_recusion(int a) {
    if (a == 0) 
        return 0;
    else if (a == 1)
        return 1;
    else if (a >= 2) 
        return test_recusion(a-1)+test_recusion(a-2);
}

void fuck(int n) {
    while(n>0) {
        printf(n);
        n = n-1;
    }
}

void main() {
    fuck(10);
    printf("hello world!\n");
    a = 233;
    printf("test out int a: ", a, "\n");
    b = 'b';
    printf("test out char b: ", b, "\n");
    printf("test out const int e: ", e, "\n");
    printf("test out const char f: ", f, "\n");
    
    a = 23*a - (90) + 100/10 * (23+a);
    printf("test out 23*a - (90) + 100/10 * (23+a): ", a, "\n");

    if (a>100) {
        a = 100;
    }

    int num[20];
    int i;
    for (i=0; i<20; i=i+1) {
        num[i] = test_recusion(i);
        printf("test ass: ", num[i], "\n");
        if (num[i] > 10) {
            break;
        }
        else {
            continue;
        }
    }

    

    int t;
    t = test_recusion(10);
    printf(t, "\n");


    return ;
}