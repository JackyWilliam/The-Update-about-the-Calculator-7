//
//  autoSave.h
//
//  Created by James Raynor on 2020/10/11.
//


#include <fstream>
#include <iostream>
void autoSave(int n);
void autoRead(int n);
void func(int n);
void fun(int n);
void ssin(int n);
void ttan(int n);
void coss(int n);
void func1(int n);
void cott(int n);
void secc(int n);
void cscc(int n);
void divid(int n);
void pausee(int n);
void englishVisionOfFunction(int n);
void dividEnglishVision(int n);
void powerOfEnglishVision(int n);
void trigonometricOfEnglishVision(int n);
void sinOfEnglishVision(int n);
void tanOfEnglishVision(int n);
void cosOfEnglishVision(int n);
void cotOfEnglishVision(int n);
void secOfEnglishVision(int n);
void cscOfEnglishVision(int n);
void derivationOfChineseVision(int n);
void derivationOfEnglishVision(int n);
void zSocreCalChineseVision(int n);
void zSocreCalEnglishVision(int n);
void higherMathematicsChineseVision(int n);
void differentialAndIntegralCalculusChineseVision(int n);
void statisticsOfChineseVision(int n);
void statisticsOfEnglishVision(int n);
void higherMathematicsEnglishVision(int n);
void differentialAndIntegralCalculusEnglishVision(int n);
/*
void chineseSystem(int n);
void englishSystem(int n);
*/
using namespace std;

void autoSave(int n) {
    int i, b;
    char a;

    cout << "你想要选择哪一个语言系统" << endl;
    cout << "Which language system do you want to choose" << endl;
    cout << "A. 中文    B. English" << endl;
    cout << "请选择你需要的语言系统：" << endl;
    cout << "Please choose the language system which you want to use: ";
    cin >> a;
    switch (a) {
        case 'A':
            i = 1;
            b = 1;
            break;
        case 'B':
            i = 2;
            b = 1;
            break;
        case 'a':
            i = 1;
            b = 1;
            break;
        case 'b':
            i = 2;
            b = 1;
            break;
    }

    ofstream OutFile;
    ofstream OutFile2;

    OutFile.open("/Users/jacky/Documents/data1.txt");   // File location and create a txt file
    //  It can be: OutFile.open("/file location/Test1.txt");
    OutFile2.open("/Users/jacky/Documents/data2.txt");  // File location and create a txt file
    //  It can be: OutFile.open(" /file location/Test2.txt");
    OutFile << i;
    OutFile2 << b;

    OutFile.close();
    OutFile2.close();
    
    autoRead(1);
}

void autoRead(int n) {
    int data;
    int temp;
    
    ifstream readFile("/Users/jacky/Documents/data1.txt");   // File location and read
    //  It can be: ifstream readFile("/file location/Test1.txt");
    ifstream readFile2("/Users/jacky/Documents/data2.txt");  // File location and read
    //  It can be: ifstream readFile("/file location/Test2.txt");
    readFile >> temp;
    readFile2 >> data;

    int a = temp;
    int b = data;

    readFile .close();
    
    if (b == 1) {
        if (a == 1) {
            func(1);
        }  else if (a == 2){
            englishVisionOfFunction(1); // English Vis
        } else {
            autoSave(1);
        }
    } else {
        autoSave(1);
    }
}

void higherMathematicsChineseVision(int n) {
    int a;
    
    cout << "请选择你需要的计算方式:" << endl;
    cout << "******************" << endl;
    cout << "*   1. 微积分     *" << endl;
    cout << "*   2. 统计学     *" << endl;
    cout << "*   3. 返回       *" << endl;
    cout << "******************" << endl;
    cout << "请输入选项：";
    cin >> a;
    switch (a) {
        case 1:
            differentialAndIntegralCalculusChineseVision(1);
            break;
        case 2:
            statisticsOfChineseVision(1);
            break;
        case 3:
            func(1);
            break;
        default:
            cout << "无效答案，返回上一步。" << endl;
            higherMathematicsChineseVision(1);
            break;
    }
}

void higherMathematicsEnglishVision(int n) {
    int a;
    
    cout << "Please select your calculation method:" << endl;
    cout << "********************************************" << endl;
    cout << "*   1. Differential and integral calculus  *" << endl;
    cout << "*   2. statistics                          *" << endl;
    cout << "*   3. Back                                *" << endl;
    cout << "********************************************" << endl;
    cout << "Enter your option: ";
    cin >> a;
    switch (a) {
        case 1:
            differentialAndIntegralCalculusEnglishVision(1);
            break;
        case 2:
            statisticsOfEnglishVision(1);
            break;
        case 3:
            englishVisionOfFunction(1);
            break;
        default:
            cout << "Invalid answer returns the previous step." << endl;
            higherMathematicsEnglishVision(1);
            break;
    }
}

void differentialAndIntegralCalculusChineseVision(int n) {
    int a;
    
    cout << "请选择你需要的计算方式:" << endl;
    cout << "***********************" << endl;
    cout << "*       1. 求导           *" << endl;
    cout << "* (其他暂未开放，敬请期待)*" << endl;
    cout << "*       2. 返回           *" << endl;
    cout << "***********************" << endl;
    cout << "请输入选项：";
    cin >> a;
    switch(a) {
        case 1:
            derivationOfChineseVision(1);
            differentialAndIntegralCalculusChineseVision(1);
            break;
        case 2:
            higherMathematicsChineseVision(1);
            break;
        default:
            cout << "无效答案，返回上一步。" << endl;
            differentialAndIntegralCalculusChineseVision(1);
            break;
    }
}

