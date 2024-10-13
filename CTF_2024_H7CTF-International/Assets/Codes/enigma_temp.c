int main(void)
{
    unsigned long int_element;
    size_t reducted_string_length;
    int counter;
    unsigned int int_array [6];

    unsigned long given_hex[] = 
    {
        0x4a, 0x33, 0x53, 0x51, 0x44, 0x7f, 0x27, 0x3d, 0x64, 
        0x61, 0x72, 0x66, 0x37, 0x31, 0x21, 0x64, 0x33, 0x62,
        0x22, 0x30, 0x3b, 0x35, 0x21, 0x36, 0x67, 0x30, 0x28,
        0x35, 0x37, 0x62, 0x71, 0x34, 0x3a, 0x37, 0x75, 0x35,
        0x30, 0x30, 0x6d
    };

    size_t given_hex_size = sizeof(given_hex) / sizeof(given_hex[0]);
    char flag[given_hex_size + 1];  // +1 for null terminator.
    flag[given_hex_size] = '\0';    // Null terminate the string.
        
    for (counter = 1; counter < 5; ++ counter) 
    {
        int_element = tetra(2, counter);
        int number_1 = 0x13;
        int number_2 = -0x13;
        int_array[counter + -1] = (int)int_element + (int)(int_element / number_1) * number_2;
    }

    for (counter = 0; counter < 4; ++ counter) 
    {
        printf("%d ", (unsigned long) int_array[counter]);
    }

    putchar(10);

    for (counter = 0; counter < given_hex_size; ++ counter)
    {
        flag[counter] = (char)(given_hex[counter] ^ int_array[counter % 4]);
    }

    printf("Your flag is: %s\n", flag);

    return 0;
}
