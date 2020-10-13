//
//  main.cpp
//  for learning C++
//  11/10/20
//  © 2019 Tramme Inc.
//
//  Created by James Raynor on 2020/10/11.
//  Copyright © 2018 Tramme Inc. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <unistd.h>
#include "autoSave.h"
#define PI acos(-1)

using namespace std;

int main() {
    autoRead(1);
    return 0;
}

int sum(int a, int b) {
    int fin;
    
    fin = a + b;
    return (fin);
}

int mins(int a, int b) {
    int fin1;
    
    fin1 = a - b;
    return (fin1);
}

int time(int a, int b) {
    int fin2;
    
    fin2 = a * b;
    return (fin2);
}

void divid(int n) {
    double a, b;
    cout << "请输入数字（两个）:";
    cin >> a >> b;
    double e = a, f = b;
    double D = e / f;
    cout << "\033[01;30;43m 你的答案是：\033[0m" << setprecision(10) << fixed << e << " / " << f << " = " << D << "(如果是无限循环或者不循环小数，程序将保留小数点后10位)" << endl;
}

void dividEnglishVision(int n) {
    double a, b;
    cout << "Please enter numbers (two numbers): ";
    cin >> a >> b;
    double e = a, f = b;
    double D = e / f;
    cout << "\033[01;30;43m Your anwser is \033[0m" << setprecision(10) << fixed << e << " / " << f << " = " << D << "(If it is an infinite loop or no loop decimal, the program will hold 10 decimal places.)" << endl;
}

void func(int n) {
    char e;
    int a;
    int b;
    int c;
    int d;
    int result;
    double num;
    cout << endl << endl << "版本：0.0.4.0" << endl;
    cout << "请选择你需要的计算方式" << endl;
    cout << "***********************" << endl;
    cout << "*    1. 加法           *" << endl;
    cout << "*    2. 减法           *" << endl;
    cout << "*    3. 乘法           *" << endl;
    cout << "*    4. 除法           *" << endl;
    cout << "*    5. 关于计算器     *" << endl;
    cout << "*    6. 次方           *" << endl;
    cout << "*    7. 平方根         *" << endl;
    cout << "*    8. 三角函数       *" << endl;
    cout << "*    9. 语言设置       *" << endl;
    cout << "*    0. 高等数学       *" << endl;
    cout << "*    a. 关闭           *" << endl;
    cout << "***********************" << endl;
    cout << "请输入选项：";
    cin >> e;
    switch (e) {
        case '1':
            cout << "请输入数字（两个）:";
            cin >> a >> b;
            result = sum(a, b);
            cout << "\033[01;30;43m 你的答案是: \033[0m" << a << " + " << b << " = " << result << endl;
            func(1);
            break;
        case '2':
            cout << "请输入数字（两个）:";
            cin >> a >> b;
            result = mins(a, b);
            cout << "\033[01;30;43m 你的答案是: \033[0m" << a << " - " << b << " = " << result << endl;
            func(1);
            break;
        case '3':
            cout << "请输入数字（两个）:";
            cin >> a >> b;
            result = time(a, b);
            cout << "\033[01;30;43m 你的答案是: \033[0m" << a << " * " << b << " = " << result << endl;
            func(1);
            break;
        case '4':
            divid(1);
            func(1);
            break;
        case '5':
            cout << "\033[01;30;47m 除法保留一位小数，此计算器纯粹用了学习制作C++程序，并无商业用途！未经作者允许，不可商用或者公开使用并不声明著作权！！！一经发现，后果自负！！！ \033[0m" << endl;
            cout << "\033[01;30;47m 图标的著作权属于苹果(中国) \033[0m" << endl;
            cout << "\033[01;30;47m © 2019 Tramme Inc. \033[0m" << endl;
            func(1);
            break;
        case '6':
            cout << endl << endl <<"请输入你需要的计算方式" << endl;
            cout << "*********************" << endl;
            cout << "*     1. 平方        *" << endl;
            cout << "*     2. 立方        *" << endl;
            cout << "*     3. 自定义次方  *" << endl;
            cout << "*     4. 返回        *" << endl;
            cout << "*********************" << endl;
            cout << "请输入你的选项：";
            cin >> d;
            switch (d) {
                case 1:
                    cout << "请输入数字（一个）:";
                    cin >> a;
                    c = pow(a, 2);
                    cout << "\033[01;30;43m 你的答案是: \033[0m" << c << endl;
                    fun(1);
                    break;
                case 2:
                    cout << "请输入数字（一个）:";
                    cin >> a;
                    c = pow(a, 3);
                    cout << "\033[01;30;43m 你的答案是: \033[0m" << c << endl;
                    fun(1);
                    break;
                case 3:
                    cout << "请输入数字（两个 前面写指数，后面写幂）:";
                    cin >> a >> b;
                    c = pow(a, b);
                    cout << "\033[01;30;43m 你的答案是: \033[0m" << c << endl;
                    fun(1);
                    break;
                case 4:
                    func(1);
                    break;
                default:
                    cout << "\033[01;33;45m 无效答案返回上一步 \033[0m" << endl;
                    fun(1);
                    break;
            }
        case '7':
            cout << "请输入数字：";
            cin >> num;
            c = sqrt(num);
            cout << "\033[01;30;43m 你的答案是: \033[0m" << c << endl;
            func(1);
            break;
        case '8':
            func1(1);
            break;
        case '9':
            autoSave(1);
            break;
        case '0':
            higherMathematicsChineseVision(1);
            break;
        case 'A':
            cout << "\033[01;33;45m 关闭此计算器 \033[0m" << endl;
            break;
        case 'a':
            cout << "\033[01;33;45m 关闭此计算器 \033[0m" << endl;
            break;
        default:
            cout << "\033[01;33;45m 无效答案，回到主页面 \033[0m" << endl;
            func(1);
            break;
    }
}

