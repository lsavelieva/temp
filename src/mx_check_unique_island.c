#include "../inc/pathfinder.h"

//индексы проверить!! иначе не будет сравнения в массиве между элементами

char **mx_arr_of_isl(char **arr, int count){
    char **isl_arr = malloc(sizeof(char*) * ((count - 1) * 2 + 1));

    isl_arr[0] = arr[0];
    for (int i = 0, j = 0; i < (count * 3); i++) {
        if (mx_atoi(arr[i]) < 0)
            if (mx_strcmp(isl_arr[j], arr[i]) != 0)
                isl_arr[j] = arr[i];
    }
    isl_arr[(count - 1) * 2] = NULL;
    return isl_arr;
}

/* function to check number of unique islands */
//  void sum_of_isl(char **arr, int sum){
//     int count = 0; //value of unique islands in file
//     int k;
//     int j;

//     for (j = 0; j <= sum; j++) {
//         ++count;
//         for (k = 0; k < j; ++k){
//             if (mx_strcmp(arr[j], arr[k]) == 0) {
//                 --count;
//                 break;
//             }
//         }
//     } printf("count --> %d\n", count);
//     if (sum != count) {
//         mx_printstr("\x1b[33mRESULT OF MX_CHECK_UNIQUE_ISLANDS\033[0m \n");
//         mx_printerr("error: invalid number of islands\n");
//         exit(-1);
//         }
// }

// void mx_check_unique_island(const char *file) {
//     char *s = mx_file_to_str(file);
// //     int sum = mx_check_digit(s, mx_get_char_index(s, '\n'), 1); //value of 1st line
//     // char **arr_i = NULL;// array of islands
//     int size = mx_count_words(s, '\n'); printf("size --> %d\n", size);
// char **arr_i = (char**)malloc((size + 1) * sizeof(char*));

//     s = s + mx_get_char_index(s, '\n') + 1; mx_printstr("arr_of_unique?\n");
//     arr_of_all(s,  arr_i);
//     mx_print_strarr(arr_i, " > ");
//     // sum_of_isl(arr_i, sum);



//     mx_printstr("\x1b[32mOK FOR CHECK_UNIQUE_ISLANDS\033[0m \n");

// }
