#include <bits/stdc++.h>

using namespace std;

#define pb push_back

ifstream fin("f.in");
ofstream fout("f.out");


const int maxn = 1e6 + 2;
/*
Concurs UBB 2022

1.C-3p

2.ABD -3p
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


3.AD -3p

4.BC - doar C corect => 3p - 1,98p = 1,02p

5.B-3p

6. D -3p
A = {0, 6, 7}
n = 4
.... 6767 6770

7.AB - corect ABD=> 2p

8.C -3p

Ce face algoritmul? determina numarul de numere care contin
doar cifre pare din vectorul v[]

9.B - 3p
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


10.C -3p
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


11.C - 3p
Ce face? returneaza suma cifrelor pare ale lui n

12.ACD - 3p
n = 3
used = {3, 27, 351, 153}
nr = 4

13.C - 3p
c = f(20, 10)
 return 10 + f(10, 20)
 return 20 + f(5, 40)
 return 40 + f(2, 80)
 return 80 + f(1, 160)
 return 160 + f(0, 320)

14.B - 3p

15.BD - 3p

16. B - 3p
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
       ade 
       bcd => 4 solutii

       13 solutii

17.CD - 3p
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
18.ACD - corect AC => 3p - 0,99 = 2,01p
Ce face? daca e este par il va cauta binar si 
daca nu apare in sir returneaza 0, altfel returneaza
pozitia pe care se afla
daca e este impar, il cauta liniar si returneaza pozitia
19.BD-3p
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
20a.A - corect B => 0p
c = 6
a = b = 4
s(4, 4, 6) = 6 * (4, 4, 5) = 6 * 60 = 360
s(4, 4, 5) = 5 * (3, 3, 4) = 5 * 12 = 60
s(3, 3, 4) = 4 * (2, 2, 3) = 12
s(2, 2, 3) = 3 * (1, 1, 2) = 3
s(1, 1, 2) = 1
Gresit - am inmultit 6 * s(4, 4, 5)!!!
a = b = 4  c = 6
s(4, 4, 6) = 6 * s(3, 3, 5) = 120;
s(3, 3, 5) = 5 * s(2, 2, 4) = 20
s(2, 2, 4) = 4 * s(1, 1, 3) = 4
A. c! / (c - a)! = 6! / 2! =
                 = 3  * 4 * 5 * 6
                 = 12 * 5 * 6=
                 = 60 * 6 = 360 corect
B. c! / (c - a + 1)! = 6! / (6 - 4 + 1)! = 6! / 3!

D. C(c, a - 1) = c!/(a-1)!(c - a + 1)!
                6!/3!*3! = 4 * 5 = 20 fals

20b.D- 3p
s(3, 4, 7) = 4 * s(3, 3, 7) = 4 * 42 = 168
s(3, 3, 7) = 7 * s(2, 2, 6) = 7 * 6 = 42
s(2,2,6) = 6 * s(1, 1, 5) = 6

21.AC -3p

22.AD -3p
este un sir a lui fibonacci
A.2 2 4 6 10 11 corect
B.1 1 2 3 5 8 13 ... incorect
C. 2 2 4 6 10 16 26 42 incorect pentru ca 42 > 30
D. 1 1 2 3 5 8 13 corect
23.A -3p
f(4) = f(3) + f(2) = 3 + 2 = 5
f(3) = f(2) + f(1) = 2 + 1 = 3
f(2) = f(1) + f(0) = 1 + 1 = 2
=> aici * 5 ori
1 1 2 3 5

24.C - corect A => 0p
E(x) = a0 + a1*x + a2*x^2 + a3*x^3 + a4*x^4
nr de inmultiri = a1 * x, x * x, a2*x^2, x^2*x, a3*x^3,
x^3*x, a4*x^4 = 7 inmultiri
Gresit! Trebuie sa dau factor comun!!!
25a.B -3p
f(3, 2) : p = f(3, 1) = 3 => 3 * 3  = 9
f(3, 1) : p = f(3, 0) = 1 => 3 * 1 * 1 = 3
f(3, 0) = 1

f(3, 3) : p = f(3, 1) = 3 => 3 * 9 = 27
f(3, 1) : p = f(3, 0) = 1 => 3
f(3, 0) = 1

25b.D -3p
f(3, 3) : p = f(3, 1) = 3 => 3 * f(3, 2) = 3 * 3 = 27
f(3, 1) : p = f(3, 0) = 1 => 3 * f(3, 0) = 3
f(3, 0) = 1
26. corect C=> 0p
a[] = {10, 1, 5, 4, 7, 12, 1, 12, 6};
f(a, 1, 9, -10): n1 = f(a, 2, 9, -10)
f(a, 2, 9, -10): n1 = f(a, 3, 9, -10)
f(a, 3, 9, -10): n1 = f(a, 4, 9, -10)
f(a, 4, 9, -10): n1 = f(a, 5, 9, -10)
f(a, 5, 9, -10): n1 = f(a, 6, 9, -10) = 24;
                 n2 = f(6, 9, 5) + a[5]
f(6, 9, 5): n1 = f()
f(a, 6, 9, -10): n1 = f(a, 7, 9, -10) = 12
                 n2 = f(a, 7, 9, 6) + a[6] = 12 + 12 = 24
f(a, 7, 9, 6): n1 = f(a, 8, 9, 6) = 12
f(8, 9, 6): n1 = f(9, 9, 9) = 0
            n2 = f(9, 9, 8) + a[8] = 12                    
f(a, 7, 9, -10): n1 = f(a, 8, 9, -10) = 12
                 n2 = f(a, 8, 9, 7) + a[7] = 0 + 1 = 1 return 12
f(a, 8, 9, 7):   n1 = f(a, 9, 9, 7) = 0;
                 n2 = 0;
f(a, 8, 9, -10): n1 = f(a, 9, 9, -10) = 0
                 n2 = f(a, 9, 9, 8) + a[8] = 0 + 12 = 12;               
f(a, 9, 9, -10) = 0;

NU MERGE SIMULAT!
CODUL:
...!!!!!!!!!!!!!.......
int f2(int a, int b){
    if(a > b)
        return a;
    else return b;
}
int f(int arr[], int i, int n, int p){
    if(i == n)
        return 0;
    int n1 = f(arr, i + 1, n, p);
    int n2 = 0;
    if(p + 1 != i){
        n2 = f(arr, i + 1, n, i) + arr[i];
    }
    return f2(n1, n2);
}
....!!!!!!!!!!....
ce face? este un backtracking care determina suma maxima
posibila dintr-un subsir care nu are elemente consecutive
27a.BC -3p
complexitate: log2(n) * log4(n^4) = 
    log2(n) * log2(n) = (log2(n))^2
27b.C => corect AD => 0p
pentru fiecare pas va afisa 2*log2(n) stelute
A. n = 10
de cate ori intra  in primul while?

fie 2^x <= n, x fiind maxim => intra in primul while de x - 1 ori
vor fi x - 1 grupuri a cate 2*log2(n) stelute

n = 25 => 3 grupuri a cate 2*4 = 16
16 * 3 = 48 C corect
n = 100

32 de grile
32 - 7 gresite = 25 corecte
Total: 5,03 + 4 * 0 + 3 * 25 = 80,03 + 10 puncte oficiu = 90,03
*/
int main(){


    return 0;
}

/*




<<<<<<< HEAD
*/
=======
*/
>>>>>>> 60bd62a4d2c842b5438c16f84f6c4aa6bbd8d323
