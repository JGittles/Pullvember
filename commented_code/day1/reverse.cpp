void reverse( char *str)
{
	char* end = str; // Initialising the currently input pointer string
	char tmp; // Defining the temporary variable
	if (str) // checks if string address is present
	{
		while(*end) // loops till string is empty (or end of string)
		{
			++end; // pre-incremented the current character's address, so that in the next iteration the subsequent address is given
		}
		--end; // discount for the NULL character
		while (str < end) // swapping characters b/w front and back of string until the pointers meet in the middle
		{
			tmp = *str; // storing pointer in temp
			*str++ = *end; // storing the last read back of string to the front of string
			*end-- = tmp; // storing the temp to the
		}
	}
}
