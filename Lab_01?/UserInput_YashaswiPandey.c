 #include<stdio.h>
  int main(){
    int a,b,sum,sub,mul,div,mod;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum=a+b;
    printf("On addition Sum = %d", sum);
    sub=a-b;
    printf("On subtraction Sub = %d", sub);
    mul=a*b;
    printf("On Multiplication Mul = %d", mul);
    div=a/b;
    printf("On Division Div = %d", div);
    mod=a%b;
    printf("On Modulus Mod = %d", mod);
    return 0;
  }