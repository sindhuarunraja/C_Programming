#include <stdio.h>
int main()
{
    int x;
    printf("%d", x);
    int a=10;
    printf("pre-increment %d\n", ++a);  //11
    printf("pre-decrement %d\n", --a);  //10
    printf("post-increment %d\n", a++);  //10
    printf("post-decrement %d\n", a--);  //11
}

Logical AND OR NOT
#include <stdio.h>

int main()
{
    printf("7&&0=%d\n",7&&0);    //0 as output(gives true or false so it gives 0 or 1)
printf("7||0=%d\n",7||0);       //1 as output
printf("!0=%d",!0);             //1 as output
    return 0;
}

int main()
{
int a; 
short int b;
unsigned int c;
long int d;
float e; 
double f; 
char g;
char h[10];
printf("size of int=%d\n",sizeof(a));        //4 bytes
printf("size of short int=%u\n",sizeof(b));  //2 bytes
printf("size unsigned int=%ld\n",sizeof(c));  //4 bytes
printf("size of long int=%u\n",sizeof(d));    //8 bytes
printf("size of float=%u\n",sizeof(e));       //4 bytes
printf("size of double=%u\n",sizeof(f));      //8 bytes
printf("size of char=%u\n",sizeof(g));        //1 byte
printf("size of char=%u\n",sizeof(h));        //10bytes
}

int main()
{
int a=10,b=-12,d=023;
float c=6.8383749;
char str[5];
printf("%d\n",a); //(normal)    10
printf("%-10dhi\n",a); //(left justification )10        hi
printf("% d\n",a);  //(space padding  ) 10
printf("%05d\n",a);  //(padded with 0)00010
printf("%+d\n", b);  //(+ or - sign)-12
printf("%.2f\n", c);  //(precision)6.84
}
printf("enter sring:\n");
scanf("%s", &str);
printf("%s\n", str);
int main()
{
    int a = 10;
    float b = 3.14;
    float result1 = a + b; // a is implicitly converted to float
    int result2 = (int)b; // b is explicitly converted to int
    printf("Result1: %.2f\n", result1);   //Result1: 13.14
    printf("Result2: %d\n", result2);     //Result2: 3
}
#include <stdio.h>

int main() {
    int mathsMarks, phyMarks, chemMarks, totalMarks, mathsPhyTotal;

    printf("Enter marks in Maths: ");
    scanf("%d", &mathsMarks);

    printf("Enter marks in Physics: ");
    scanf("%d", &phyMarks);

    printf("Enter marks in Chemistry: ");
    scanf("%d", &chemMarks);

    totalMarks = mathsMarks + phyMarks + chemMarks;
    mathsPhyTotal = mathsMarks + phyMarks;

    printf("\n--- Eligibility Check ---\n");
    printf("Maths: %d, Physics: %d, Chemistry: %d\n", mathsMarks, phyMarks, chemMarks);
    printf("Total Marks (Maths + Phy + Chem): %d\n", totalMarks);
    printf("Total Marks (Maths + Phy): %d\n", mathsPhyTotal);

    if ((mathsMarks >= 65 && phyMarks >= 55 && chemMarks >= 50 && totalMarks >= 190) || (mathsMarks + phyMarks >= 140)) {
        printf("\nCongratulations! You are eligible for admission.\n");
    } else {
        printf("\nSorry, you are not eligible for admission based on the criteria.\n");
    }

    return 0;
}
//SWITCH
    int day; 
printf(“Enter any number:”); 
scanf(“%d”,&day); 
switch(day) 
{ 
case 1: printf(“Sunday”); 
break; 
case 2: printf(“Monday”); 
break; 
case 3: printf(“Tuesday”); 
break; 
case 4: printf(“Wednseday”); 
break; 
case 5: printf(“Thursday”); 
break; 
case 6: printf(“Friday”); 
break; 
case 7: printf(“Saturday”); 
break; 
default : printf(“invalid input”); 
}
// Swap using a temporary variable
int main() 
{
    int a = 10, b = 20;
    printf("Before swapping: a = %d, b = %d\n", a, b);  
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
#include <stdio.h>
int main() {
    int a = 10, b = 20;
    printf("Before swapping: a = %d, b = %d\n", a, b);   //a=10, b=20
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d\n", a, b);   //a=20, b=10
    return 0;
}
}
                                    //FUNCTIONS
/*function return type is integer so it will return the added value
to the calling function. so we will get the added value as a result*/
/*we are printing the added value in the main function. but function return type is void so it will not 
return the added value. it will give error. */
#include<stdio.h>
void add (int *a,int *b) 
{ 
int sum; 
sum = *a + *b; 
return sum; 
} 
void main() 
{ 
int a,b, res; 
printf("Enter the values of a and b:"); 
scanf("%d%d",&a,&b); 
res = add(&a,&b); 
printf("result =%d\n", res); 
}

