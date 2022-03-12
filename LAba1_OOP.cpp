#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void Hello()
{
    cout << "Задание 1.1.1.1, введите 1" << endl;
    cout << "Задание 1.1.1.2, введите 2" << endl << endl;

    cout << "Задание 1.1.2.1, введите 3" << endl;
    cout << "Задание 1.1.2.2, введите 4" << endl;
    cout << "Задание 1.1.2.3, введите 5" << endl << endl;

    cout << "Задание 1.1.3.1, введите 6" << endl;
    cout << "Задание 1.1.3.2, введите 7" << endl;
    cout << "Задание 1.1.3.3, введите 8" << endl;
    cout << "Задание 1.1.3.4, введите 9" << endl << endl;

    cout << "Задание 1.1.4.1, введите 10" << endl;
    cout << "Задание 1.1.4.2, введите 11" << endl;
    cout << "Задание 1.1.4.3, введите 12" << endl;
    cout << "Задание 1.1.4.4, введите 13" << endl;
    cout << "Задание 1.1.4.5, введите 14" << endl;
    cout << "Задание 1.1.4.6, введите 15" << endl;
    cout << "Задание 1.1.4.8, введите 16" << endl << endl;

    cout << "Задание 1.1.5.1, введите 17" << endl;
    cout << "Задание 1.1.5.2, введите 18" << endl;
    cout << "Задание 1.1.5.3, введите 19" << endl;
    cout << "Задание 1.1.5.4, введите 20" << endl;
    cout << "Задание 1.1.5.5, введите 21" << endl;
    cout << "Задание 1.1.5.6, введите 22" << endl;
    cout << "Задание 1.1.5.7, введите 23" << endl;
    cout << "Задание 1.1.5.8, введите 24" << endl << endl;

    cout << "Задание Индивидуальное, введите 25" << endl << endl;
}

template <typename T>
int Input(const string iputInformation, T& value)
{
    cout << iputInformation << "\t";
    cin >> value;
    cout << endl;
    return value;
}

template <typename T1>
void Sorted(T1* array, const int SIZE = 10)
{
    //Сортировка массива методом выбора
    for (int i = 0; i < SIZE - 1; ++i)
    {
        int temp = i;
        int tempBuf;
        for (int j = i + 1; j < SIZE; ++j)
        {
            if (array[j] < array[temp])
            {
                temp = j;
            }

        }
        tempBuf = array[i];
        array[i] = array[temp];
        array[temp] = tempBuf;
    }
}

template <typename T2>
T2 Search(T2* array, const int SearchValue, const int SIZE = 10)
{
    int returnValue = -1;
    for (int i = 0; i < SIZE; ++i)
    {
        if (array[i] == SearchValue)
        {
            returnValue = i;
        }
    }
    return returnValue;
}

template <typename T3>
int CharSorted(T3*& array, const int SIZE = 15)
{
    T3* buffer = new T3[SIZE];
    int count = 0;

    for (int i = 0; i < SIZE; ++i)
    {
        if ((array[i] >= 'a' && array[i] <= 'z') || (array[i] >= 'A' && array[i] <= 'Z'))
        {
            buffer[count] = array[i];
            count++;
        }
    }
    array = new T3[count];
    cout << "Функция CharSorted:\n";
    for (int i = 0; i < count; ++i)
    {
        array[i] = buffer[i];
        cout << "array[" << i << "]= " << array[i] << endl;
    }
    delete[] buffer;
    return count;
}

void ForNumber_1_1_1_1()
{
    double add = 1.0;
    double sum = 0.0;
    for (int i = 0; i < 10; i++)
    {
        sum += add * i;
        add *= 1.1;
    }
    cout << "Total sum is " << sum << endl;
}

void ForNumber_1_1_1_2()
{
    double add = 1.0;
    double sum = 0.0;
    for (int i = 0; i < 1000; i++)
    {
        sum += add * i; // Поставьте условную точку останова здесь
        if (i % 3 == 0)
        {
            add *= 1.1;
        }
        else
        {
            add /= 3.0;
        }
    }
    cout << "Total sum is " << sum << endl;
}

void ForNumber_1_1_2_1()
{
    const int SIZE = 10;
    double* array = new double[SIZE];

    cout << "Source array is:\n";
    for (int i = 0; i < SIZE; i++)
    {
        array[i] = 0 + rand() % 301;
        cout << array[i] << '\t';
    }

    Sorted(array);

    cout << "\n\nSorted array is:\n";
    for (int i = 0; i < SIZE; ++i)
    {
        cout << array[i] << '\t';
    } 
    cout << endl;
}

