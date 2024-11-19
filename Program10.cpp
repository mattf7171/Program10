#include <iostream>
using namespace std;

int main() {
    int relation[100][2];
    int domain[100], range[100];
    int relationCount = 0, domainCount = 0, rangeCount = 0;
    int x, y;
    char choice;

    cout << "Enter ordered pairs (integers). Type 'n' to stop input.\n";

    while (true) {
        cout << "Enter x: ";
        cin >> x;
        cout << "Enter y: ";
        cin >> y;

        relation[relationCount][0] = x;
        relation[relationCount][1] = y;
        relationCount++;

        domain[domainCount++] = x;
        range[rangeCount++] = y;

        cout << "Add another pair? (y/n): ";
        cin >> choice;
        if (choice == 'n' || choice == 'N') break;
    }

    cout << "Relation = {";
    for (int i = 0; i < relationCount; i++) {
        cout << "(" << relation[i][0] << "," << relation[i][1] << ")";
        if (i != relationCount - 1) cout << ", ";
    }
    cout << "}\n";

    cout << "Domain = {";
    for (int i = 0; i < domainCount; i++) {
        cout << domain[i];
        if (i != domainCount - 1) cout << ", ";
    }
    cout << "}\n";

    cout << "Range = {";
    for (int i = 0; i < rangeCount; i++) {
        cout << range[i];
        if (i != rangeCount - 1) cout << ", ";
    }
    cout << "}\n";

    return 0;
}