/*below program it will give the result because we are directly 
displaying the values within function.. but it don't return any values to calling function*/
void calculateSum() {
  int x = 5;
  int y = 10;
  int sum = x + y;
  printf("The sum of x + y is: %d", sum);
}

int main() {
  calculateSum();  // call the function
  return 0;
}
/*Call by value.. even if i give 5, 6 in scanf statement 
it don't take that value in call by value*/
#include<stdio.h> 
int add (int x,int y) 
{ 
    int a=10,b=20;
int sum; 
sum = a + b; 
return sum; 
} 
void main() 
{ 
int a,b, res; 
printf("Enter the values of a and b:"); 
scanf("%d%d",&a,&b); 
res = add(a,b); 
printf("result =%d\n", res); 
}
   //Array address
#include<stdio.h>
int main() {
    int x[10] = {10,20,30,40}; // Block scope
    
        
        //printf("%d\n", sizeofx[0]);
        //printf("%d\n", sizeofx[1]); 
        //printf("%d\n", sizeofx[2]);
        //printf("%d\n", sizeofx[3);
        printf("%p\n", &x[0]);
        printf("%p\n", &x[1]); 
        printf("%p\n", &x[2]);
        printf("%p\n", &x[3]);
    }
    
    #include <stdio.h> 
int main()
{
char ar[]="hello";
printf("%s\n",ar);         //hello
printf("%lu\n", sizeof(ar));     //6
int hi[5]={10,20,30,4,5};
printf("%d",hi[4]);          //5
}


/*Write functions to implement string operations such as compare, concatenate, string length. 
Convince the parameter passing techniques.*/
#include<stdio.h>
#include<string.h>
void compare(char [ ],char [ ]);
void concat(char [ ],char [ ]); 
void length(char [ ]); 
void main( )
{ 
int n,digit; 
char str1[10],str2[10];
while(1){
printf("choices: \n1-compare\n2-concatenate\n3-length of string");
printf("\nenter your choice="); 
scanf("%d",&n); 
switch(n) 
{
case 1:printf("enter first string=");
scanf("%s",str1); 
printf("enter second string="); 
scanf("%s",str2); 
compare(str1,str2);
break;
case 2: printf("enter first string="); 
scanf("%s",str1); 
printf("enter second string="); 
scanf("%s",str2); 
concat(str1,str2);
break; 
case 3:printf("enter string=");
scanf("%s",str1);
length(str1);
break;
default: printf("wrong choice");
break;
} 
}}
void compare(char str1[ ],char str2[ ])
{ 
int i; 
i=strcmp(str1,str2);
if(i==0) 
printf("strings are equal\n "); 
else 
printf("string are not equal\n"); 
} 
void concat(char str1[ ],char str2[ ]) 
{ 
strcat(str1,str2); 
printf("concatenate string=%s",str1); 
} 
void length(char str1[ ]) 
{ 
int len;
len=strlen(str1); 
printf("the length of string=%d",len); 
}
 //program t0 read and write string using gets,puts
#include<stdio.h> 
int main() 
{
    char a[50];
    printf("enter the sentence\n");
    gets(a);//using gets method.. gives warnig in compiler by using this method
    fgets(a, 50, stdin); //this by fgets method
    puts(a);
    printf("%s",a); //it gives the first string , stops when it encounter the space
}

//C program to reverse the string
#include<stdio.h>
#include<string.h>

int main()
{
    char mystrg[60];
    int leng, i;
    printf("insert the string to reverse: ");
    scanf( "%s", mystrg );
    leng = strlen(mystrg);
    for(i = leng - 1; i >= 0; i--) {
        printf("%c", mystrg[i]);        
    }
    return 0;
}
//find the length of string
#include<stdio.h>
#include<string.h>

int main()
{
    char mystrg[60];
    int i;
    printf("insert the string to find length ");
    scanf( "%[^\n]s", mystrg );
    while(mystrg[i]!='\0')
    {
        i++;
          
    }
    printf("length of %s=%d", mystrg,i);  
    return 0;
}

//Return multiple values from a function using pointer

#include<stdio.h>
void myFunction(int *ptr1, int *ptr2, float *ptr3) //creating pointer variable for x(ptr1),y(ptr2),z(ptr3)
{
    *ptr1 = 10;   //by dereference(*) operator we are modifying the value of x
    *ptr2 = 20;   
    *ptr3 = 3.14; 
}
int main() {
    int x = 0;
    int y = 0;
    float z = 0.0;
    myFunction(&x, &y, &z); 
    printf("x = %d, y = %d, z = %f\n", x, y, z);
    return 0;
}