void ForNumber_1_1_2_2()
{
    const int SIZE = 12;
    double* array = new double[SIZE];

    int searchingValue;
    int count = 0;
    Input("Enter searching value:", searchingValue);

    cout << "Source array is:\n";
    for (int i = 0; i < SIZE; i++)
    {
        array[i] = 0 + rand() % 301;
        cout << array[i] << '\t';

        if (array[i] >= searchingValue)
        {
            count++;
        }
    }

    cout << "\nElements of array more than " << searchingValue << " is: " << count;
}

void ForNumber_1_1_2_3()
{
    const int SIZE = 8;
    char* array = new char[SIZE];

    cout << "Enter array of 8 chars\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << "array[" << i << "]: ";
        cin >> array[i];
        cout << endl;
    }

    cout << "Your array is:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << array[i];
    }

    cout << "All letters in your array:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        if (array[i] >= 'a' && array[i] <= 'z')
        {
            cout << array[i] << '\t';
        }
    }
}

double ForNumber_1_1_3_1(double base, int exponent)
{
    double bufer = 1;
    for (int i = 0; i < exponent; ++i)
    {
        bufer *= base;
    }
    return bufer;
}

void ForNumber_1_1_3_4(int& value)
{
    cout << (value / 10) * 10 << endl;
}

void ForNumber_1_1_4_1()
{
    int a = 5;
    int b = 4;

    cout << "Address of a: " << &a << endl;
    cout << "Address of b: " << &b << endl;

    double c = 13.5;
    cout << "Address of c: " << &c << endl;

    bool d = true;
    cout << "Address of d: " << &d << endl;
}

void ForNumber_1_1_4_2()
{
    int a[10] = { 1, 2, 7, -1, 5, 3, -1, 7, 1, 6 };
    cout << "Size of int type: " << sizeof(int) << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Address of a[" << i << "]: " << &a[i] << endl;
    }

    cout << endl << "Size of double type: " << sizeof(double) << endl;
    double b[10] = { 1.0, 2.0, 7.0, -1.0, 5.0, 3.5, -1.8, 7.2, 1.9, 6.2};

    for (int i = 0; i < 10; i++)
    {
        cout << "Address of b[" << i << "]: " << &b[i] << endl;
    }

}

void ForNumber_1_1_4_3()
{
    int a = 5;
    int& b = a;
    cout << "Address of a: " << &a << endl;
    cout << "Address of b: " << &b << endl;
    cout << endl;
    b = 7;
    cout << "Value of a: " << a << endl;
}

void ForNumber_1_1_4_4(double& a)
{
    cout << "Address of a in Foo(): " << &a << endl;
    cout << "Value of a in Foo(): " << a << endl;
    a = 15.0;
    cout << "New value of a in Foo(): " << a << endl;
}

void ForNumber_1_1_4_5(double a)
{
    cout << "Address of a in Foo(): " << &a << endl;
    cout << "Value of a in Foo(): " << a << endl;
    a = 15.0;
    cout << "New value of a in Foo(): " << a << endl;
}

void ForNumber_1_1_4_6()
{
    int a = 5;
    int* pointer = &a;
    cout << "Address of a: " << &a << endl;
    cout << "Address in pointer: " << pointer << endl;
    cout << "Address of pointer: " << &pointer << endl;
    cout << endl;
    *pointer = 7;
    cout << "Value in a: " << a << endl;
    cout << "Value by pointer address: " << *pointer << endl;
}

void ForNumber_1_1_4_8(double* a)
{
    cout << "Address in pointer: " << a << endl;
    cout << "Address of pointer: " << &a << endl;
    cout << "Value in pointer address: " << *a << endl;
    *a = 15.0;
    cout << "New value in pointer address: " << *a << endl;
}

void ForNumber_1_1_5_1()
{
    int size = 8;
    double* array = new double[size];

    for (int i = 0; i < size; ++i)
    {
        array[i] = -10 + rand() % 10;
        cout << array[i] << '\t';
    }
    delete [] array;
    cout << endl;
}

void ForNumber_1_1_5_2()
{
    int size = 8;
    int bufer;
    bool* array = new bool[size];

    for (int i = 0; i < size; ++i)
    {
        bufer = 0 + rand() % 2;
        if (bufer == 0)
        {
            array[i] = false;
        }
        else 
        {
            array[i] = true;
        }
        cout << bool(array[i]) << '\t';
    }
    delete[] array;
    cout << endl;
}

