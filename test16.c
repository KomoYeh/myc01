#include <stdio.h>

void funcA( int a, int b ){
    funcB("Nigger", 20);
    printf("%d\n" ,  a + b);
    funcB("Monkey", 35);
}

int main(){
    funcA( 10, 20 );

    return 0;
}

void funcB( char* name, int age){
    printf("Hello %s\n", name);
    printf("Your age is %d\n", age);
}

