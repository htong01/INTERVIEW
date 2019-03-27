// 1.
// #include <iostream>
// using namespace std;
// namespace first{
// 	int y = 8;
// }
// namespace second{
// 	double y = 2.1715;
// }

// int main(){
// 	int a;
// 	a = first::y - second::y;
// 	cout << a << endl;
// 	return 0;
// }

// 2. bad_alloc
// which is thrown if an error occurs when attempting to allocate memory with new.

// 3.
// #include <cstdio>
// int main()
// {
// 	unsigned char ch = 0;
// 	int count = 0;
// 	while(++ch <= 255)
// 		count++;
// 	printf("%d",count);
// 	return 0;
// }

/* No output, infinite loop

i is an unsigned char which typically has a range of [0,255]. 
In you loop you are going until i <= 255. 
When i is 255 you add 1 to it and it wraps back around to 0 which is  <= 255 so the loop continues. 
This is called unsigned integer overflow.
*/

// 4. Linked list cycle 
// Leetcode 141

//5. 