void ForNumber_1_1_5_3()
{
    int N;
    Input("Enter char array size:", N);

    char* array = new char[N];
    for (int i = 0; i < N; ++i)
    {
        cout << "Enter a[" << i;
        Input("]:", array[i]);
    }
    cout << endl << endl << "Your char array is:\t" << endl;

    for (int i = 0; i < N; ++i)
    {
        cout << array[i] << "\t";
    }
    cout << endl;
    delete[] array;
}

void ForNumber_1_1_5_4()
{
    const int  SIZE = 10;
    double* array = new double[SIZE];
    cout << "Array of double:" << endl;

    for (int i = 0; i < SIZE; i++)
    {
        array[i] = 0 + rand() % 301;
        cout << array[i] << '\t';
    }

    Sorted(array);

    cout << "\n\nSorted array of double :\n" << endl;  
    for (int i = 0; i < SIZE; ++i)
    {
        cout << array[i] << '\t';
    }
    cout << endl;
    delete[] array;
}

void ForNumber_1_1_5_5()
{
    const int SIZE = 10;
    int* array = new int[SIZE];

    cout << "Int array:\n";
    for (int i = 0; i < SIZE; i++)
    {
        array[i] = 0 + rand() % 301;
        cout << array[i] << '\t';
    }
    cout << endl;

    int SearchValue;
    Input("Enter searching value: ", SearchValue);
    
    if(Search(array, SearchValue) == -1)
    {
        cout << "Элемент не найден!" << endl;
    }
    else
    {
        cout << "Index of searching value " << SearchValue << " is: " << Search(array, SearchValue);
    }
    cout << endl;
}

void ForNumber_1_1_5_6()
{
    const int SIZE = 15;
    char* array = new char[SIZE];

    cout << "Char array is:\n";
    for (int i = 0; i < SIZE; i++)
    {
        array[i] = char(0 + rand() % 128);
        cout << array[i] << '\t';
    }

    int count = CharSorted(array);
    cout << "\n\nКол-во букв:\n" << count << "\n\nLetters in array:\n";
    for (int i = 0; i < count; i++)
    {
        cout << array[i] << '\t';
    }
    cout << endl;
}

int* ForNumber_1_1_5_7(const int SIZE) //todo
{
    cout << "Random array of " << SIZE << ":\n";
    int* array = new int[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        array[i] = 0 + rand() % 100;
        //cout << array[i] << '\t';
    }
    //cout << endl;
    return array;
}

int* ReadArray(int count)
{
    int* values = new int[count];
    for (int i = 0; i < count; i++)
    {
        cin >> values[i];
    }
    return values;
}

int CountPositiveValues(int*& values, int count)
{//используем двойное косвенное обращение
    int result = 0;
    for (int i = 0; i < count; i++)
    {
        if (values[i] > 0)
        {
            result++;
        }
    }
    // усранение дампа в строчке 475
    delete[] values;
    return result;
}

template <typename T4>
T4* OutPut(int count, T4* array)
{
    for (int i = 0; i < count; ++i)
    {
        cout << array[i] << '\t';
    }
    cout << endl;
    return array;
}

int GetIndexOfMax(double* array)
{
/*Написать функцию GetIndexOfMax(), которая принимает на вход 
массив вещественных чисел и возвращает индекс максимального элемента массива.
Вызвать функцию GetIndexOfMax() в main(), передав ей динамический массив. 
После вызова функции вывести индекс на экран и освободить память динамического массива.
Например, для исходного массива {1.12, 4.68, 25.2, -99.42, 8.41, 22.7, -6.38, 1.4, -12.19} 
программа должна вывести на экран индекс 2.*/
    int bufer = 0;
    for (int i = 0; i < 9; i++)
    {
        if (array[bufer] < array[i] && bufer != i)
        {
            bufer = i;
        }
    }
    return bufer;
}


