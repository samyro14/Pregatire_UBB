#include <bits/stdc++.h>

using namespace std;

#define pb push_back

ifstream fin("f.in");
ofstream fout("f.out");


const int maxn = 1e6 + 2;
/*
Concurs UBB 2022

1.C

2.ABD
Ce face algoritmul? afla ultima cifra a lui a ^(b-1) si o inmulteste cu a

A. a = 107, b = 101
    uc(107, 100) = ?
   1. 1
   2. 1 * 7 = 7  => 7
   3. 7 * 7 = 49 => 9
   4. 9 * 7 = 63 => 3
   5. 3 * 7 = 21 >= 1
   6. 1 * 7 = 7  => 7
    7 * 7 = 49 => 9
    9 * 7 = 43 => 3
    3 * 7 = 21 => 1
    1 * 7 = 7 => 7
    ......
    => uc(a^4k) = 1
       uc(a^(4k + 1) = 7
          ......
    100 / 4 = 25
    => A Corect
    B. a = 1001 b = 101 => 1001?
    uc(a^100) * a = ?
    1 * 1001 = 1001 => 1
    B corect


3.AD

4.BC

5.B

6. D
A = {0, 6, 7}
n = 4
.... 6767 6770

7.AB

8.C 

Ce face algoritmul? determina numarul de numere care contin
doar cifre pare din vectorul v[]

9.B
Ce face? returneaza 1 daca sirul este palindrom
adica fie sirul s: a1 a2 a3... an
returneaza 1 daca: a1 == an
                   a2 == an-1
                   .........

    a b c b a
    1 2 3 4 5

  comparari: 5 1
             4 2
             3 3
             2 4
             1 5


10.C
a = 9
i =1...8
j = i+2...9
if(i + j >= 9)
    cout << a << " " << i << " " << j;
i = 1
j = 3...9
nr solutii: 1 8, 1 9 => 2 solutii
i = 2
j = 4...9
nr solutii: 3 solutii
i = 3
j = 5...9
nr solutii: 4 solutii
i = 4
j = 6...9
nr solutii: 4 solutii
i = 5
j = 7...9
nr solutii: 3 solutii
i = 6
j = 8..9
nr solutii: 2 solutii
i = 7
j = 9..9
nr solutii: 1 solutii
i = 8
j = 10
nr solutii: 0 solutii

nr total = 1 + 2 + 3 + 4 + 4+ 3 + 2 = 19


11.C
Ce face? returneaza suma cifrelor pare ale lui n

12.ACD
n = 3
used = {3, 27, 351, 153}
nr = 4

13.C
c = f(20, 10)
 return 10 + f(10, 20)
 return 20 + f(5, 40)
 return 40 + f(2, 80)
 return 80 + f(1, 160)
 return 160 + f(0, 320)

14.B

15.BD

16. B(pare gresit)
A = {a, b, c, d, e}
consoane = {b, c, d}
l = 1: b c d => 3 solutii
l = 2: ab
       ac
       ad
       be
       ce
       de => 6 solutii
l = 3: abe
       ace
       ade => 3 solutii

       12 solutii

17.CD
    fomula: daca n = 2k
            voi avea n * n locuri
        astericsuri: n + n - 1 + n - 1 + n - 2 = 
        4n - 4 = 4(n - 1) laturile
        diagonale: 2(n - 2)
        total = 4(n - 1) + 2(n - 2)
        
        daca n = 2k + 1
        4(n - 1) laturi
      diagonale  n - 2 + n - 3 = 2n - 5

A. n = 5
   asterics: 16 + 5 = 21
   incorect
   B. n = 7
   asterics: 24 + 9 = 33 
   49 - 33 = 16 INCORECT
C corect
D. n = 18
   asterics: 17 * 4 + 2 * 16 = 68 + 32 = 100
   18 * 18 = 324
   corect
18.ACD
Ce face? daca e este par il va cauta binar si 
daca nu apare in sir returneaza 0, altfel returneaza
pozitia pe care se afla
daca e este impar, il cauta liniar si returneaza pozitia
19.BD
in b voi avea 
suma lui i = 1...n-x + 1
in a voi avea suma sirului + 1

a1 a2 a3 a4 a5

n = 5, x = 3
b = a1 + a2 + 1
a = a1 + a2 + 1 + a3 + a4 + a5
return a - b = a3 + a4 + a5 = suma de la n - x + 1 la n

n = 5 
x = 2
a - b = 4 + 5 = 9
b = 1 + 1 + 2 + 3 = 7
a = 7 + 4 + 5 = ..
a - b = 9
n = 3
x = 2
return 2 + 3 = 5
1 1
b = 1
a = 1 +1
return a - b = 1
20a.A
c = 6
a = b = 4
s(4, 4, 6) = 6 * (4, 4, 5) = 6 * 60 = 360
s(4, 4, 5) = 5 * (3, 3, 4) = 5 * 12 = 60
s(3, 3, 4) = 4 * (2, 2, 3) = 12
s(2, 2, 3) = 3 * (1, 1, 2) = 3
s(1, 1, 2) = 1
A. c! / (c - a)! = 6! / 2! =
                 = 3  * 4 * 5 * 6
                 = 12 * 5 * 6=
                 = 60 * 6 = 360 corect
D. C(c, a - 1) = c!/(a-1)!(c - a + 1)!
                6!/3!*3! = 4 * 5 = 20 fals

20b.D
s(3, 4, 7) = 4 * s(3, 3, 7) = 4 * 42 = 168
s(3, 3, 7) = 7 * s(2, 2, 6) = 7 * 6 = 42
s(2,2,6) = 6 * s(1, 1, 5) = 6

21.AC

22.

23.A
f(4) = f(3) + f(2) = 3 + 2 = 5
f(3) = f(2) + f(1) = 2 + 1 = 3
f(2) = f(1) + f(0) = 1 + 1 = 2
=> aici * 5 ori
1 1 2 3 5

24.C
E(x) = a0 + a1*x + a2*x^2 + a3*x^3 + a4*x^4

nr de inmultiri = a1 * x, x * x, a2*x^2, x^2*x, a3*x^3,
x^3*x, a4*x^4 = 7 inmultiri
25a.B
f(3, 2) : p = f(3, 1) = 3 => 3 * 3  = 9
f(3, 1) : p = f(3, 0) = 1 => 3 * 1 * 1 = 3
f(3, 0) = 1

f(3, 3) : p = f(3, 1) = 3 => 3 * 9 = 27
f(3, 1) : p = f(3, 0) = 1 => 3
f(3, 0) = 1

25b.D
f(3, 3) : p = f(3, 1) = 3 => 3 * f(3, 2) = 3 * 3 = 27
f(3, 1) : p = f(3, 0) = 1 => 3 * f(3, 0) = 3
f(3, 0) = 1
26.
a[] = {10, 1, 5, 4, 7, 12, 1, 12, 6};
f(a, 1, 9, -10): n1 = f(a, 2, 9, -10)
f(a, 2, 9, -10): n1 = f(a, 3, 9, -10)
f(a, 3, 9, -10): n1 = f(a, 4, 9, -10)
f(a, 4, 9, -10): n1 = f(a, 5, 9, -10)
f(a, 5, 9, -10): n1 = f(a, 6, 9, -10)
f(a, 6, 9, -10): n1 = f(a, 7, 9, -10)
f(a, 7, 9, -10): n1 = f(a, 8, 9, -10)
f(a, 9, 9, -10): n1 = f(a, 9, 9, -10) = 0
                 n2 = f(a, 10, 9, 9) + a[9] = 6
27a.BC
complexitate: log2(n) * log4(n^4) = 
    log2(n) * log2(n) = (log2(n))^2
27b.
*/
int main(){


    return 0;
}

/*




*/