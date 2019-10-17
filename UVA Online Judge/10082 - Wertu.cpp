#include<stdio.h>
#include<string.h>


int main()
{
    char l[200];
    int i,n,k,len;
    while(gets(l))
    {
        len=strlen(l);
        for(i=0; i<len; i++)
        {
            switch(l[i])
            {
            case ']':
                printf("[");
                break;
            case '[':
                printf("P");
                break;
            case 'p':
                printf("o");
                break;
            case 'P':
                printf("O");
                break;
            case 'o':
                printf("i");
                break;
            case 'O':
                printf("I");
                break;
            case 'i':
                printf("u");
                break;
            case 'I':
                printf("U");
                break;
            case 'u':
                printf("y");
                break;
            case 'U':
                printf("Y");
                break;
            case 'y':
                printf("t");
                break;
            case 'Y':
                printf("T");
                break;
            case 't':
                printf("r");
                break;
            case 'T':
                printf("R");
                break;
            case 'r':
                printf("e");
                break;
            case 'R':
                printf("E");
                break;
            case 'e':
                printf("w");
                break;
            case 'E':
                printf("W");
                break;
            case 'w':
                printf("q");
                break;
            case 'W':
                printf("Q");
                break;

            case '\'':
                printf(";");
                break;
            case ';':
                printf("L");
                break;
            case ':':
                printf("L");
                break;
            case 'l':
                printf("k");
                break;
            case 'L':
                printf("K");
                break;
            case 'k':
                printf("j");
                break;
            case 'K':
                printf("J");
                break;
            case 'j':
                printf("h");
                break;
            case 'J':
                printf("H");
                break;
            case 'h':
                printf("g");
                break;
            case 'H':
                printf("G");
                break;
            case 'g':
                printf("f");
                break;
            case 'G':
                printf("F");
                break;
            case 'f':
                printf("d");
                break;
            case 'F':
                printf("D");
                break;
            case 'd':
                printf("s");
                break;
            case 'D':
                printf("S");
                break;
            case 's':
                printf("a");
                break;
            case 'S':
                printf("A");
                break;
            case '/':
                printf(".");
                break;
            case '?':
                printf(">");
                break;
            case '.':
                printf(",");
                break;
            case '>':
                printf("<");
                break;
            case ',':
                printf("M");
                break;
            case '<':
                printf("M");
                break;
            case 'm':
                printf("n");
                break;
            case 'M':
                printf("N");
                break;
            case 'n':
                printf("b");
                break;
            case 'N':
                printf("B");
                break;
            case 'b':
                printf("v");
                break;
            case 'B':
                printf("V");
                break;
            case 'v':
                printf("c");
                break;
            case 'V':
                printf("C");
                break;
            case 'c':
                printf("x");
                break;
            case 'C':
                printf("X");
                break;
            case 'x':
                printf("z");
                break;
            case 'X':
                printf("Z");
                break;


            case '=':
                printf("-");
                break;
            case '-':
                printf("0");
                break;
            case '0':
                printf("9");
                break;
            case '9':
                printf("8");
                break;
            case '8':
                printf("7");
                break;
            case '7':
                printf("6");
                break;
            case '6':
                printf("5");
                break;
            case '5':
                printf("4");
                break;
            case '4':
                printf("3");
                break;
            case '3':
                printf("2");
                break;
            case '2':
                printf("1");
                break;
            case '1':
                printf("`");
                break;
            default:
                printf("%c",l[i]);
            }
        }
        printf("\n");
    }
    return 0;
}

