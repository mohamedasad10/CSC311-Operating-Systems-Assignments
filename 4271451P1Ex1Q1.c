//4271451
//Mohamed Asad Azim Bandarkar
//OS P1 Ex1

#include<stdio.h>

int main() {
    int x = 22;
    int *x_ptr = &x;
    
    printf("address of x: %p\n", &x);   //Print address of x
    printf("value of x: %d\n", x);   //Value of x
    printf("size of x: %lu bytes\n", sizeof(x)); //Integer size
    
    printf("address of x_ptr: %p\n", x_ptr); //printout ptr
    printf("size of x_ptr: %lu bytes\n", sizeof(x_ptr)); //Size of integer pointer
    
    char y = 'A';
    char *y_ptr = &y;
    printf("address of y: 0x%x \n", &y);
    printf("value of y: %c\n", y);
    printf("size of y: %lu bytes\n", sizeof(y)); //Size of char
    
    printf("address of y_ptr: 0x%x \n", y_ptr);
    printf("size of y_ptr: %lu bytes\n", sizeof(y_ptr)); //Size of char pointer
    
    double z = 3.141592;
    double *z_ptr = &z;
    printf("address of z: 0x%x \n", &z);
    printf("value of z: %lf\n", z);
    printf("size of z: %lu bytes\n", sizeof(z)); //Size of double
    
    printf("address of z_ptr: 0x%x \n", z_ptr);
    printf("size of z_ptr: %lu bytes\n", sizeof(z_ptr)); //Size of double pointer

    return 0;
}




