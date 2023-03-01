#include <iostream>


/*
 Да се състави програма за обработка на масива A[N,N], където данните са цели числа в
интервала [-1000;1000]. Програмата да извърши следните действия:
 отпечатване на условието на задачата;
 отпечатване на имената на автора на програмата;
 въвеждане на входните данни;
 отпечатване на входните данни;
 а) да се нулират елементите в масива А, за които сумата със съответния елемент от масива В е
четно число принадлежащо на зададен интервал [K – L];
 б) да се определи броя на променените елементи в масива А;
 отпечатване на получените резултати след обработка а) и след обработка б) */

int main() {
    int input, left_limit, right_limit, sum_limits, counter;
    /* OUTPUTING THE TASK AND STUDENT*/
    std::cout << "Да се състави програма за обработка на масива A[N,N], където данните са цели числа в\n"
                 "интервала [-1000;1000]. Програмата да извърши следните действия:\n"
                 " отпечатване на условието на задачата;\n"
                 " отпечатване на имената на автора на програмата;\n"
                 " въвеждане на входните данни;\n"
                 " отпечатване на входните данни;\n"
                 " а) да се нулират елементите в масива А, за които сумата със съответния елемент от масива В е\n"
                 "четно число принадлежащо на зададен интервал [K – L];\n"
                 " б) да се определи броя на променените елементи в масива А;\n"
                 " отпечатване на получените резултати след обработка а) и след обработка б)" << std::endl;
    std::cout << " Made by Dobromir Georgiev Mitev 371222020" << std::endl;
    /* MAKING THE MATRIX*/
    std::cout << "How many rows and columbs should the matrix array have?" << std::endl;

    if (!(std::cin >> input) || input < 1)
    {
    do {
        std::cout << "Enter valid value!" << std::endl;
        std::cin.clear();std::cin.ignore(123,'\n');
    } while (!(std::cin >> input) || input < 1);}
    int array[input][input], cringe_array[2][2] = {4,3,2,1};
    /* ADDING VALUES TO THE MATRIX */
    for (int i = 0; i < input; ++i) {
        for (int j = 0; j < input; ++j) {
            do {
                std::cout << "Enter the value for " << i +1 << " row and " << j+1  << " column for array A" << std::endl;
                 std::cin.clear();std::cin.ignore(123,'\n');
            }while (!(std::cin >> array[i][j])||(array[i][j] <= -1000 || array[i][j] >= 1000));
        }
    }
    /* OUTPUTTING THE VALUES OF THE MATRIX */
    for (int i = 0; i < input; ++i) {
        for (int j = 0; j < input; ++j) {
            std::cout << "Value for row " << i + 1 << " column " << j + 1 << std::endl << array[i][j] << std::endl;
        }
    }
    /* OBJECTIVE A & B */
    do {
        std::cout << "Enter the left limit:" << std::endl;
        std::cin.clear();std::cin.ignore(123,'\n');
    }
    while(!(std::cin >> left_limit));
    do {
        std::cout << "Enter the right limit:" << std::endl;
        std::cin.clear();std::cin.ignore(123,'\n');
    }
    while((!(std::cin >> right_limit)) || right_limit < left_limit);
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            int sum = array[i][j] + cringe_array[i][j];
            if((sum)%2 == 0 && (sum>=left_limit && sum <=right_limit))
            {
                array[i][j] = 0;
                counter++;
            }
        }
    }
    std::cout << "Outputting the new values in the matrix" << std::endl;
    for (int i = 0; i < input; ++i) {
        for (int j = 0; j < input; ++j) {
            std::cout << "Value for row " << i + 1 << " row " << j + 1 << std::endl << array[i][j] << std::endl;
        }
    }
    std::cout << "The number of changed elements is: " << counter << std::endl;
    return 0;
}
