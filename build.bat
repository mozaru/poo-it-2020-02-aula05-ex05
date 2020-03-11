@echo off
echo compilando ....
gcc -c principal.cpp -o principal.o
gcc -c TVet.cpp -o TVet.o
echo linkando ....
gcc principal.o TVet.o -o principal.exe -lstdc++
echo sucesso
pause