void AnalizeOperationCode(int temp)
{
    switch (temp)
    {
    case -99999:
    {
        cout << "\n\n\n\n\n\n\n\n\n\t\t\tХалоу! Вас приветствует программа по 1-ой лабораторной работе!\n\n\n\n\n\n\n\n\n" << endl;
        break;
    }
    case 1:
    {
        ForNumber_1_1_1_1();
        break;
    }
    case 2:
    {
        ForNumber_1_1_1_2();
        break;
    }
    case 3:
    {
        ForNumber_1_1_2_1();
        break;
    }
    case 4:
    {
        ForNumber_1_1_2_2();
        break;
    }
    case 5:
    {
        ForNumber_1_1_2_3();
        break;
    }
    case 6:
    {
        double base;
        Input("Ввод того что возводим:", base);

        int exponent;
        Input("Ввод того в какую спень возводим:", exponent);

        cout << base << " ^ " << exponent << " = " << ForNumber_1_1_3_1(base, exponent) << endl;
        break;
    }
    case 7:
    {
        HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsoleHandle, FOREGROUND_BLUE | BACKGROUND_RED);

        cout << "________________________________________" << endl;
        cout << "|Тоже самое что для предыдущего задания|\n\n" << endl;

        double base;
        Input("Ввод того что возводим:", base);

        int exponent;
        Input("Ввод того в какую спень возводим:", exponent);

        cout << base << " ^ " << exponent << " = " << ForNumber_1_1_3_1(base, exponent) << endl;
        break;
    }
    case 8:
    {
        cout << "___________________________________________________________________________" << endl;
        cout << "|Тоже самое что для предыдущего задания| И для предыдущего для предыдущего|\n\n";

        double base;
        Input("Ввод того что возводим:", base);

        int exponent;
        Input("Ввод того в какую спень возводим:", exponent);

        cout << base << " ^ " << exponent << " = " << ForNumber_1_1_3_1(base, exponent) << endl;
        break;
    }
    case 9:
    {
        int tempBuf;
        Input("Ввод числа:", tempBuf);
        ForNumber_1_1_3_4(tempBuf);
        break;
    }
    case 10:
    {
        ForNumber_1_1_4_1();
        break;
    }
    case 11:
    {
        ForNumber_1_1_4_2();
        break;
    }
    case 12:
    {
        ForNumber_1_1_4_3();
        break;
    }
    case 13:
    {
        double a = 5.0;
        cout << "Address of a in main(): " << &a << endl;
        cout << "Value of a in main(): " << a << endl;
        cout << endl;
        ForNumber_1_1_4_4(a);
        cout << endl;
        cout << "Value of a in main(): " << a << endl;
        break;
    }
    case 14:
    {
        double a = 5.0;
        cout << "Address of a in main(): " << &a << endl;
        cout << "Value of a in main(): " << a << endl;
        cout << endl;
        ForNumber_1_1_4_5(a);
        cout << endl;
        cout << "Value of a in main(): " << a << endl;
        break;
    }
    case 15:
    {
        ForNumber_1_1_4_6();
        break;
    }
    case 16:
    {
        double value = 5.0;
        double* pointer = &value;
        cout << "Address of value in main(): " << &value << endl;
        cout << "Address in pointer in main(): " << pointer << endl;
        cout << "Address of pointer in main(): " << &pointer << endl;
        cout << "Value of a in main(): " << value << endl;
        cout << endl;
        ForNumber_1_1_4_8(pointer);
        cout << endl;
        cout << "Value of a in main(): " << value << endl;
        break;
    }
    case 17:
    {
        ForNumber_1_1_5_1();
        break;
    }
    case 18:
    {
        ForNumber_1_1_5_2();
        break;
    }
    case 19:
    {
        ForNumber_1_1_5_3();
        break;
    }
    case 20:
    {
        ForNumber_1_1_5_4();
        break;
    }
    case 21:
    {
        ForNumber_1_1_5_5();
        break;
    }
    case 22:
    {
        ForNumber_1_1_5_6();
        break;
    }
    case 23:
    {
        delete OutPut(5, ForNumber_1_1_5_7(5));
        delete OutPut(8, ForNumber_1_1_5_7(8));
        delete OutPut(13, ForNumber_1_1_5_7(13));
        break;
    }
    case 24:
    {
        int count = 15;
        int* values = ReadArray(count);
        cout << "Count is: " << CountPositiveValues(values, count) << endl;

        count = 20;
        values = ReadArray(count);
        cout << "Count is: " << CountPositiveValues(values, count) << endl;
        //удаляем тут оператор delete
        break;
    }
    case 25:
    {
        double* array = new double[9] { 1.12, 4.68, 25.2, -99.42, 8.41, 22.7, -6.38, 1.4, -12.19 };
        cout << GetIndexOfMax(array) << endl;
        delete[] array;
        break;
    }
    default:
    {
        cout << "!Программа завершена! До скорых всречь!" << endl;
        break;
    }
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    int temp = -99999;

    do
    {
        AnalizeOperationCode(temp);
        Hello();
        Input("Введите номер задания_", temp); 
    } while (temp >= 1 && temp < 26);
    return 0;
}