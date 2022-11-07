#include <stdio.h>
#include <conio.h>
struct complex
{
   float real, img;
}a, b, c;

   struct complex read(void);
   void write(struct complex);
   struct complex add(struct complex, struct complex);
   
void main ()
{
   clrscr();
   printf("Enter the 1st complex number\n ");
   a = read();
   write(a);
   printf("Enter  the 2nd complex number\n");
   b = read();
   display(b);
   printf("Addition of the complex number is : \n ");
   c = add(a, b);
   display(c);
   getch();
}
struct complex read(void)
{
   struct complex t;
   printf("Enter the real part\n");
   scanf("%f", &t.real);
   printf("Enter the imaginary part\n");
   scanf("%f", &t.img);
   return t;
}
void display(struct complex a)
{
   printf("Complex number  is\n");
   printf(" %.1f + i %.1f", a.real, a.img);
   printf("\n");
}
struct complex add(struct complex p, struct complex q)
{
   struct complex t;
   t.real = (p.real + q.real);
   t.img = (p.imag + q.img);
   return t;
}