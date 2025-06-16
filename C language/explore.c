// #include<stdio.h> 
// int main( )
// {
// int a,b,c,d,e,f;
// printf("Enter the number a"-);
// scanf("%d%d%d",&a,&b,&c);
// d = a +b;
// e = b + c;
// f = a + c;
// if (d > c && e > a && f > b) {
// 	prinf("valid triangle");
// } else {
// 	printf("NOt ");
// }
// 	return 0;
// }

//leap year 
// #include <stdio.h>

// int main() {
// 	int year;
// 	scanf("%d", &year);

// 	if (year % 100 == 0) {
// 		if (year % 400 == 0) {
// 			printf("%d is a leap year.", year);
// 		} else {
// 			printf("%d is not a leap year.", year);
// 		}
// 	} else {
// 		if (year % 4 == 0) {
// 			printf("%d is a leap year.", year);
// 		} else {
// 			printf("%d is not a leap year.", year);
// 		}
// 	}

// 	return 0;
// }

// #include <stdio.h>

// int main() {
// 	int y = 500;
	
// }

// #include <stdio.h>
// int main() {
// 	int a = 2;
// 	if (a > 1 || a = 5) {
// 		printf("Hello");
// 	}
// 	printf("%d",a);
// 	return 0;
// }

//multiplication of 5 table for 5 times: 
// #include <stdio.h>
// int main() {
//     // int n = 5;
//     // while (n--) {
//         const int a = 5;
//         int rep = 1;
        
//         while (rep <= 20) {
//             printf("%d * %d = %d\n",a,rep,a*rep);
//             rep++;
//         }
//         printf("\n");
//     // }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int temp = n;
//     int rev = 0;
//     while (temp != 0) {
//         rev = rev * 10 + temp % 10;
//         temp /= 10;
//     }

