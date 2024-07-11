# how to run these examples
## no leak example
gcc -Wall valgrind_no_leak.c -o valgrind_no_leak && valgrind -s --tool=memcheck --leak-check=full ./valgrind_no_leak && rm ./valgrind_no_leak
## leak example
gcc -Wall valgrind_leak.c -o valgrind_leak &&  valgrind -s --tool=memcheck --leak-check=full ./valgrind_leak && rm ./valgrind_leak