void englishVisionOfFunction(int n) {
    char e;
    int a;
    int b;
    int c;
    int d;
    int result;
    double num;
    cout << endl << endl << "Version: 0.0.4.0" << endl;
    cout << "Please select the calculation method you want" << endl;
    cout << "*********************************" << endl;
    cout << "*    1. addition                *" << endl;
    cout << "*    2. subtraction             *" << endl;
    cout << "*    3. multiplication          *" << endl;
    cout << "*    4. division                *" << endl;
    cout << "*    5. About the calculator    *" << endl;
    cout << "*    6. Power                   *" << endl;
    cout << "*    7. square root             *" << endl;
    cout << "*    8. trigonometric function  *" << endl;
    cout << "*    9. Language Setting        *" << endl;
    cout << "*    0. Derivation              *" << endl;
    cout << "*    a. Close                   *" << endl;
    cout << "*********************************" << endl;
    cout << "Enter your option: ";
    cin >> e;
    switch (e) {
        case '1':
            cout << "Please enter numbers (two numbers): ";
            cin >> a >> b;
            result = sum(a, b);
            cout << "\033[01;30;43m Your anwser is \033[0m" << a << " + " << b << " = " << result << endl;
            englishVisionOfFunction(1);
            break;
        case '2':
            cout << "Please enter numbers (two numbers): ";
            cin >> a >> b;
            result = mins(a, b);
            cout << "\033[01;30;43m Your anwser is \033[0m" << a << " - " << b << " = " << result << endl;
            englishVisionOfFunction(1);
            break;
        case '3':
            cout << "Please enter numbers (two numbers): ";
            cin >> a >> b;
            result = time(a, b);
            cout << "\033[01;30;43m Your anwser is \033[0m" << a << " * " << b << " = " << result << endl;
            englishVisionOfFunction(1);
            break;
        case '4':
            dividEnglishVision(1);
            englishVisionOfFunction(1);
            break;
        case '5':
            cout << "\033[01;30;47m Division to retain a decimal, this calculator is purely used to learn to produce C++ procedures, no commercial use! Without the permission of the author, not commercial or public use does not declare copyright!! Once found, consequences!!! \033[0m" << endl;
            cout << "\033[01;30;47m The copyright of the icon belongs to Apple (China) \033[0m" << endl;
            cout << "\033[01;30;47m © 2019 Tramme Inc. \033[0m" << endl;
            englishVisionOfFunction(1);
            break;
        case '6':
            cout << endl << endl <<"Please enter the calculation method you want" << endl;
            cout << "************************" << endl;
            cout << "*     1. square        *" << endl;
            cout << "*     2. cubic         *" << endl;
            cout << "*     3. Custom power  *" << endl;
            cout << "*     4. Back          *" << endl;
            cout << "************************" << endl;
            cout << "Enter your option: ";
            cin >> d;
            switch (d) {
                case 1:
                    cout << "Please enter numbers (one number): ";
                    cin >> a;
                    c = pow(a, 2);
                    cout << "\033[01;30;43m Your anwser is \033[0m" << c << endl;
                    powerOfEnglishVision(1);
                    break;
                case 2:
                    cout << "Please enter number (one number): ";
                    cin >> a;
                    c = pow(a, 3);
                    cout << "\033[01;30;43m Your anwser is \033[0m" << c << endl;
                    powerOfEnglishVision(1);
                    break;
                case 3:
                    cout << "Please enter numbers ([Two numbers]Write exponents first, powers later): ";
                    cin >> a >> b;
                    c = pow(a, b);
                    cout << "\033[01;30;43m Your anwser is \033[0m" << c << endl;
                    powerOfEnglishVision(1);
                    break;
                case 4:
                    englishVisionOfFunction(1);
                    break;
                default:
                    cout << "\033[01;33;45m Invalid answer returns the previous step \033[0m" << endl;
                    powerOfEnglishVision(1);
                    break;
            }
        case '7':
            cout << "Please enter numbers: ";
            cin >> num;
            c = sqrt(num);
            cout << "\033[01;30;43m Your anwser is \033[0m" << c << endl;
            englishVisionOfFunction(1);
            break;
        case '8':
            trigonometricOfEnglishVision(1);
            break;
        case '9':
            autoSave(1);
            break;
        case '0':
            higherMathematicsEnglishVision(1);
            break;
        case 'A':
            cout << "\033[01;33;45m Close this calculator. \033[0m" << endl;
            break;
        case 'a':
            cout << "\033[01;33;45m Close this calculator. \033[0m" << endl;
            break;
        default:
            cout << "\033[01;33;45m Invalid answer, go back to home page \033[0m" << endl;
            englishVisionOfFunction(1);
            break;
    }
}

