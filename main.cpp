#include <bits/stdc++.h>
using namespace std;

/*
 1.
  return n * (n - 1)/2 + (n - 2)*(n - 3)/ 2 + ... + 0
  exp(5) = 5 * 4 / 2 + 3 * 2 / 2 + 1 * 0 / 2 + ... + 0 = 10 + 3 =  13
   Raspuns : A C
 2. ce face? numara cate patrate perfecte sunt in intervalul a, b
    Raspuns: D
 3. Exponentiere rapida => O(log2(n))
 100 = 10 ^ 2 => return 10^2(2^15) = 10^(2^16) => se vor afisa 1 urmat de 2^16 de 0
 10^(2^3 * 2^60) = 10^(2^63) => se vor afisa 1 urmat de 10^63 cifre => 10^63 + 1 cifre
 Raspuns : B C D
 4.
 Atentie: in pseudocod, a/b returneaza impartirea exacta!!!
 A. b = 10, a = 6 => (10 - 6 + 2) / 2 = 3 corect => adevarat
 B. a = 1, b = 5 =>  (4 + 1) / 2 = 2.5 fals
 C. a = 1, b = 5 => 4 / 2 = 2 corect => adevarat
 D. a = 2, b = 7 => [5 + 1 + 2 * 0] / 2 = 3 corect => adevarat
 Raspuns: A C D
 5.
    ecran: 1 3 5 6 7 8 4 2
    afis(2, 3) = for(int nr = 3; nr <= 3; ++nr);
                    cout << nr;
                    afis(3, 3)
                  for(int nr = 4; nr <= 4; ++nr)
                    cout << nr;
    afis(3, 3) = for(int nr = 5; nr <= 6; ++nr) ;
                    cout << nr;
                    afis(4, 3);
                    for(int nr = 7; nr <= 8; ++nr)
                        cout << nr;
    afis(4, 3);
 Raspuns: B
 6. ma uit la video
 7.
 cauta pozitia celui mai mare mic element fata de v
 Raspuns: C
 8.
    f(674, 97) = f(97, 92) [674 / 97] = 6    = 582\\ 674 - 582 = 92
    f(97, 92) = f(92, 5)
    f(92, 5) = f(5, 2) [92 / 5] = 18 r 2
    f(5, 2) = f(2, 1)
    f(2, 1) = f(1,0)
    return 1
    a = 2 b = 10
    Raspuns: A

 9.
 Raspuns: A
 10.Raspuns: A, MA UIT PE VIDEO
 11. Raspuns: B D
 12. Raspuns: A B C
 13. Raspuns: C D
 14.Raspuns:A
 15.Raspuns:B D
 16.Raspuns: C- VIDEO!
 17.Raspuns: B C- VIDEO
 18.Raspuns:A
 19.Raspuns:C
 20.Raspuns:B
 21.Raspuns:D
 22.Raspuns:C
 23.Raspuns:C D
 24.Raspuns:B D
 */

int main() {

    return 0;
}
