#include <clocale>
#include <math.h>
#include <io.h>
#include <fcntl.h>
#include <algorithm>
#include <iterator>
#include <list>
#include <iomanip>
#include <ctime>

using namespace std;
int warikiC = 0;
void warikipermutations(string stringa, int begin, int end) {
    if (begin == end) {
        for (int k = 0; k < stringa.length(); k++) {
            if (stringa[k] - '0' == k) {
                warikiC++;
                break;
            }
        }
    }
    else {
        for (int i = begin; i < end; i++) {
            swap(stringa[begin], stringa[i]);
            warikipermutations(stringa, begin + 1, end);
            swap(stringa[begin], stringa[i]);
        }
    }
}
double area(int n, double a) {
    return 0.25 * n * pow(a, 2) * atan(180 / n);
}
void ShellSort(int* a, int n) {
    int d = 1, i, j, f, temp;
    while (d < n) {
        d = 3 * d + 1;
    }
    for (i = (d - 1) / 3; i > 0; i = (i - 1) / 3) {
        for (j = i; j < n; j += 1) {
            temp = a[j];
            for (f = j; f >= i && a[f - i] > temp; f -= i) {
                a[f] = a[f - i];
            }
            a[f] = temp;
        }
    }
}
void bubbleSort(double stringa[], int beg, int kon) {
    int temp = 0;
    bool flag;
    for (int i = beg; i < kon - 1; i++) {
        flag = false;
        for (int j = beg; j < kon - i - 1; j++) {
            if (stringa[j] > stringa[j + 1])
            {
                swap(stringa[j], stringa[j + 1]);
                flag = true;
            }
        }
        if (flag == false) break;
    }
}
auto sumMatrix(int s, double matrix[], ...) {
    double* mr = new double[s];
    for (int i = 0; i < s; i++) {
        mr[i] = 0;
    }
    for (double* n = matrix; *n != '\0'; n++) {
        for (int i = 0; i < s; i++) {
            mr[i] += n[i];
        }
    }
    return mr;
}
double sumElementsMatrix(int s, double matrix[], ...) {
    double sum = 0;
    for (double* n = matrix; *n != '\0'; n++) {
        for (int i = 0; i < s; i++) {
            sum += n[i];
        }
    }
    return sum;
}
auto multiply2Matrix(double m1[], double m2[], int s) {
    double* m3 = new double[s];
    for (int i = 0; i < s; i++) {
        m3[i] = m1[i] * m2[i];
    }
    return m3;
}
auto sum2Matrix(double m1[], double m2[], int s) {
    double* m3 = new double[s];
    for (int i = 0; i < s; i++) {
        m3[i] = m1[i] + m2[i];
    }
    return m3;
}
auto sumElements2Matrix(double m1[], double m2[], int s) {
    double sum = 0;
    for (int i = 0; i < s; i++) {
        sum += m1[i] * m2[i];
    }
    return sum;
}
int sign(double num) {
    if (num > 0)
    {
        return 1;
    }
    if (num == 0)
    {
        return 0;
    }
    if (num < 0)
    {
        return -1;
    }
}
void requestVars() {
    cout << "\nEnter values: ";
}
string charNaInt(char s, int k) {
    string line = "";
    for (int i = 0; i < k; i++) {
        line += s;
    }
    return line;
}
int si = 0;
float randpseudo() {
    si = (25173 * si + 13849) % 65537;
    return si;
}
int fact(int i) {
    if (i == 1) {
        return 1;
    }
    else return i * fact(i - 1);
}
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int findInArr(double* mas, double val, int beg, int kon) {
    for (int i = beg; i <= kon; i++) {
        if (mas[i] == val) return i;
    }
    return -1;
}
auto maxInArr(double* mas, double beg, int kon) {
    int max = -2147483646;
    for (int i = beg; i < kon; i++) {
        if (mas[i] > max) max = mas[i];
    }
    return max;
}
auto minInArr(double* mas, double beg, int kon) {
    int min = 2147483646;
    for (int i = beg; i < kon; i++) {
        if (mas[i] < min) min = mas[i];
    }
    return min;
}