//     if (rev == n) {
//         printf("The given no. is palindrome.");
//     } else {
//         printf("The given no. is not palindrome.");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         if (i == 3) {
//             continue;
//         }
//         printf("%d\n",i);
//     }
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     for (int i = 1; i <= 7; i += 2) {
//         for (int j = 1; j <= i; j++)
//             printf("* ");
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n = 1;
//     int a;
//     scanf("%d", &a);
//     for (int i = 1; i <= a; i++) {
//         for (int j = 1; j <= n; j++) {
//             printf("* ");
//         }
//         printf("\n");
//         n += 2;
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int i = 1;
//     while (i <= 7) {
//         int j = 1;
//         while (j <= i) {
//             printf("* ");
//             j++;
//         }
//         printf("\n");
//         i += 2;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() 
// {
//    char c;
//    scanf("%c", &c);
//    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
//        printf("Alphabet");
//    } else {
//        printf("Not");
//    }
//     return 0;
// }

// #include <stdio.h>
// int main() 
// {
//  int a,b;
//  char o;
//  scanf("%d %c %d", &a, &o, &b);
//  switch (o) {
//      case '+':
//      printf("%d\n", a+b);
//      break;
//      case '-':
//      printf("%d\n", a-b);
//      break;
//      case '*':
//      printf("%d\n", a*b);
//      break;
//      case '/':
//      printf("%d\n", a/b);
//      break;
//  }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a;
//     scanf("%d", &a);
//     for (int i = 1; i <= a; i++) {
//         for (int j = a-i; j >= 1; j--) {
//             printf("* ");
//         }
//         for (int j = i; j >= 1; j--) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// #include <stdio.h>
// int main() {
//     int a;
//     scanf("%d", &a);
//     for (int i = 1; i <= a; i++) {
//         for (int j = a-i; j >= 1; j--) {
//             printf("  ");
//         }
//         for (int j = i; j >= 1; j--) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     for (int i = 4; i >= 1; i--) {
//         for (int j = 1; j <= a - i; j++) {
//             printf("  ");
//         }
//         for (int j = i; j >= 1; j--) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a;
//     scanf("%d", &a);


//     for (int i = 1; i <= a; i++) {
//         int dir = 1;
//         for (int j = 1; j <= i; j++) {
//             printf("%d", dir);
//             if (dir == 1)
//             dir--;
//             else 
//             dir++;
//         }
//         for (int j = a - i; j >= 1; j--) {
//             printf(" ");
//         }
//         for (int j = a - i; j >= 1; j--) {
//             printf(" ");
//         }
//         dir = 1;
//         for (int j = 1; j <= i; j++) {
//             printf("%d", dir);
//             if (dir == 1)
//             dir--;
//             else 
//             dir++;
//         }
//         printf("\n");
//     }
//     for (int i = 1; i <= a; i++) {
//         int dir = 1;
//         for (int j = a - i; j >= 1; j--) {
//             printf("%d", dir);
//             if (dir == 1) dir--;
//             else dir++;
//         }
//         for (int j = 1; j <= i; j++) {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++) {
//             printf(" ");
//         }
//         dir = 1;
//         for (int j = i; j <= a-1; j++) {
//             printf("%d", dir);
//             if (dir == 1) dir--;
//             else dir++;
//         }
//         printf("\n");
//     }
// }


// #include <stdio.h>
// int main() {
//     for (int i = 5; i >= 1; i++) {
//         int x = 1;
//         for (int j = 1; j <= i; j++) {
//             printf(" ");
//         }
        
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     char a = 'A';
//     switch (a) {
//         case 'A'...'Z':
//         printf("aashish");
//         break;

//         default:
//         printf("Piyush");



//     } 
//     return 0;
    
// }

// #include <stdio.h>
// int main() {
//     for (int i = 1; i <= 3; i++) {
//         for (int j = 3 - i; j >= 1; j--) {
//             printf(" ");
//         }
//         for (int j = 1; j <= 2 * i -1; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// #include <stdio.h>
// int power(int base, int exp);
// int main() {
//     int n;
//     scanf("%d",&n);
//     int temp = n;
//     int c = 0;
//     while (temp != 0) {
//         c++;
//         temp /= 10;
//     }
//     temp = n;
//     int arm = 0;
//     while (temp != 0) {
//         int r = temp % 10;
//         arm += power(r, c);
//         temp /= 10;
//     }
//     printf("%d", arm);
//     if (arm == n) {
//         printf("The given no. is armstrong.");
//     } else {
//         printf("The given no. is not armstrong.");
//     }
//     return 0;
// }
// int power(int base, int exp) {
//     int result = 1;
//     for (int i = 1; i<= exp; i++) {
//         result *= base;
//     }
//     return result;
// }

// #include<stdio.h>
// int main()
// {
//     int n,a,arm=0,r;
//     scanf("%d",&n);
//     a=n;
//     while(n>0)
//     {
//         r=n%10;
//         arm=(r*r*r)+arm;
//         n/=10;
//     }
//     if(a==arm)
//     {
//         printf("Armstrong");
//     }
//     else
//     {
//         printf("Not armstrong");
//     }
//     return 0;
// }

//lcm
// #include <stdio.h>
// int main() {
//     int a,b, low, high;
//     scanf("%d%d", &a, &b);
//     if (a < b) {
//         low = a;
//         high = b;
//     } else {
//         low = b;
//         high = a;
//     }
//     int temp = low;
//     int lcm = 0;
//     while (1) {
//         if (temp % a == 0 && temp % b == 0) {
//             lcm = temp;
//             break;
//         }
//         temp += low;
//     }
//     printf("The lcm of the digit is %d", lcm);
//     return 0;
// }

//fibonachi
// #include <stdio.h>
// int main() {
//     int a = 0, b= 1, c =0;
//     for (int i = 0; i <= 10; i++) {
//         printf("%d",a);
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return 0;
// }

//palindrome
// #include <stdio.h>
// int main() {
//     int a;
//     scanf("%d", &a);
//     int temp = a;
//     int rev = 0;
//     while (temp != 0) {
//         rev = rev * 10 + temp % 10;
//         temp /= 10;
//     }
//     if (rev == a) {
//         printf("The given no. is palindrome.");
//     } else {
//         printf("The given no. is not palidrome no.");
//     }
//     return 0;
// }

//prime no
// #include <stdio.h>
// int main() {
//     int a, c = 0;
//     scanf("%d", &a);
//     if (a < 2) {
//         printf("The given no. is not prime no.");
//     } else {
//         for (int i = 2; i < a; i++) {
//             if (a % i == 0) {
//                 c++;
//             }
//         }
//         if (c > 0) printf("The given no. is not prime no.");
//         else printf("The given no. is prime");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int year;
//     scanf("%d", &year);
//     if (year % 100 == 0) {
//         if (year % 400 == 0) {
//             printf("The given no. is leap year.");
//         } else {
//             printf("The given no. is not leap year.");
//         }
//     } else {
//         if (year % 4 == 0) {
//             printf("The given no. is leap year.");
//         } else {
//             printf("The given no. is not leap year.");
//         }
//     }
//     return 0;
// }

//binary to decimal
// #include <stdio.h>
// int main() {
//     int binary, decimal = 0, p = 1;
//     scanf("%d", &binary);
//     while (binary != 0) {
//         int r = binary % 10;
//         if (r == 1) {
//             decimal += p;
//         }
//         p *= 2;
//         binary /= 10;
//     }
//     printf("%d", decimal);
//     return 0;
// }

//decimal to binary;
// #include <stdio.h>
// int main() {
//     int binary = 0, decimal, p = 1;
//     scanf("%d", &decimal);
//     while (decimal) {
//         int a = decimal % 2;
//         binary = a * p + binary;
//         p *= 10;
//         decimal = decimal / 2;
//     }
//     printf("%d", binary);
//     return 0;
// }

//add 1 to each digit
// #include <stdio.h>
// int main() {
//     int a, result = 0, p = 1;
//     scanf("%d", &a);
//     while (a != 0) {
//         int r = a % 10;
//         r++;
//         result = result + r * p;
//         p *= 10;
//         a /= 10;
//     }
//     printf("%d", result);
//     return 0;
// }

//HCF
// #include <stdio.h>
// int main() {
//     int num1, num2, low, high, HCF;
//     scanf("%d%d", &num1, &num2);
//     if (num1 < num2) {
//         low = num1;
//         high = num2;
//     } else {
//         low = num2;
//         high = num1;
//     }
//     int temp = low;
//     while (1) {
//         if (num1 % temp == 0 && num2 % temp == 0) {
//             HCF = temp;
//             break;
//         }
//         temp--;
//     }
//     printf("%d", HCF);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i,a,b;
//     scanf("%d %d",&a,&b);
//     for(i=1;i<=100;i++)
//     {
//         if(a%i==0 && b%i==0)
//         {
//         printf("%d",i);
//         break;
//         }
//     }
//     return 0;
// }

//pattern print
// #include <stdio.h>
// int main() {
//     int n = 5;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//pattern 
// #include <stdio.h>
// int main() {
//     int n = 5;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//pattern 
// #include <stdio.h>
// int main() {
//     int n = 5;
//     for (int i = n; i >= 1; i--) {
//         for (int j = i; j >= 1; j--) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//pattern
// #include <stdio.h>
// int main() {
//     int n = 5;
//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//pattern
// #include <stdio.h>
// int main() {
//     for (int i = 1; i <= 5; i++) {
//         for (int j = 5; j >= i; j--) {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//pattern
// #include <stdio.h>
// int main() {
//     int a = 1;
//     for (int i = 1; i <= 5; i++) {
//         for (int j = 1; j <= i; j++) {
//             if (a <= 12) {
//                 printf("%d ", a);
//                 a++;
//             } else {
//                 break;
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

//pattern
// #include <stdio.h>
// int main() {
//     int n = 5;
//     for (int i = 1; i <= n; i++) {
//         //for spaces;
//         for (int j = n - i; j >= 1; j--) {
//             printf("  ");
//         }
//         //for star
//         for (int j = 1; j <= i * 2 - 1; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//pattern
// #include <stdio.h>
// int main() {
//     int n = 5;
//     for (int j = 1; j <= n; j++) {
//         for (int i = 1; i <= j * 2 - 1; i++) {
//             printf ("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//degree to fahreheit
// #include <stdio.h>
// int main() {
//     float a = 1.25;
//     printf("%f", a);
//     return 0;
// }

//bitwise operator
// #include <stdio.h>
// int main() {
//     int a = -12, b = 13;
//     printf("This is bitwise and operation %d \n", a & b);
//     printf("This is bitwise or operator %d \n", a | b);
//     printf("This is bitwise not operator %d \n", ~a);
//     printf("this is XOR operator %d \n", a ^ b);
//     return 0;
// }

// #include<stdio.h>
// int main( )
// {
//  int j = 2;
//  int b = j + 1;
//  switch(b)
//  {
// 	case b:
// 		printf("Code");
// 	case 2:
// 		printf("Quotient");
// 	case 3:
// 		printf("Learning");
// 	default:
// 		printf("CodeQuotient");
//  }
//  return 0;
// }

// #include<stdio.h>
// int main( )
// {
//  int a;
//  float b = 3.0 ;
//  switch ( a = b + 1 )
//  {
// 	case 4:
// 		printf("Code");
// 		break;
// 	default:
// 		printf("Quotient");
//  }
//  return 0;
// }

//power function using recursion
// #include <stdio.h>
// long long int power(int base, int exp) {
//     if (exp == 0) {
//         return 1;
//     } else {
//         return base * power(base, exp -1);
//     }
// }
// int main() {
//     int test_case;
//     scanf("%d", &test_case);
//     while (test_case--) {
//         int base, exp;
//         scanf("%d%d", &base, &exp);
//         long long int ans = power(base, exp);
//         printf("%d", ans);
//     }
//     return 0;
// }

//form a new number 
// #include <stdio.h>
// int even(int n, int p);
// int main() {
//     int n, p = 1;
//     scanf("%d", &n);
//     printf("%d\n", even(n, p));
//     return 0;
// }
// int even(int n, int p) {
//     if (n == 0) return 0;

//     int r = n % 10;
//     if (r % 2 == 0) {
//         return r * p + even(n/10, p * 10);
//     }
//     return even(n/10, p);
// }

// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     int ans = 0;
//     int p = 1;
//     while (n != 0) {
//         int r = n % 10;
//         if (r % 2 == 0) {
//             ans = r * p + ans;
//             p *= 10;
//         }
//         n/=10;
//     } 
//     printf("%d", ans);
//     return 0;
// }

// #include <stdio.h>
// int sumofDigit(int n);
// int main() {
//     int n;
//     scanf("%d", &n);
//     int ans = sumofDigit(n);
//     printf("%d", ans);
//     return 0;
// }
// int sumofDigit(int n) {
//     if (n == 0) return 0;
//     return n % 10 + sumofDigit(n/10);
// }

//Binary Equivalent using recursion
// #include <stdio.h>
// int decimalToBinary(int n);
// int main() {
//     int n;
//     scanf("%d", &n);
//     int ans = decimalToBinary(n);
//     printf("%d", ans);
//     return 0;
// }
// int decimalToBinary(int n) {
//     if (n == 0) {
//         return 0;
//     } else if (n == 1) {
//         return 1;
//     }

//     return (n % 2) + decimalToBinary(n / 2) * 10;
// }

//fibonacci series using recursion
// #include <stdio.h>
// int printFibo(int n) {
//     if (n == 1) return 0;
//     if (n == 2) return 1;
//     return printFibo(n-1) + printFibo(n-2);
// }
// void fibo(int n) {
//     for (int i = 1; i <= n; i++) {
//         printf("%d", printFibo(i));
//     }
// }
// int main() {
//     int n;
//     scanf("%d", &n);
//     fibo(n);
//     return 0;
// }

// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>
// int user = 0, co = 0;
// void game(int c, int u);
// int computerChoice();
// int main() {
//     int c, u;
//     do {
//     printf("1 for rock \n2 for paper\n3 for scissor.\n");
//     scanf("%d", &u);
//     c = computerChoice();
//     printf("%d %d\n", u, c);
//     game(c, u);
//     } while (user <= 10 && co <= 10);
//     if (co > user) {
//         printf("\nComputer won");
//     } else {
//         printf("\nUser won.");
//     }
//     return 0;
// }
// int computerChoice() {
//     srand(time(0));
//     int r = (rand() % 3) + 1;
//     return r;
// }
// void game(int c, int u) {
//     int g;
//     //for 1 = rock
//     // 2 = paper
//     // 3 = scissor

//     switch (c) {
//         //rock
//         case 1:
//         if (u == 1) printf("Draw");
//         else if (u == 2) {printf("Won"); user++; }
//         else {printf("Lost"); co++;}
//         break;

//         case 2:
//         if (u == 2) printf("Draw");
//         else if ( u == 1) {printf("Lost"); co++; } 
//         else {printf("Win"); user++; }
//         break;

//         case 3:
//         if (u == 3) printf("Draw");
//         else if ( u == 2) {printf("Lost"); co++;}
//         else {printf("Won"); user++;}
//         break;

//         default:
//         printf("Please enter valid input..");
//     }
// }

// #include <stdio.h>
// int main() {
//     int n = 5;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j < i; j++) {
//             printf("  ");
//         }
//         for (int j = 5; j >= i; j--) {
//             printf("%d ", j);
//         }
//         for (int j = i+1; j <= 5; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>
// int main () {
//     int a = 5;
//     int* p = a;
//     printf("%d\n%d", a, p);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     char a[6] = "aashish";
//     for 
//     return 0;
// }

// #include <stdio.h>
// int func1(int a);
// int main() {
//     printf("%d",func1(348));
// }
// int func1(int a)
// {
//     int m,n;
//     if (a < 10) 
//         return((10 * a) + a);
//     else
// 	{
// 	    m = func1(a / 10);
// 	    n = func1(a % 10);
//         return ((100 *  m) + n);
//     }
// }

// #include <stdio.h>
// int find(int a[], int n);
// int main() {
//     int n = 8;
//     int a[8] = {1,4,1,9,5,6,5,1};
//     printf("%d", find(a,n));
//     return 0;
// }
// int find(int a[], int n) {
//     int dub[20];
//     int z = 0, co = 0;
//     for (int i = 0; i < n; i++) {
//         int c = 0;
//         for (int j = i + 1; j < n; j++) {
//             if (a[i] == a[j]) {
//                 c++;
//             }
//         }
//         int check = 1;
//         for (int k = 0; k <= z; k++) {
//             if (a[i] == dub[k]) {
//                 check = 0;
//             }
//         }
//         if (c > 0 && check) {
//             co++;
//             dub[z++] = a[i];
//         }
//     }
//     return co;
// }

// #include <stdio.h>
// int main() {
//     int *p = 5;
//     printf("%d", *p);
//     return 0;
// }

// #include<stdio.h>

// int main()
// {
// 	int v1 = 10;
// 	int v2 = 25;
// 	int* p1 = &v1;
// 	int* p2 = &v2;
// 	*p1 += *p2;
// 	p2 = p1;
// 	*p2 = *p1 + *p2;
// 	printf("%d %d", v1, v2);
// 	return 0;
// }

// #include <stdio.h>
// void swap(int* a, int* b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main() {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int s= 0, e = 9;
//     while (s < e) {
//         swap(&arr[s], arr+e);
//         s++;
//         e--;
//     }
//     for (int i = 0; i <= 9; i++) {
//         printf("%d ", arr[i]);
//     }
// }

// #include <stdio.h>
// int fibo(int n);
// int main() {
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++) {
//         printf("%d", fibo(i));
//     }
//     return 0;
// }
// int fibo(int n) {
//     if (n == 0) return 0;
//     if (n == 1) return 1;
//     return fibo(n-1) + fibo(n-2);
// }

//find gcd
// #include <stdio.h>
// int gcd(int a, int b) {
//     if (b == 0) return a;
//     return gcd(b, a % b);
// }
// int main() {
//     int a, b;
//     scanf("%d%d", &a, &b);
//     printf("The GCD is %d", gcd(a,b));
//     return 0;
// }

// #include<stdio.h> 
// float circle(int r)
// {
//  float a;
//  a = 3.14 * r * r ;
//  return (a);
// }

// int main( )
// {
//  float area;
//  float r = 2;
//  area = circle(r);
//  printf("%f", area) ;
//  return 0;
// }

// #include<stdio.h> 
// int main( )
// {
// 	int array[26], i ;
// 	for ( i = 0 ; i <= 25 ; i++ )
// 	{
// 		array[i] = 'A' + i ;
// 		printf ( "%c ", array[i] ) ;
// 	}
// 	return(0);
// }

// #include <stdio.h>
// #include <math.h>
// int main() {
//     float a,b,c;
//     scanf("%f%f%f", &a, &b, &c);
//     float d = b*b - 4*a*c;
//     if (d > 0) {
//         printf("Roots are real and distinct\n");
//         printf("Root1=%f\n", (-b+sqrt(d))/(2*a));
//         printf("Root2=%f\n", (-b-sqrt(d))/(2*a));
//     } else {
//         printf("Roots are imaginary");
//     }
//     return 0;
// }

// #include <stdio.h>
// int insert(int arr[], int size, int n, int pos)
// {
//      int temp;
//      for (int i = pos; i <= size; i++) {
//          temp = arr[i];
//          arr[i] = n;
//          n = temp;
//      }
// }

// int main()
// {
//   int t,arr[100],n,pos;
//   scanf("%d",&t);
//   int i;
//   for(i=0;i<t;i++)
//     scanf("%d",&arr[i]);
//   scanf("%d%d",&n,&pos);
//   insert(arr,t,n,pos);
//   for(i=0;i<=t;i++)
//     printf("%d ",arr[i]);
//   return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main() {
//     int arr[10];
//     for (int i = 0; i < 10; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int p = 0, n = 0, o = 0, e = 0;
//     for (int i = 0; i < 10; i++) {
//         if (arr[i] >=0) p++;
//         else  n++;
//         if (arr[i] % 2 == 0) e++;
//         else o++;
//     }
//     printf("%d\n%d\n%d\n%d", p, n, o, e);
//     return 0;
// }

// int main() {
//     int n = -3;
//    if (n % 2 == 1) 
//         printf("aashish fidhafoidhws%d",n%2);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int matrix1[3][3] = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };
//     int matrix2[3][3] = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };
//     int matrix[3][3];
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             matrix[i][j] = 0;
//             for (int k = 0; k < 3; k++) {
//                 matrix[i][j] += matrix1[i][k] * matrix2[k][j];
//             }
//         }
//     }
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int matrix[3][3] = {
//         {1,0,0},
//         {0,1,0},
//         {0,0,1}
//     };
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             if (i == j) {
//                 if (matrix[i][j] != 1) {
//                     printf("THis is not diagonal matrix");
//                     return 0;
//                 }
//             }
//              else if (matrix[i][j] != 0) {
//                 printf("THis is not diagonal matrix");
//                 return 0;
//             }
//         }
//     }
//     printf("THis is diagonal matrix");
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int decimal;
//     scanf("%d", &decimal);
//     int ans = 0;
//     int p = 1;
//     while (decimal != 0) {
//         int temp = decimal % 2;
//         ans = ans + temp * p;
//         p *= 10;
//         decimal /= 2;
//     }
//     printf("%d", ans);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     int ans = 0;
//     if (n == 0) ans = 1;
//     else {
//         int p = 1;
//         while (n != 0) {
//             int r = n % 10;
//             if (r == 1) r = 0;
//             else r = 1;
//             ans = ans + r * p;
//             p *= 10;
//             n /= 10;
//         }
//     }
//     printf("%d\n", ans);

//     if (ans % 10 == 0) printf("%d", ans + 1);
//     else {
        
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a,b,c;
//     scanf("%d%d%d", &a, &b, &c);

//     if ((a + 1 == b && a + 2 == c) || (a+1 == c && a+2==b) || (b+1 == a && a+2 == c) || (b +1 == c && b + 2 == a) || (c + 1 == a && c + 2 == b) || (c + 1 == b && c + 2 == a)) {
//         printf("YES");
//     } else {
//         printf("NO");
//     }
// }

// #include<stdio.h>
// int arr[ ] = {1, 2, 3, 4};
// int count;    
// int incr() 
// {
// 	return ++count;
// }
// int main () 
// { 
// 	arr[count++]= incr();
// 	printf ("%d",  arr[count]); 
// 	return 0;
// }

// #include<stdio.h>

// void func(int a[3][3])
// {
//     int i,j;
//     for(i=0;i<3;i++)
//         for(j=0;j<2;j++)
//             if(a[i][j] > a[i][j+1])
//                 a[i][j] = a[i][j+1];
// }

// int main()
// {
//     int m[3][3] = {1,2,3,4,5,6,7,8,9};
//     int a,b;
//     func(m);
//     for(a=0; a<3; a++)
//         printf("%d", m[0][a]);
//     return 0;
// }

// #include<stdio.h>

// void func(int a[3][3])
// {
//     int i,j;
//     for(i=0;i<3;i++)
//         a[i][1] = a[i][0] + a[i][2];
// }

// int main()
// {
//     int m[3][3] = {1,2,3,4,5,6,7,8,9};
//     int a,b;
//     func(m);
//     for(a=0;a<3;a++)
//         printf("%d", m[0][a]);
//     return 0;
// }

// #include<stdio.h>

// void func(int a[5][5])
// {
//     int i,j,s1,s2;
//     for(i=1; i<3; i++)
// 	{
//         for(j=1; j<2; j++)
//         {
//             s1 = a[i-1][j-1] + a[i+1][j+1];
//             s2 = a[i-1][j+1] + a[i+1][j-1];
//             if(s1 > s2)
//                 a[i][j] = s1;
//             else
//                 a[i][j] = s2;
//         }
//     }
// }

// int main()
// {
//     int m[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
//     int a,b;
//     func(m);
//     for(a=0;a<5;a++)
//         printf("%d", m[0][a]);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int* p = (int*)malloc(sizeof(int));
//     *p = p + 1;
//     *p = 25;
//     printf("%d", *p);
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// int main () {
//     int* pp = (int*)malloc(10 * sizeof(int));
//     for (int i = 0; i < 10; i++) scanf("%d", (pp+i));
//     for (int i = 0; i < 10; i++) printf("%d ", *(pp+i));
//     // free(pp);
//     printf("\n");

//     int *aa = (int *)calloc(10, sizeof(int));
//     for (int i = 0; i < 10; i++) scanf("%d", (aa+i));
//     for (int i = 0; i < 10; i++) printf("%d ", *(aa+i));
//     free(aa);
//     printf("\n");

//     int* ppp = (int*)realloc(pp, 15 * sizeof(int));
//     if (ppp == NULL) {
//         printf("Memory Not allowed");
//         return 1;
//     }
//     for (int i = 10; i < 15; i++) scanf("%d", &*(ppp+i));
//     for (int i = 0; i < 15; i++) printf("%d ", *(ppp+i));
//     free(ppp);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char arr[10][10];
//     char stri[50];
//     scanf("%[^\n]s", &stri);
//     // printf("%s", &stri);
//     int word = 0, index = 0;
//     for (int i = 0; stri[i] != '\0'; i++) {
//         if (stri[i] != ' ') {
//             arr[word][index++] = stri[i];
//         } else {
//             arr[word][index] = '\0';
//             word++;
//             index = 0;
//         }
//     }
//     arr[word][index] = '\0';
//     for (int i = word; i >= 0; i--) {
//         int s = 0, e = strlen(arr[i]) - 1;
//         while (s < e) {
//             char t = arr[i][s];
//             arr[i][s] = arr[i][e];
//             arr[i][e] = t;
//             s++;
//             e--;
//         }
//     }
//     for (int i = word; i >= 0; i--) {
//         for (int j = 0; j < strlen(arr[i]); j++) {
//             printf("%c", arr[i][j]);
//         }
//         printf(" ");
//     }
//     return 0;
// }


// #include <stdio.h>
// struct data {
//     int id;
//     char name[20];
//     float marks[5];
// };
// struct mark {
//     int marks;
//     int index;
// };
// int main() {
//     int n; // total no of students
//     scanf("%d", &n);

//     struct data s[n];
//     struct mark m[n];

//     // storing the index of highest marks student;
//     int index = 0;
//     float hmarks = -1;

//     for (int i = 0; i < n; i++) {
//         printf("Enter your name: ");
//         scanf("%s", s[i].name);
//         printf("Enter your id: ");
//         scanf("%d", &s[i].id);
//         printf("enter marks of your 5 sub: ");
//         int sum = 0;
//         for (int j = 0; j < 5; j++) {
//             scanf("%f", &s[i].marks[j]);
//             sum += s[i].marks[j];
//         }
//         m[i].marks = sum;
//         m[i].index = i;
//     }

//     //for printing the marks 
//     // printf("The highest marks student name is %s\n", s[index].name);
//     // printf("His id is %d", s[index].id);

//     //Input the range
//     printf("Enter the range of the marks you want to print: ");
//     int start, end;
//     scanf("%d %d", &start, &end);

//     for (int i = 0; i < n; i++) {
//         if (m[i].marks >= start && m[i].marks <= end) {
//             int indexx = m[i].index;
//             printf("Name: %s\n", s[indexx].name);
//             printf("His id is %d\n", s[indexx].id);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
    
// }

#include <stdio.h>
#include <stdlib.h>
/*
 * Complete the function below.
 * Please store the size of the int array to be returned in result_size pointer. For example,
 * int a[3] = {1, 2, 3};
 * *result_size = 3;
 * return a;
 * 
 */


// int* cutSticks(int lengths_size, int *lengths, int *result_size) 
//  {
//     *result = (int*)malloc(20 * sizeof(int));
//      //aim to find the min form the array
//      int min = __INT_MAX__;
//      for (int i = 0; i < lengths_size; i++) {
//         if (*(lengths+i) < min) {
//             min = *(lengths + i);
//         }
//      }
//      return min;
//  }
 
 

// int main() {
//     int *res, res_size, lengths_size = 0, i;
//   scanf("%d", &lengths_size);

//   int lengths[lengths_size];
//   for(i = 0; i < lengths_size; i++) 
//     scanf("%d", &lengths[i]);

//   res = cutSticks(lengths_size, lengths, &res_size);
//   for (i = 0; i < res_size; i++) 
//     printf("%d\n", res[i]);

//   return 0;
// }

// #include <stdio.h>
// struct books {
//   char title[20];
//   char author[20];
//   int year;
//   int availability;
// };
// int main() {
//   printf("Enter the no. of books: ");
//   int n;
//   scanf("%d", &n);
//   struct books data[n];
//   for (int i = 0; i < n; i++) {
//     printf("Enter book title: ");
//     scanf(" %[^\n]s", data[i].title);
//     printf("Enter book author: ");
//     scanf(" %[^\n]s", data[i].author);
//     printf("Enter year of publication: ");
//     scanf("%d", &data[i].year);
//     printf("Enter availability:\n1 for yes \n0 for no\n");
//     scanf("%d", &data[i].availability);
//   }
//   for (int i= 0; i < n; i++) {
//     if (data[i].availability == 1) {
//       printf("Book title is %s\n", data[i].title);
//       printf("Book author name is %s\n", data[i].author);
//       printf("Year of publication is %d\n", data[i].year);
//       printf("This book is available.\n");
//     }
//   }
//   return 0;
// }

#include <stdio.h>
int takevalid() {
  
}
int main() {
  static int arr[3][3];
  int pos;
  do {
    int pos = takevalid();
    scanf("%d", &pos);
    int i, j;
    switch (pos)
    {
    case 1:
      i = 0; j = 0;
      break;
    
      case 2:
      i = 0; j = 1;
      break;

      case 3:
      i = 0; j = 2;
      break;

      case 4:
      i = 1; j = 0;
      break;

      case 5:
      i = 1; j = 1;
      break;

      case 6:
      i = 1; j = 2;
      break;

      case 7:
      i = 2; j = 0;
      break;

      case 8:
      i = 2; j = 1;
      break;

      case 9:
      i = 2; j = 2;
      break;
    default:
    printf("Enter valid value:: \n");
      break;
    }

    if (arr[i][j] == 1) {
      printf("Position is alreadly taken");
      main();
    } else {
      arr[i][j] == 1;
    }

    for (int i = 0; i < 3; i++) {
      int c = 0;
      for (int j = 0; j < 3; j++) {
        if (arr[i][j])
      }
    }
  } while (won == 0);
  return 0;
}