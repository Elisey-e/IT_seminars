#include "functions.hpp"


/*!
\file
\brief Исполняемый файл с функциями, необходимыми при сортировке
*/


int Compare_Strings(student* el1_in, student* el2_in){
    
    char* str1 = el1_in->last_name;
    char* str2 = el2_in->last_name;
    

    int i1 = 0;
    int i2 = 0;
    int el1, el2;
    while (true){
        while (!(isalpha(str1[i1]) || isdigit(str1[i1])) && str1[i1] != '\0'){
            i1++;
        }
        while (!(isalpha(str2[i2]) || isdigit(str2[i2])) && str2[i2] != '\0'){
            i2++;
        }
        el1 = str1[i1];
        el2 = str2[i2];

        if (el1 == '\0' && el2 == '\0'){
            return 0;
        }
        else if (el1 == '\0'){
            return -1;
        }
        else if (el2 == '\0'){
            return 1;
        }

        if (el1 > el2){
            return 1;
        }
        else if (el2 > el1){
            return -1;
        }
        ++i1;
        ++i2;
    }
}


int Compare_Strings_gr(student* el1_in, student* el2_in){
    
    char* str1 = el1_in->group;
    char* str2 = el2_in->group;
    

    int i1 = 0;
    int i2 = 0;
    int el1, el2;
    while (true){
        while (!(isalpha(str1[i1]) || isdigit(str1[i1])) && str1[i1] != '\0'){
            i1++;
        }
        while (!(isalpha(str2[i2]) || isdigit(str2[i2])) && str2[i2] != '\0'){
            i2++;
        }
        el1 = str1[i1];
        el2 = str2[i2];

        if (el1 == '\0' && el2 == '\0'){
            return 0;
        }
        else if (el1 == '\0'){
            return -1;
        }
        else if (el2 == '\0'){
            return 1;
        }

        if (el1 > el2){
            return 1;
        }
        else if (el2 > el1){
            return -1;
        }
        ++i1;
        ++i2;
    }
    return 0;
}


void MergeSortImpl(student** values, student** buffer, int l, int r, int (*comp) (student*, student*)) {
    assert(values != NULL);
    assert(buffer != NULL);
    assert(comp != NULL);

    ASSERT(comp != NULL);

    if (l < r) {
        int m = (l + r) / 2;
        MergeSortImpl(values, buffer, l, m, comp);
        MergeSortImpl(values, buffer, m + 1, r, comp);

        int k = l;
        for (int i = l, j = m + 1; i <= m || j <= r; ) {
            if (j > r || (i <= m && comp(values[i], values[j]) < 0)) {
                buffer[k] = values[i];
                ++i;
            }
            else {
                buffer[k] = values[j];
                ++j;
            }
            ++k;
        }
        for (int i = l; i <= r; ++i) {
            values[i] = buffer[i];
        }
    }
}


void MergeSort(student** sp, int len, int (*comp) (student*, student*)) {
    assert(sp != NULL);
    assert(comp != NULL);

    ASSERT(sp != NULL);

    student** buffer = (student**) calloc(len, sizeof(student*));
    assert(buffer != NULL);

    MergeSortImpl(sp, buffer, 0, len - 1, comp);

}
