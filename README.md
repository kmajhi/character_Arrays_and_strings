![logo](https://github.com/kmajhi/character_Arrays_and_strings/blob/fceb902af5dad92409b308e5ce5534fee039d63d/array%20vs%20string.jpg)
<h1 align="center">Character Arrays & Strings</h1>


<p> In C, character arrays are commonly used to represent strings. A string in C is an array of characters terminated by a null character (`'\0'`). Here's an example that demonstrates the usage of character arrays as strings:

```c
#include <stdio.h>

int main() {
    char str1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char str2[] = "world";

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    return 0;
}
```

In this example, we declare two character arrays `str1` and `str2` to represent strings.

- `str1` is initialized explicitly with individual characters and a null character at the end. The size of the array is explicitly specified as `6` to accommodate the characters and the null character.
- `str2` is initialized using a string literal enclosed in double quotes. In this case, the size of the array is automatically determined based on the number of characters in the string literal (including the null character).

Both `str1` and `str2` can be treated as strings and used with various string manipulation functions in C, such as `strlen`, `strcpy`, `strcat`, etc.