void fun(int n) {
    int d;
    int a;
    int b;
    int c;
    
    cout << endl << endl << "请输入你需要的计算方式" << endl;
    cout << "*********************" << endl;
    cout << "*     1. 平方        *" << endl;
    cout << "*     2. 立方        *" << endl;
    cout << "*     3. 自定义次方  *" << endl;
    cout << "*     4. 返回        *" << endl;
    cout << "*********************" << endl;
    cout << "请输入你的选项：";
    cin >> d;
    switch (d) {
        case 1:
            cout << "请输入数字（一个）:";
            cin >> a;
            c = pow(a, 2);
            cout << "\033[01;30;43m 你的答案是: \033[0m" << c << endl;
            fun(1);
            break;
        case 2:
            cout << "请输入数字（一个）:";
            cin >> a;
            c = pow(a, 3);
            cout << "\033[01;30;43m 你的答案是: \033[0m" << c << endl;
            fun(1);
            break;
        case 3:
            cout << "请输入数字（两个 前面写指数，后面写幂）:";
            cin >> a >> b;
            c = pow(a, b);
            cout << "\033[01;30;43m 你的答案是: \033[0m" << c << endl;
            fun(1);
            break;
        case 4:
            func(1);
            break;
        default:
            cout << "\033[01;33;45m 无效答案返回上一步 \033[0m" << endl;
            fun(1);
            break;
    }
}

