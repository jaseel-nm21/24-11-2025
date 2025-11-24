#include <stdio.h>

char u_set[26] = {
    'a','b','c','d','e','f','g','h','i','j','k','l','m',
    'n','o','p','q','r','s','t','u','v','w','x','y','z'
};

char set_one_bits[26];
char set_two_bits[26];
char result[26];

void initializeset()
{
    for(int i = 0; i < 26; i++)
    {
        set_one_bits[i] = 0;
        set_two_bits[i] = 0;
        result[i] = 0;
    }
}

void convert_to_bitvector(char input[], int size, char bitvec[])
{
    for(int i = 0; i < size; i++)
    {
        char c = input[i];
        if(c >= 'a' && c <= 'z')
            bitvec[c - 'a'] = 1;
    }
}

void setunion(char bit1[], char bit2[])
{
    for(int i = 0; i < 26; i++)
        result[i] = bit1[i] | bit2[i];
}

void setintersection(char bit1[], char bit2[])
{
    for(int i = 0; i < 26; i++)
        result[i] = bit1[i] & bit2[i];
}

void setcomplement(char bit[])
{
    for(int i = 0; i < 26; i++)
        result[i] = !bit[i];
}

void setdifference(char bit1[], char bit2[])
{
    for(int i = 0; i < 26; i++)
        result[i] = bit1[i] & (!bit2[i]);
}

void display(char bitvec[])
{
    printf("{ ");
    for(int i = 0; i < 26; i++)
        if(bitvec[i] == 1)
            printf("%c ", u_set[i]);
    printf("}\n");
}

int main()
{
    int size1, size2;
    char temp1[26], temp2[26];

    initializeset();

    printf("Enter number of elements in set one: ");
    scanf("%d", &size1);
    printf("Enter elements:\n");
    for(int i = 0; i < size1; i++)
        scanf(" %c", &temp1[i]);   // space before %c avoids newline issue

    printf("Enter number of elements in set two: ");
    scanf("%d", &size2);
    printf("Enter elements:\n");
    for(int i = 0; i < size2; i++)
        scanf(" %c", &temp2[i]);

    convert_to_bitvector(temp1, size1, set_one_bits);
    convert_to_bitvector(temp2, size2, set_two_bits);

    printf("\nSet One = ");
    display(set_one_bits);

    printf("Set Two = ");
    display(set_two_bits);

    // Example operations
    printf("\nUnion = ");
    setunion(set_one_bits, set_two_bits);
    display(result);

    printf("Intersection = ");
    setintersection(set_one_bits, set_two_bits);
    display(result);

    printf("Difference (One - Two) = ");
    setdifference(set_one_bits, set_two_bits);
    display(result);

    return 0;
}