void differentialAndIntegralCalculusEnglishVision(int n) {
    int a;
    
    cout << "Please select your calculation method:" << endl;
    cout << "*****************************************" << endl;
    cout << "*            1. derivation              *" << endl;
    cout << "* (Others are not open yet, please wait)*" << endl;
    cout << "*            2. Back                    *" << endl;
    cout << "*****************************************" << endl;
    cout << "Enter your option: ";
    cin >> a;
    switch(a) {
        case 1:
            derivationOfEnglishVision(1);
            differentialAndIntegralCalculusEnglishVision(1);
            break;
        case 2:
            higherMathematicsEnglishVision(1);
            break;
        default:
            cout << "无效答案，返回上一步。" << endl;
            differentialAndIntegralCalculusEnglishVision(1);
            break;
    }
}

void statisticsOfChineseVision(int n) {
    int a;
    
    cout << "请选择你的计算方式:" << endl;
    cout << "***********************" << endl;
    cout << "*     1. Z-Score      *" << endl;
    cout << "* (其他暂未开放，敬请期待)*" << endl;
    cout << "*       2. 返回        *" << endl;
    cout << "***********************" << endl;
    cout << "请输入选项：";
    cin >> a;
    switch (a) {
        case 1:
            zSocreCalChineseVision(1);
            statisticsOfChineseVision(1);
            break;
        case 2:
            higherMathematicsChineseVision(1);
            break;
        default:
            cout << "错误答案，返回上一步。" << endl;
            statisticsOfChineseVision(1);
            break;
    }
}

void statisticsOfEnglishVision(int n) {
    int a;
    
    cout << "Please select your calculation method:" << endl;
    cout << "****************************************" << endl;
    cout << "*              1. Z-Score              *" << endl;
    cout << "*(Others are not open yet, please wait)*" << endl;
    cout << "*                2. Back               *" << endl;
    cout << "****************************************" << endl;
    cout << "Enter your option: ";
    cin >> a;
    switch (a) {
        case 1:
            zSocreCalEnglishVision(1);
            statisticsOfEnglishVision(1);
            break;
        case 2:
            higherMathematicsChineseVision(1);
            break;
        default:
            cout << "Invalid answer returns the previous step." << endl;
            statisticsOfChineseVision(1);
            break;
    }
}

void derivationOfChineseVision(int n) {
    float a, b, c, x;
    
    cout << "请输入所有您需要的数字：" << endl;
    cout << "x = "; //12
    cin >> x;
    cout << "b = "; // 11
    cin >> b;
    a = pow(x, b);
    c = b * pow(x, (b - 1));
    cout << "f(x) = " << a << endl;
    cout << "f'(x) = " << c << endl;
}

void derivationOfEnglishVision(int n) {
    float a, b, c, x;
    
    cout << "Please enter all the Numbers you need: " << endl;
    cout << "x = "; //12
    cin >> x;
    cout << "b = "; // 11
    cin >> b;
    a = pow(x, b);
    c = b * pow(x, (b - 1));
    cout << "f(x) = " << a << endl;
    cout << "f'(x) = " << c << endl;
}

void zSocreCalChineseVision(int n) {
    float z, x, m, s;
    
    cout << "请按照要求输入所有数字：" << endl;
    cout << "x = ";
    cin >> x;
    cout << "M(Mean) = ";
    cin >> m;
    cout << "S(standard deviations) = ";
    cin >> s;
    
    z = (x - m) / s;
    cout << "Z-Score 为：" << z << endl;
}

void zSocreCalEnglishVision(int n) {
    float z, x, m, s;
    
    cout << "Please enter all Numbers as required: " << endl;
    cout << "x = ";
    cin >> x;
    cout << "M(Mean) = ";
    cin >> m;
    cout << "S(standard deviations) = ";
    cin >> s;
    
    z = (x - m) / s;
    cout << "Z-Score is: " << z << endl;
}
/*
 z = (x - mean)/ SD
 
int main() {
    autoRead(1);
    return 0;
}


void chineseSystem(int n) {
    int a;
    
    cout << "请选择模式：" << endl;
    cout << "1. 计算" << endl;
    cout << "2. 计算" << endl;
    cout << "3. 语言设置" << endl;
    cout << "（ ";
    cin >> a;
    switch (a) {
        case 1:
            cout << "CA" << endl;
            chineseSystem(1);
            break;
        case 2:
            cout << "CA2" << endl;
            chineseSystem(1);
            break;
        case 3:
            cout << "正在前往" << endl;
            autoSave(1);
            break;
        default:
            cout << "无效答案" << endl;
            chineseSystem(1);
            break;
    }
}

void englishSystem(int n) {
    int a;
    
    cout << "Choose mode：" << endl;
    cout << "1. CAL" << endl;
    cout << "2. CAL" << endl;
    cout << "3. Language Setting" << endl;
    cout << "（ ";
    cin >> a;
    switch (a) {
        case 1:
            cout << "CA" << endl;
            englishSystem(1);
            break;
        case 2:
            cout << "CA2" << endl;
            englishSystem(1);
            break;
        case 3:
            cout << "Going Now" << endl;
            autoSave(1);
            break;
        default:
            cout << "Error" << endl;
            englishSystem(1);
            break;
    }
}
 
 f(x) = x;b
 f'(x) = b*(x);(b-1)
 
 f(x) a
 f'(x) c
 x
 c
 pow(a, b)
 
 
 
 */
