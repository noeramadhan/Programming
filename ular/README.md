Buatlah gambar ular (seperti permainan snake) yang zig-zag dengan jumlah zig-zagnya sesuai yang diharapkan. Misal ular dengan zig-zag nol, maka gambarnya hanya satu ruas ular secara horizontal:
```
#
#
#
```
Jika zig-zag yang diminta adalah 1, maka gambarnya berupa 2 ruas, seperti membentuk huruf U (zig-zag sekali):
```
# #
# #
###
```
Jika zig-zag yang diminta adalah 2, maka gambarnya berupa 3 ruas, seperti membentuk huruf S tidur (zig-zag sekali):
```
# ###
# # #
### #
```
begitu seterusnya.

**Input Format**

Input adalah sebuah bilangan integer (P) yang menandakan jumlah zig-zag ular yang diminta.

**Constraints**

0 <= P <= 125

**Output Format**

Output adalah gambar ular yang diilustrasikan dengan karakter tagar atau # dengan banyaknya zig-zag sesuai yang diminta. Lebar ular akan digambarkan selalu 3 karakter sehingga output akan selalu terdiri dari 3 baris.
