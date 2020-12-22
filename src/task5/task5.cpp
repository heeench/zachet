#include <iostream>
#include <string.h>
#define N 255
int main() {
    FILE *f;
    char a[N];
    int line, slova, flag;
    line = 0;
    f = fopen("text.txt","r");
    while (fgets(a, N, f) != NULL) {
        line += 1;
 
        slova = 0;
        flag = 0;
        for (int i = 0; i < strlen(a); i++)
            if (a[i] != ' ' && flag == 0) {
                slova += 1;
                flag = 1;
            } else
                if (a[i] == ' ') flag = 0;
 
        std::cout << a << "\t" <<  strlen(a) << " - symbols" << " and " << slova << " - slov" << std::endl;
    }
    std::cout << "     \t"<< line  << " - stroki";
    fclose(f);
}