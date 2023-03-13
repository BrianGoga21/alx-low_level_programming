## C - Recursion

#### [0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget](0-puts_recursion.c)

Write a function that prints a string, followed by a new line.

- Prototype: void _puts_recursion(char *s);

#### [1. Why is it so important to dream? Because, in my dreams we are together](1-print_rev_recursion.c)

Write a function that prints a string in reverse.

- Prototype: void _print_rev_recursion(char *s);

#### [2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange](2-strlen_recursion.c)

Write a function that returns the length of a string.

- Prototype: int _strlen_recursion(char *s);

#### [3. You mustn't be afraid to dream a little bigger, darling](3-factorial.c)

Write a function that returns the factorial of a given number.

- Prototype: int factorial(int n);
- If n is lower than 0, the function should return -1 to indicate an error
- Factorial of 0 is 1

#### [4. Once an idea has taken hold of the brain it's almost impossible to eradicate](4-pow_recursion.c)

Write a function that returns the value of x raised to the power of y.

- Prototype: int _pow_recursion(int x, int y);
- If y is lower than 0, the function should return -1

#### [5. Your subconscious is looking for the dreamer](5-sqrt_recursion.c)

Write a function that returns the natural square root of a number.

- Prototype: int _sqrt_recursion(int n);
- If n does not have a natural square root, the function should return -1

#### [6. Inception. Is it possible?](6-is_prime_number.c)

Write a function that returns 1 if the input integer is a prime number, otherwise return 0.

- Prototype: int is_prime_number(int n);

#### [7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything](100-is_palindrome.c)

Write a function that returns 1 if a string is a palindrome and 0 if not.

- Prototype: int is_palindrome(char *s);
- An empty string is a palindrome

#### [8. Inception. Now, before you bother telling me it's impossible...](101-wildcmp.c)

Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.

- Prototype: int wildcmp(char *s1, char *s2);
- s2 can contain the special character *.
- The special char * can replace any string (including an empty string)
##C - malloc, free
		

		
####TASKS
		

		
####[0. Float like a butterfly, sting like a bee](0-create_array.c)
		

		
- Write a function that creates an array of chars, and initializes it with a specific char.
		

		
- Prototype: char *create_array(unsigned int size, char c);
		
- Returns NULL if size = 0
		
- Returns a pointer to the array, or NULL if it fails
		

		
####[1. The woman who has no imagination has no wings](1-strdup.c)
		

		
- Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
		

		
- Prototype: char *_strdup(char *str);
		
- The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
		
- Returns NULL if str = NULL
		
- On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
		

		
#### [2. He who is not courageous enough to take risks will accomplish nothing in life](2-str_concat.c)
		

		
- Write a function that concatenates two strings.
		

		
- Prototype: char str_concat(char s1, char s2);
		
- The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
		
if NULL is passed, treat it as an empty string
		
- The function should return NULL on failure
		

		
####[3. If you even dream of beating me you'd better wake up and apologize](3-alloc_grid.c)
		

		
- Write a function that returns a pointer to a 2 dimensional array of integers.
		

		
- Prototype: int **alloc_grid(int width, int height);
		
- Each element of the grid should be initialized to 0
		
- The function should return NULL on failure
		
- If width or height is 0 or negative, return NULL
		

		
####[4. It's not bragging if you can back it up](4-free_grid.c)
		

		
Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.
		

		
Prototype: void free_grid(int **grid, int height);
		
Note that we will compile with your alloc-grid.c file. Make sure it compiles.
		

		
####[5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe](100-argstostr.c)
		

		
- Write a function that concatenates all the arguments of your program.
		

		
- Prototype: char *argstostr(int ac, char **av);
		
- Returns NULL if ac == 0 or av == NULL
		
- Returns a pointer to a new string, or NULL if it fails
		
- Each argument should be followed by a \n in the new string  
		

		
####[6. I will show you how great I am] (101-strtow.c)
		

		
- Write a function that splits a string into words.
		

		
- Prototype: char **strtow(char *str);
		
- The function returns a pointer to an array of strings (words)
		
- Each element of this array should contain a single word, null-terminated
		
- The last element of the returned array should be NULL
		
- Words are separated by spaces
		
- Returns NULL if str == NULL or str == ""
		
- If your function fails, it should return NULL
 