void powerOfEnglishVision(int n) {
    int d;
    int a;
    int b;
    int c;
    
    cout << endl << endl << "Please enter the calculation method you want" << endl;
    cout << "************************" << endl;
    cout << "*     1. square        *" << endl;
    cout << "*     2. cubic         *" << endl;
    cout << "*     3. Custom power  *" << endl;
    cout << "*     4. Back          *" << endl;
    cout << "************************" << endl;
    cout << "Enter your option: ";
    cin >> d;
    switch (d) {
        case 1:
            cout << "Please enter numbers (one number): ";
            cin >> a;
            c = pow(a, 2);
            cout << "\033[01;30;43m Your anwser is \033[0m" << c << endl;
            powerOfEnglishVision(1);
            break;
        case 2:
            cout << "Please enter numbers (one number): ";
            cin >> a;
            c = pow(a, 3);
            cout << "\033[01;30;43m Your anwser is \033[0m" << c << endl;
            powerOfEnglishVision(1);
            break;
        case 3:
            cout << "Please enter numbers ([Two numbers]Write exponents first, powers later): ";
            cin >> a >> b;
            c = pow(a, b);
            cout << "\033[01;30;43m Your anwser is \033[0m" << c << endl;
            powerOfEnglishVision(1);
            break;
        case 4:
            englishVisionOfFunction(1);
            break;
        default:
            cout << "\033[01;33;45m Invalid answer returns the previous step \033[0m" << endl;
            powerOfEnglishVision(1);
            break;
    }
}

void func1(int n) {
    int a;
    
    cout << endl << "请输入你想要的计算方式" << endl;
    cout << "************************" << endl;
    cout << "*       1. 正弦(sin)    *" << endl;
    cout << "*       2. 余弦(cos)    *" << endl;
    cout << "*       3. 正切(tan)    *" << endl;
    cout << "*       4. 余切(cot)    *" << endl;
    cout << "*       5. 正割(sec)    *" << endl;
    cout << "*       6. 余割(csc)    *" << endl;
    cout << "*       7. 返回         *" << endl;
    cout << "************************" << endl;
    cout << "输入你的选项：";
    cin >> a;
    switch(a){
        case 1:
            ssin(1);
            func1(1);
            break;
        case 2:
            coss(1);
            func1(1);
            break;
        case 3:
            ttan(1);
            func1(1);
            break;
        case 4:
            cott(1);
            func1(1);
            break;
        case 5:
            secc(1);
            func1(1);
            break;
        case 6:
            cscc(1);
            func1(1);
            break;
        case 7:
            func(1);
            break;
        default:
            cout << endl << "\033[01;33;45m 错误答案，返回主页面。 \033[0m" << endl;
            func1(1);
            break;
    }
}

void trigonometricOfEnglishVision(int n) {
    int a;
    
    cout << endl << "Please enter the calculation method you want" << endl;
    cout << "****************************" << endl;
    cout << "*       1. sine(sin)       *" << endl;
    cout << "*       2. cosine(cos)     *" << endl;
    cout << "*       3. tangent(tan)    *" << endl;
    cout << "*       4. cotangent(cot)  *" << endl;
    cout << "*       5. secant(sec)     *" << endl;
    cout << "*       6. cosecant(csc)   *" << endl;
    cout << "*       7. Back            *" << endl;
    cout << "****************************" << endl;
    cout << "Enter your option: ";
    cin >> a;
    switch(a) {
        case 1:
            sinOfEnglishVision(1);
            trigonometricOfEnglishVision(1);
            break;
        case 2:
            cosOfEnglishVision(1);
            trigonometricOfEnglishVision(1);
            break;
        case 3:
            tanOfEnglishVision(1);
            trigonometricOfEnglishVision(1);
            break;
        case 4:
            cotOfEnglishVision(1);
            trigonometricOfEnglishVision(1);
            break;
        case 5:
            secOfEnglishVision(1);
            trigonometricOfEnglishVision(1);
            break;
        case 6:
            cscOfEnglishVision(1);
            trigonometricOfEnglishVision(1);
            break;
        case 7:
            englishVisionOfFunction(1);
            break;
        default:
            cout << endl << "\033[01;33;45m Wrong answer, return to the main page. \033[0m" << endl;
            func1(1);
            break;
    }
}