void TaskSelect(int Task) {
    int SubTask;
    switch (Task) {
    case 1: {
        printf("\n1.1 Task:  Name\n");
        printf("1.2 Task:  Arithmetic\n");
        printf("1.3 Task:  Equation\n");
        printf("1.4 Task:  Another equation\n");
        printf("1.5 Task:  A lamp with a curtain\n");
        printf("\n");
        cout << "\nEnter subtask number: ";
        cin >> SubTask;
        switch (SubTask) {
        case 1: puts("\nStrizhevskiy Philipp Alexandrovich RKBO-01-21\n"); break;
        case 2: {
            double a, b; cin >> a; cin >> b;
            cout << "a + b =  " << a + b << " a - b = " << a - b << " a * b = " << a * b << " a / b = " << (int)a / b << endl;
            break;
        }
        case 3: {
            printf("bx + c = 0; b,c - ? ");
            double b, c; cin >> b; cin >> c;
            cout << "x = " << -c / b << endl;
            break;
        }
        case 4: {
            printf("ax^2 + bx + c = 0;\na,b,c - ? ");
            double a1, b1, c1; cin >> a1; cin >> b1; cin >> c1;
            if (pow(b1, 2) - 4 * a1 * c1 >= 0) {
                cout << "\nx1 = " << (-b1 / 2 * a1) + pow(pow(b1, 2) - 4 * a1 * c1, 0.5) / 2 * a1 << " x2 = " << (-b1 / 2 * a1) - pow(pow(b1, 2) - 4 * a1 * c1, 0.5) / 2 * a1 << endl;
            }
            else {
                cout << "\nx1 = " << (-b1 / 2 * a1) << "+i*" << pow(fabs(pow(b1, 2) - 4 * a1 * c1), 0.5) / 2 * a1 << " x2 = " << (-b1 / 2 * a1) << "-i*" << pow(fabs(pow(b1, 2) - 4 * a1 * c1), 0.5) / 2 * a1 << endl;
            }
            break;
        }
        case 5: {
            printf("Bools: Denb, Wtorbl, Lamp");
            bool den, wtr, lmp; cin >> den; cin >> wtr; cin >> lmp;
            if (den && wtr || lmp) {
                printf("\nBright\n");
            }
            else {
                printf("\nDark\n");
            }
            break;
        }
        default: cout << "\nExiting subtask\n";
        }
        break;
    }
    case 2: {
        printf("\n2.1 Task: Cone\n");
        printf("2.2 Task: Branching\n");
        printf("2.3 Task: Function\n");
        printf("2.4 Task: Order\n");
        printf("2.5 Task: Tabulation\n");
        printf("\n");
        cout << "\nEnter subtask number: ";
        cin >> SubTask;
        switch (SubTask) {
        case 1: {
            printf("Vars: r1, r2, h, l\n");
            double r1, r2, h, l;
            cin >> r1 >> r2 >> h;
            l = pow(pow(h, 2) + pow((r1 - r2), 2), (0.5));
            if (r1 >= 0 && r2 >= 0 && h >= 0) {
                cout << "V = " << ((double)(M_PI * h) * (pow(r1, 2) + r1 * r2 + pow(r2, 2))) / 3 << endl;
                cout << "S = " << M_PI * (pow(r1, 2) + (r1 + r2) * l + pow(r2, 2)) << endl;
            }
            else cout << "Wrong values\n";
            break;
        }
        case 2: {
            printf("Vars: x, a");
            double x, a;
            cout << "\nx = "; cin >> x; cout << "a = "; cin >> a;
            if (x != 0) {
                if (fabs(x) < 1) {
                    cout << "\nw = " << a * log(fabs(x)) << endl;
                }
                else if (a - pow(x, 2) >= 0) {
                    cout << "\nw = " << (pow((a - pow(x, 2)), (0.5))) << endl;
                }
                else cout << "Wrong values\n";
            }
            else cout << "Wrong values\n";
            break;
        }
        case 3: {
            printf("Vars: x, y, b");
            double x, y, b;
            cout << "\nx = "; cin >> x; cout << "y = "; cin >> y; cout << "b = ", cin >> b;
            if (b - y > 0 && b - x >= 0) {
                cout << log(b - y) * pow(b - x, (0.5)) << endl;
            }
            else cout << "Wrong values\n";
            break;
        }
        case 4: {
            double N; cout << "N = ";
            cin >> N;
            if (N > 0) {
                for (int m = int(N); m < int(N) + 10; m++) {
                    cout << m << " ";
                }
            }
            cout << "\n";
            break;
        }
        case 5: {
            for (double k = -4; k <= 4; k += 0.5) {
                if (k == 1) {
                    cout << "0: Undefined" << " \n\n";

                }
                cout << k << ": " << (k * k - 2 * k + 2) / (k - 1) << " \n\n";
            }
            break;
        }
        default: cout << "\nExiting subtask\n";
        }
        break;
    }
    case 3: {
        printf("\n3.1 Task: Loan v1\n");
        printf("3.2 Task: Loan v2\n");
        printf("3.3 Task: Copying file\n");
        printf("3.4 Task: Filter\n");
        printf("3.5 Task: Letter sorting\n");
        printf("\n");
        cout << "\nEnter subtask number: ";
        cin >> SubTask;
        switch (SubTask) {
        case 1: {
            double s, p, n, r, m;
            printf("Vars: s, p, n\n");
            cin >> s >> p >> n;
            if (s >= 0 && n >= 0) {
                r = p / 100; m = (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
                cout << "m = " << m << "\n";
            }
            else cout << "Wrong values \n";
            break;
        }
        case 2: {
            double s, p, n, r, m, f;
            printf("Vars: s, n, m\n");
            cin >> s >> n >> m;
            double delt = 50;
            p = 0.0000001;
            if (s >= 0 && n >= 0) {
                do {
                    r = p / 100;
                    f = (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
                    //    cout << f << " " << p << " " << delt << endl;
                    if (f > m) { p -= delt; delt /= 2; p += delt; }
                    else { p += delt; }
                } while (delt >= 0.0000001);
                cout << fixed << setprecision(7) << "p = " << p << "%";
            }
            else cout << "Wrong values \n";
            break;
        }
        case 3: {
            string line = "";
            ofstream file33i("zxcqwe.txt");
            requestVars();
            cin.ignore();
            getline(cin, line);
            file33i << line;
            file33i.close();
            ifstream file33("zxcqwe.txt");
            while (getline(file33, line)) {
                cout << line << endl;
            }
            file33.close();
            break;
        }
        case 4: {
            requestVars(); cout << endl;
            bool num = true;
            ofstream file34i("zxcqwe.txt", ios::in);
            cin.ignore();
            string inpline = "";
            getline(cin, inpline);
            file34i << inpline;
            file34i.close();
            string line;
            ifstream file34("zxcqwe.txt");
            while (getline(file34, line)) {
                for (char s : line) {
                    if (isdigit(s)) {
                        if (!num) cout << " ";
                        cout << s;
                        num = true;
                    }
                    else {
                        num = false;
                    }
                }
                cout << "\n";
            }
            file34.close();
            break;
        }
        case 5: {
            requestVars();
            cout << endl;
            string line;
            cin.ignore();
            getline(cin, line);
            int alphabet[52];
            double* stringa = new double[line.length()];
            int c = 0;
            int i = 65;
            while (c != 52) {
                alphabet[c] = i;
                alphabet[c + 1] = (i + 32);
                i++; c += 2;
            }
            cout << endl;
            int c1 = 0;
            for (char s : line) {
                for (int i = 0; i < 52; i++) {
                    if (alphabet[i] == int(s)) {
                        stringa[c1] = i;
                        c1++;
                    }
                }
            }
            bubbleSort(stringa, 0, line.length());
            for (int i = 0; i < line.length(); i++) {
                cout << char(alphabet[int(stringa[i])]);
            }
            cout << endl;
            break;
        }
        default: cout << "\nExiting subtask\n";
        }
        break;
    }
    case 4: {
        printf("\n4.1 Task: File\n");
        printf("4.2 Task: Numbers sign\n");
        printf("4.3 Task: Geometrical figures\n");
        printf("4.4 Task: Old fame\n");
        printf("4.5 Task: Sinusoid\n");
        printf("4.6 Task: Automatic recognizer\n");
        printf("4.7 Task: Random Number Generator\n");
        printf("4.8 Task: Matrix multiplication\n");
        printf("4.9 Task: Number systems\n");
        printf("\n");
        cout << "\nEnter subtask number: ";
        cin >> SubTask;
        switch (SubTask) {
        case 1: {
            requestVars();
            ofstream file41o("zxcqwe.txt");
            file41o.clear();
            string s = "";
            cin.ignore();
            cout << " (use \'.\' as decimal separator and enter \"00\" to calculate a sum)\n";
            while (s != "00") {
                cin >> s;
                file41o << stod(s) << endl;
            }
            file41o.close();
            ifstream file41i("zxcqwe.txt");
            string line;
            double sum = 0.0;
            while (getline(file41i, line)) {
                sum += stod(line) + 0.0;
            }
            cout << endl << sum << endl;
            break;
        }
        case 2: {
            requestVars();
            double num;
            cin >> num;
            switch (sign(num)) {
            case 1: cout << "\nPositive\n"; break;
            case 0: cout << "\nZero\n"; break;
            case -1: cout << "\nNegative\n"; break;
            }
            break;
        }
        case 3: {
            requestVars(); cout << " (angles and length of side of regular geometric shapes, n = 0 for circle (a = r))\n";
            double a;
            int n;
            cout << "\nn = ";
            cin >> n;
            cout << "a = ";
            cin >> a;
            switch (n) {
            case 0: {
                cout << "\nS = " << M_PI * a * a << endl;
                break;
            }
            default: {
                cout << "\nS = " << area(n, a) << endl;
            }
            }
            break;
        }
        case 4: {
            int c = 0;
            while (c != 3) {
                cout << "\n* * * * * * * * " << charNaInt('-', 19);
                cout << "\n * * * * * * * * " << charNaInt('-', 18);
                c++;
            }
            cout << "\n";
            for (int i = 0; i < 5; i++) {
                cout << charNaInt('-', 35) << endl;
            }
            break;
        }
        case 5: {
            cout << "\nEnter desired thickness of sinusoid [0(slim) - 64(thicc)]: ";
            int thickness;
            cin >> thickness;
            if (thickness < 0) { cout << "\nEnter positive thickness\n"; break; }
            else {
                cout << "\n";
                wstring bullet = L"???";
                char gradient[] = "`^,:;Il!i~+_-?][}{1)(tfjrxnuvczXYUJCLQ0OZmwqpdbkhao*#MW&8%B@$";
                for (double y = 1 + double(thickness + 1) / 100; y >= -1 - double(thickness + 1) / 100; y -= M_PI / 100) {
                    for (double x = -M_PI * M_PI; x <= M_PI * M_PI; x += M_PI / 100) {
                        if (fabs(round(1000 * sin(x)) / 1000 - (y)) < double(thickness + 1) / 100) {
                            int ind = floor(fabs(round(1000 * sin(x)) / 1000 - (y)) * 100);
                            cout << gradient[abs(60 - ind)];
                        }
                        else cout << ' ';
                    }
                    cout << endl;
                }
            }
            break;
        }
        case 6: {
            char letters[8] = "IVXLCDM";
            int cost[7] = { 1,5,10,50,100,500,1000 };
            cout << endl;
            for (int i = 0; i < 7; i++) {
                cout << i << " " << letters[i] << " " << cost[i] << endl;
            }
            requestVars(); /*MDCLXVI*/
            cin.ignore();
            string line;
            getline(cin, line);
            int temp = 8;
            int ind = 0;
            int sum = 0;
            for (char s : line) {
                for (int i = 0; i < 7; i++) {
                    if (letters[i] == s) {
                        ind = i;
                    }
                }
                if (temp >= ind) {
                    sum += cost[ind];
                }
                else if (temp == 0 || temp == 2 || temp == 4 || temp == 6) {
                    sum = sum - 2 * cost[temp] + cost[ind];
                }
                else cout << "\nWrong values\n";
                temp = ind;
            }
            cout << "\nSum = " << sum << endl;
            break;
        }
        case 7: {
            cout << "\n" << randpseudo() << "\n";
            break;
        }
        case 8: {
            double ammount[3][4] = { { 5,2,0,10 }, { 3,5,2,5 }, { 20,0,0,0 } };
            double price[4] = { 1.20,2.80,5.00,2.00 };
            double komm[4] = { 0.50,0.40,1.00,5.00 };
            double sellerWage[3] = { 0,0,0 };
            double shopWage[3] = { 0,0,0 };
            double spent[3] = { 0,0,0 };
            for (int p = 0; p < 3; p++) {
                for (int t = 0; t < 4; t++) {
                    sellerWage[p] += komm[t] * ammount[p][t];
                    shopWage[p] += price[t] * ammount[p][t];
                    spent[p] += sellerWage[p] + shopWage[p];
                }
            }
            cout << "1) Max spent = " << maxInArr(spent, 0, 3) << " : " << findInArr(spent, maxInArr(spent, 0, 3), 0, 3) << ", Min = " << minInArr(spent, 0, 3) << " : " << findInArr(spent, minInArr(spent, 0, 3), 0, 3) << endl;
            cout << "\n2) Max sellerWage = " << maxInArr(sellerWage, 0, 3) << " : " << findInArr(sellerWage, maxInArr(sellerWage, 0, 3), 0, 3) << ", Min = " << minInArr(sellerWage, 0, 3) << " : " << findInArr(sellerWage, minInArr(sellerWage, 0, 3), 0, 3) << endl;
            cout << "\n3) Max shopWage = " << maxInArr(shopWage, 0, 3) << " : " << findInArr(shopWage, maxInArr(shopWage, 0, 3), 0, 3) << ", Min = " << minInArr(shopWage, 0, 3) << " : " << findInArr(shopWage, minInArr(shopWage, 0, 3), 0, 3) << endl;
            cout << "\n4) Sum of kommisions = " << sumElementsMatrix(3, sellerWage) << endl;
            cout << "\n5) Sum spent = " << sumElementsMatrix(3, spent) << endl;
            break;
        }
        case 9: {
            requestVars(); cout << " (Number, its system and desired system)\n";
            char nums[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
            string startnumber = "";
            int sys1, sys2;
            cin >> startnumber >> sys1 >> sys2;
            int length = startnumber.length();
            int c = 0;
            double number = 0;
            bool flag1 = true;
            int ind = 0;
            for (char s : startnumber) {
                if (s == '.') { bool flag1 = false; break; }
                else c++;
            }
            if (flag1) {
                c = 0;
            }
            for (char s : startnumber) {
                for (int i = 0; i < 36; i++) {
                    if (nums[i] == s) {
                        ind = i;
                    }
                }
                cout << "\n ind = " << ind << endl;
                if (ind > sys1) cout << "\nWrong number/system\n";
                else {
                    number += (ind)*pow(sys1, length - c - 1);
                }
                c++;
            }
            string numberstring = "";
            while (number >= sys2) {
                numberstring += nums[int(number) % sys2];
                number = int(number) / sys2;
            }
            numberstring += nums[int(number)];
            reverse(numberstring.begin(), numberstring.end());
            cout << endl << numberstring << endl;
            break;
        }
        default: cout << "\nExiting subtask\n"; break;
        }
        break;
    }
    case 5: {
        printf("\n5.1 Task: Euclid algorythm\n");
        printf("5.2 Task: Erathosphens sieve\n");
        printf("5.3 Task: Text file processing\n");
        printf("5.4 Task: Rows\n");
        printf("5.5 Task: Files\n");
        printf("\n");
        cout << "\nEnter subtask number: ";
        cin >> SubTask;
        switch (SubTask) {
        case 1:
        case 2: {
            requestVars();
            break;
        }
        case 3:
        case 4:
        case 5:
        default: cout << "\nExiting subtask\n"; break;
        }
        break;
    }
    case 6: {
        int k = 0;
        requestVars();
        cin >> k;
        for (int n = 1; n <= k; n++) {
            double t = clock();
            string nums = "";
            for (int i = 0; i < n; i++) {
                nums += i + '0';
            }
            warikiC = 0;
            warikipermutations(nums, 0, nums.length());
            cout << endl << n << setw(10) << warikiC << setw(10) << clock() - t << endl;
        }
        break;
    }
    case 7: {
        int A, B, C, c = 0;
        requestVars();
        cout << " (A, B, C)\n";
        cin >> A >> B >> C;
        while ((C - A - B * c) > B) {
            c++;
        }
        cout << c;
        break;
    }
    case 8: {
        int M, a, b, ost = 0;
        requestVars();
        cout << " M\n";
        cin >> M;
        ost = M % 3;
        a = M / 3 - ost;
        b = ost;
        if (M != 1) cout << a << " " << b;
        else cout << "\n00\n";
        break;
    }
    case 9: {
        requestVars();
        cout << " (dimensions)\n";
        int a, b, mx, mn, sum = 0;
        cin >> a >> b;
        mx = max(a, b);
        mn = min(a, b);
        for (int i = 1; i < mn; i++) {
            for (int m = mn - i; m < mx; m++) {
                sum += 1;
            }
        }

        cout << sum;
        break;
    }
    case 10: {
        requestVars();
        cout << "(N - number of empty seats and K - seats number(K = '-1' for rand)\n";
        int N,K;
        cin >> N >> K;
        int maxc = 0;
        double* seats = new double[N];
        seats[N] = { -1 };
        int vags[9] = { 0 };
        int n, k = 0;
        int c = 0;
        int rc = 0;
        int s = 0;
        if (K == -1) {
            while (findInArr(seats, -1, 0, N) != -1) {
                double r = rand() % 54;
                if (findInArr(seats, r, 0, N) == -1) {
                    seats[rc] = r;
                    rc++;
                }
            }
        }
        if(K != -1){
            requestVars();
            for (int i = 0; i < N; i++) {
                cin >> s;
                seats[i] = s;
            }
        }
        bubbleSort(seats, 0, N);
        // cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        for (int i = 0; i < N; i++) {
            if (int(seats[i]) % 4 == 1) {
                k = seats[i] / 4;
                /* cout << "k = " << k << endl;
                cout << seats[ i ] << " " << (seats[ i ] == seats[i+1]-1) << "\n";
                cout << seats[i+1] << " " << (seats[i+1] == seats[i+2]-1) << "\n";
                cout << seats[i+2] << " " << (seats[i+2] == seats[i+3]-1) << "\n";
                cout << seats[i+3] << " " << (seats[i] == seats[i+3]-3) << "\n";
                cout << findInArr(seats,54-k*2-1,0,N) << " " << (findInArr(seats,54-k*2-1,0,N) != 0 )<<  "\n";
                cout << "54-k*2-1 = " << 54-k*2-1 << endl;
                cout << findInArr(seats,54-k*2,0,N) << " " << (findInArr(seats,54-k*2,0,N) != 0) << "\n";
                cout << "54-k*2 = " << 54-k*2 << endl;
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";*/
                if (
                    seats[i] == seats[i + 1] - 1 &&
                    seats[i + 1] == seats[i + 2] - 1 &&
                    seats[i + 2] == seats[i + 3] - 1 &&
                    findInArr(seats, 54 - k * 2 - 1, 0, N) != -1 &&
                    findInArr(seats, 54 - k * 2, 0, N) != -1
                    )
                {
                    vags[k] = k;
                }
            }
        }
        for (int i = 1; i < 9; i++) {
            if (vags[i - 1] + 1 == vags[i]) {
                c++;
            }
            else {
                if (c > maxc) maxc = c;
            }
        }
        cout << "N of empty cargos in a row: " << maxc;
        if (maxc) {
            cout << "\nEmpty cargo seats:";
            for (int i = 0; i < 9; i++) {
                if (vags[i] != 0) {
                    for (int m = 0; m < 4; m++) {
                        cout << " " << vags[i] * 4 + 1 + m;
                    }
                    for (int m = 2; m >= 1; m--) {
                        cout << " " << 55 - vags[i] * 2 - m;
                    }
                }
            }
        }
        break;
    }
    case 11: {
        requestVars();
        cout << " (N - number of seats)\n";
        int c = 0;
        int N, K;
        cin >> N;
        double t = clock();
        for (int K1 = 1; K1 <= N; K1++) {
            K = K1;
            int beg = 0;
            bool da = true;
            int kon = N;
            string seats = charNaInt('0', N);
            double* space = new double[N];
            for (int i = 0; i < N; i++) {
                space[i] = N - i;
            }
            int seat = 0;
            while (K > 0) {
                beg = findInArr(space, maxInArr(space, 0, N), 0, N);
                kon = beg + space[beg];
                seat = beg + space[beg] / 2;
                for (int i = 0; i < N; i++) {
                    space[i] = 0;
                }
                seats[seat] = '1';
                for (int m = 0; m < N; m++) {
                    if (seats[m] == '1') {
                        space[m - c] = c;
                        c = 0;
                    }
                    else {
                        c++;
                    }
                }
                space[N - c] = c;
                c = 0;
                if (K == 1) {
                    cout << "\n" << K1 << ": " << min(abs(seat - beg), abs(kon - seat - 1)) << ", " << max(abs(seat - beg), abs(kon - seat - 1));
                }
                K--;
            }
            c = 0;
            cout << " (" << seats + ")\n\n" << clock() - t << endl;
        }
        break;
    }
    case 0: {
        requestVars();
        cin >> SubTask;
        switch (SubTask) {
        case 1: {
            cout << "\nPolyndra\n";
            requestVars();
            int n;
            int ed = 1;
            cin >> n;
            for (int i = 1; i <= n; i++) {
                cout << fixed << charNaInt(' ', n - i / 2) << (INT64)ceil(pow(11, i - 1)) << "\n";
            }
            break;
        }
        case 2: {
            requestVars();
            cout << "(width, length)\n";
            int w, l = 1;
            cin >> w >> l;
            cout << "   ";
            for (int i = 11; i > 0; i--) {
                cout << setw(5) << -float(i) / 10;
            }
            cout << " 0";
            for (int i = 1; i < 11; i++) {
                cout << "" << setw(5) << float(i) / 10;
            }
            cout << endl;
            for (int i = 0; i < l; i++) {
                double x = float(i) / 5 * M_PI_2;
                if (sin(x) >= 0) {
                    cout << setw(3) << i << charNaInt(' ', 56) << charNaInt(' ', round(abs(9. / 4 * w * sin(x)))) << "*\n";
                }
                else {
                    cout << setw(3) << i << charNaInt(' ', 56 - round(abs(9. / 4 * w * sin(x)))) << "*" << "\n";
                }
            }
            break;
        }
        case 3: {
            cin.ignore();
            string line = "";
            getline(cin, line);
            cout << endl;
            int* stringa = new int[line.length()];
            int c = 0;
            for (char s : line) {
                for (int i = 0; i < 52; i++) {
                    stringa[c] = (int(s));
                    c++;
                }
            }
            cout << endl;
            for (int i = 0; i < sizeof(stringa); i++) {
                cout << stringa[i];
            }
            break;
        }
        case 4: {
            string a = "zxcqwe1";
            int c = 0;
            bool flag = false;
            vector <string> bilo;
            for (int i = 0; i < fact(a.length()); i++) {
                flag = false;
                swap(a[int(i) % a.length()], a[int(i + 1) % a.length()]);
                bilo.push_back(a);
                for (int i = 0; i < bilo.size(); i++) {
                    if (bilo[i] == a) {
                        flag = true;
                    }
                }
                if (flag) {}
                else {
                    cout << a << endl;
                    c++;
                }
            }
            cout << fact(a.length()) << " " << c << endl;
            break;
        }
        case 5: {
            /*string a = "1234";
            cout << endl;
            permutations(a, 0, a.length());
            for (int i = 0; i < fact(a.length()); i++) {
                cout << endl;
            }
            break;*/
        }
        case 6: {
            string zxc = "";
            cin >> zxc;
            double* zxcn = new double[zxc.length()];
            for (int i = 0; i < zxc.length(); i++) {
                zxcn[i] = zxc[i] - '0';
            }
            bubbleSort(zxcn, 0, zxc.length());
            cout << zxcn;
            break;
        }
        case 7: {/*
            int i = 0;
            int size_array = 30;
            char* ABC = new char[size_array];
            int arr[size_array];
            char* abc = new char[size_array];
            for (i = 0; i < size_array; i++) {
                cout << "[" << i + 1 << "]" << ":";
                cin >> ABC[i]; //???????? ????????
            }
            cout << "???????? ????????????: ";
            for (int i = 0; i < size_array; ++i) {
                cout << ABC[i] << " ";//?????????? ?????????????????????????? ??????????????
            }
            cout << endl;
            for (i = 0; i < size_array; i++) {
                arr[i] = ABC[i]; // ???????????????? ?????????????? arr ???? ?????????????? ABC (?? ?????????????? arr ?????????????????? ?????????? ASC2 ??????????????)
            }
            bubbleSort(arr, 0, size_array);
            printf("???????????? ???? ?????????????????????????????? asc2 ??????????: ");
            for (int counter = 0; counter < size_array; counter++) {
                cout << arr[counter] << "  "; // ???????????? ???????????????????????????????? ??????????????
            }
            cout << "\n";
            for (int i = 0; i < size_array; i++) {
                abc[i] = arr[i];
            }
            printf("?????????????????????????????? ??????????????: ");
            for (int i = 0; i < size_array; i++) {
                cout << abc[i] << " ";
            }*/
            break;
        }
        case 8: {
            cout << endl << 1. / cos(M_PI_2) << endl;
            break;
        }
        case 9: {
            int n = 0;
            cin >> n;
            int* zxc = new int[n];
            // for(int i = 0; i < n; i++){
            //     zxc[i] = rand() % 100000;
            //     cout  << setw(6) << zxc[i];
            // }
            double t = clock();
            ShellSort(zxc, n);
            cout << endl << clock() - t << endl;
            // for(int i = 0; i < n; i++){
            // cout << setw(6) << zxc[i];
            // }
            // cout << endl;
            break;
        }
        case 10: {
            int n = 0;
            cin >> n;
            double* zxc = new double[n];
            // for(int i = 0; i < n; i++){
            //     zxc[i] = rand() % 100000;
            //     cout << setw(6) << zxc[i];
            // }
            double t = clock();
            bubbleSort(zxc, 0, n);
            cout << endl << clock() - t << endl;
            cout << endl;
            // for(int i = 0; i < n; i++){
            // cout << setw(6) << zxc[i];
            // }
            cout << endl;
            break;
        }
        default: cout << "\nExiting subtask\n"; break;
        }
    default: cout << "\nWrong task number\n"; break;
    }
          break;
    }
}

int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    system("chcp 65001 > nul");
    printf("\n");
    printf("Task 1\n");
    printf("\n");
    printf("Task 2\n");
    printf("\n");
    printf("Task 3\n");
    printf("\n");
    printf("Task 4\n");
    printf("\n");
    printf("Task 5\n");
    printf("\n");
    printf("Task 6:  Wapuku\n");
    printf("\n");
    printf("Task 7:  Spinners\n");
    printf("\n");
    printf("Task 8:  Spinners again\n");
    printf("\n");
    printf("Task 9:  Not the spinners\n");
    printf("\n");
    printf("Task 10: Carriage with numbered reserved seats\n");
    printf("\n");
    printf("Task 11: Cinema\n");
    while (true) {
        int Task;
        cout << "\nEnter Task number: ";
        cin >> Task;
        TaskSelect(Task);
    }
}