output: x = 10, y = 20, z = 3.140000

 //to check whether the given no is +ve,-ve,0 using pointer
#include <stdio.h>

int main() {
    int num;
    int *ptr = &num;

    printf("Enter a number: ");
    scanf("%d", ptr);

    if (*ptr > 0) {
        printf("The number is positive.\n");
    } else if (*ptr < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int var = 10;   // A normal integer variable
    int *ptr1;      // Level-1 pointer
    int **ptr2;     // Level-2 pointer (pointer to a pointer)
    int ***ptr3;    // Level-3 pointer (pointer to a pointer to a pointer)

    // Initialization
    ptr1 = &var;    // ptr1 stores the address of var
    ptr2 = &ptr1;   // ptr2 stores the address of ptr1
    ptr3 = &ptr2;   // ptr3 stores the address of ptr2

    // Accessing the value
    printf("Value of var: %d\n", var);         // Direct access
    printf("Value via ptr1: %d\n", *ptr1);     // Dereference once
    printf("Value via ptr2: %d\n", **ptr2);    // Dereference twice
    printf("Value via ptr3: %d\n", ***ptr3);   // Dereference thrice
    
    // Updating the value using a chained pointer
    ***ptr3 = 35; 
    printf("New value of var: %d\n", var); // Output: 35

    return 0;
}
 output:
 Value of var:10
 Value via ptr1:10
 Value via ptr2:10
 Value via ptr3:10
 New value of var: 35

 #include<stdio.h> 
int main() { 
int x=10,*ptr=&x,arr[10]={1,2,3},*ptr2=arr;
printf("%d \n",x); 
printf("%d \n",&x);
printf("%d \n",ptr);
printf("%d \n",&ptr);
printf("%d \n",*ptr);
printf("%d \n",*ptr*100);
printf("%d \n",&arr);
printf("%d \n",arr[0]);
printf("%d \n",*ptr2);
for(int i=0;i<10;i++){
printf("%d\t",*(ptr2+i));
}
printf("\n%d \n",*(ptr2+1));
printf("%d \n",*(ptr2+2));
printf("%d \n",*(ptr2+3));
return 0; 
} 

output:
10 
-1855492628 
-1855492628 
-1855492640 
10 
1000 
-1855492688 
1 
1 
1       2       3       0       0       0       0  0       0       0
2 
3 
0 

//command line argument
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Number of arguments (including program name): %d\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
Compare string without library function

#include <stdio.h>
#include<string.h>
int main()
{
    int len1, len2, i, count = 0;
    char string1[]="hi",string2[]="heii";
 len1 = strlen(string1);
 len2 = strlen(string2);
if (len1 != len2)
 printf("not equal");
 else{
 for (i = 0; i < len1; i++)
 {
 if (string1[i] == string2[i])
 count++;
 }
 if (count == len1)
 printf("equal");
 else
 printf("not eual");
}

    return 0;
}

Break and exit(0) 
#include <stdio.h>
#include <stdlib.h> // Required for exit()

break and exit(0) difference

int main() {
    for (int i = 0; i < 5; i++) {
        if (i == 2) {
            break; // Exits the loop, but program continues
        }
        printf("Loop iteration (break): %d\n", i);
    }
    printf("After the break statement (program continues).\n");
    
    printf("--- Separator ---\n");

    for (int i = 0; i < 5; i++) {
        if (i == 2) {
            exit(0); // Terminates the entire program immediately
        }
        printf("Loop iteration (exit): %d\n", i);
    }
    // This line will never be executed if exit(0) is called
    printf("This line will not be printed.\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h> // Required for exit()

break and exit(0) difference

int main() {
    for (int i = 0; i < 5; i++) {
        if (i == 2) {
            break; // Exits the loop, but program continues
        }
        printf("Loop iteration (break): %d\n", i);
    }
    printf("After the break statement (program continues).\n");
    
    printf("--- Separator ---\n");

    for (int i = 0; i < 5; i++) {
        if (i == 2) {
            exit(0); // Terminates the entire program immediately
        }
        printf("Loop iteration (exit): %d\n", i);
    }
    // This line will never be executed if exit(0) is called
    printf("This line will not be printed.\n");

    return 0;
}



#include<stdio.h> 
void main( ) 
{ 
int i,j; 
for(i=1;i<=5;i++) 
{ 
printf(“\n”); 
Outer for(j=1;j<=i;j++) 
for loop { Inner 
printf(“%d”,j); for loop 
} 
}

Output:
1 2 3
1 2 3 4
1 2 3 4