void ssin(int n) {
    float angle, radian;
    cout << "请输入角度:";
    cin >> angle;
    radian = angle * PI / 180;
    float sine;
    sine = sin(radian);
    cout << "\033[01;30;43m 你的答案: \033[0m" << sine << endl;
}

void sinOfEnglishVision(int n) {
    float angle, radian;
    cout << "Please enter the Angle: ";
    cin >> angle;
    radian = angle * PI / 180;
    float sine;
    sine = sin(radian);
    cout << "\033[01;30;43m Your anwser is \033[0m" << sine << endl;
}

void ttan(int n) {
    float angle, redian;
    cout << "请输入角度:";
    cin >> angle;
    redian = angle * PI / 180;
    float tane;
    tane = tan(redian);
    cout << "\033[01;30;43m 你的答案是: \033[0m" << tane << endl;
}

void tanOfEnglishVision(int n) {
    float angle, redian;
    cout << "Please enter the Angle: ";
    cin >> angle;
    redian = angle * PI / 180;
    float tane;
    tane = tan(redian);
    cout << "\033[01;30;43m Your anwser is \033[0m" << tane << endl;
}

void coss(int n) {
    float angle, radian;
    cout << "请输入角度: ";
    cin >> angle;
    radian = angle * PI / 180;
    float coss;
    coss = cos(radian);
    cout << "\033[01;30;43m 你的答案是: \033[0m" << coss << endl;
}

void cosOfEnglishVision(int n) {
    float angle, radian;
    cout << "Please enter the Angle: ";
    cin >> angle;
    radian = angle * PI / 180;
    float coss;
    coss = cos(radian);
    cout << "\033[01;30;43m Your anwser is \033[0m" << coss << endl;
}

void cott(int n) {
    float angle, radian;
    cout << "请输入角度：";
    cin >> angle;
    radian = angle * PI / 180;
    float tann;
    tann = tan(radian);
    float cott;
    cott = 1 / tann;
    cout << "\033[01;30;43m 你的答案是: \033[0m" << cott << endl;
}

void cotOfEnglishVision(int n) {
    float angle, radian;
    cout << "Please enter the Angle: ";
    cin >> angle;
    radian = angle * PI / 180;
    float tann;
    tann = tan(radian);
    float cott;
    cott = 1 / tann;
    cout << "\033[01;30;43m Your anwser is \033[0m" << cott << endl;
}

void secc(int n) {
    float angle, radian;
    cout << "请输入角度：";
    cin >> angle;
    radian = angle * PI / 180;
    float cosss;
    cosss = cos(radian);
    float seccc;
    seccc = 1 / cosss;
    cout << "\033[01;30;43m 你的答案是： \033[0m" << seccc << endl;
}

void secOfEnglishVision(int n) {
    float angle, radian;
    cout << "Please enter the Angle: ";
    cin >> angle;
    radian = angle * PI / 180;
    float cosss;
    cosss = cos(radian);
    float seccc;
    seccc = 1 / cosss;
    cout << "\033[01;30;43m Your anwser is \033[0m" << seccc << endl;
}

void cscc(int n) {
    float angle, radian;
    cout << "请输入角度：";
    cin >> angle;
    radian = angle * PI / 180;
    float sinn;
    sinn = sin(radian);
    float csccc;
    csccc = 1 / sinn;
    cout << "\033[01;30;43m 你的答案是： \033[0m" << csccc << endl;
}

void cscOfEnglishVision(int n) {
    float angle, radian;
    cout << "Please enter the Angle: ";
    cin >> angle;
    radian = angle * PI / 180;
    float sinn;
    sinn = sin(radian);
    float csccc;
    csccc = 1 / sinn;
    cout << "\033[01;30;43m Your anwser is \033[0m" << csccc << endl;
}
