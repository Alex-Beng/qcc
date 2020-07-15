int n;
const char ttt = 'y';
int a, b;

void main() {
    printf("input n:");
    scanf(n);
    int i;
    for (i=0; i<n; i=i+1) {
        scanf(a, b);
        printf("sum of a and b is: ", a+b, "\n");
        if (a+b > 10) {
            printf(ttt, "you got to break if greater than 10\n");
            break;
        }
        if (a+b == 10) {
            printf("got this if equal 10\n");
            continue;
        }
        printf("if less 10 you got this \n");
    }
    

    return ;
}