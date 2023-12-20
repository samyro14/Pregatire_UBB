#include <bits/stdc++.h>
using namespace std;

/*
1.C
2.D
3.C
4.B
5.A
6.D
7.B
8.C
9.A
10.A
11.C
12.F
13.A
14.C
15.C
16.B
17.E
18.D
19.B(nu sunt sigur)
20.B
21.E
22.A
23.C
24.E
25.B

*/

/*
2.
x > y && x > z
3.
a[] = {0, 2, 5, 7, 16, 21, 49}
       1  2  3  4   5   6   7

1. (1 + 7) / 2 = 4 => 7
2. (5 + 7) / 2 = 6 => 21
3. (5 + 5) / 2 = 5 => 16

4.
45 20 17 16 12 12 10 7 3 2

12. 
minim trebuie format un ciclu => pentru un 
graf cu n noduri => n muchii
maxim: n*(n - 1)

14. consoane: v, n

v _ _ _ n => 3 * 2 * 1 = 6
n _ _ _ v => 6
2 * 6 = 12 => C
15.
A = {a, 1, b, 2, c, 3, d, 4}
2c1a1

18.
f(6) = f(4) + f(5)
f(4) = f(2) + f(3)
f(2) = 1;
f(3) = f(1) + f(2)
f(1) = 0;
f(2) = 1;
f(5) = f(3) + f(4)
f(3) = f(1) + f(2)
f(1) = 0;
f(2) = 1;
f(4) = f(2) + f(3)
f(2) = 1;
f(3) = f(1) + f(2)
f(1) = 0;
f(2) = 1;
=> 14 autoapeluri fara cel initial

20.
void numar(int n){
if (n<=100){
printf("/");
}
else{
    if (n%10<5){
    printf("%d",n%10);
    }   
    numar(n/10);
    if(n%10>5){
    printf("%d", n%10);
    }
    }
   }
numar(824972345) = numar(82497234)
numar(82497234)  = 4 numar(8249723)
numar(8249723)   = 3 numar(824972)
numar(824972)    = 2 numar(82497)
numar(82497)     = numar(8249) 7
numar(8249)      = numar(824)  9
numar(824)       = 4 numar(82)
numar(82)        = /

afisare: 4324/97 => B

21.
ca sa fie 3 => intra o singura data in if(c % 3 == 0)
=> c = 6 mereu
fie ab numarul cautat, a = 6 mereu
b trebuie sa fie impar si sa nu fie multiplu de 3=>
numerele sunt: 61, 65, 67 => 3 numere => E

24.
voi avea cifre din intervalul [0, 9] , insa niciodata
nu va fi 1 => 10 - 1 = 9 => E

25. 
C(n, 2) = n*(n - 1) / 2 => B
*/ 
int main(){

    return 0;
}