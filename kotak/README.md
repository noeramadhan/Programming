Setiap persegi adalah persegi panjang, setiap persegi panjang adalah segiempat, dan setiap segiempat dibangun dari empat buah sisi. Tapi tidak semua persegi panjang adalah persegi, tidak semua segiempat adalah persegi panjang, dan tidak setiap himpunan dari empat sisi adalah segiempat. Kita mempunyai panjang dari keempat sisi. Anda harus mencari apakah sisi-sisi tersebut dapat membentuk sebuah persegi. Jika tidak, apakah dapat membentuk persegi panjang. Jika tidak, apakah dapat membentuk segiempat.

**Input Format**

Baris pertama dari input terdiri dari sebuah integer yang menyatakan banyaknya test case (n). Untuk setiap test case, terdiri dari sebuah baris dengan empat bilangan positif S1, S2 , S3 dan S4.

**Constraints**

1 <= n <= 10

1 <= S1,S2,S3,S4 <= 10^6

**Output Format**

Untuk setiap test case, output harus terdiri dari sebuah baris dengan text “Persegi”, “Persegi Panjang”, “Segi Empat” atau “Bukan Ketiganya”, jika sisi-sisi untuk masing-masing test case dapat membentuk sebuah persegi, sebuah persegi panjang, sebuah segiempat atau tidak membentuk ketiganya (sesuai urutan).

**Sample Input**
```
4
10 8 7 6
9 1 9 1
29 29 29 29
5 12 30 7
```

**Sample Output**
```
Test case1 : Segi Empat
Test case2 : Persegi Panjang
Test case3 : Persegi
Test case4 : Bukan Ketiganya
```

**Explanation**

Test case3 :

29 29 29 29, empat sisi sama panjang maka itu adaah persegi
