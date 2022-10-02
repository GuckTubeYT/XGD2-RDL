#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;

string inputText;
string savedPatchISO;
string consoleOut = "[+] Processing Sector: 0 / 4171712";
bool usingPatch = false;
char zero[2048] = { 0 };
unsigned long long int currentMemPos = 0;

int main() {
    cout << "[?] Please enter name ISO you want to patch it: ";
    getline(cin, inputText);
    ifstream ifs(inputText, ios::binary | ios::ate);
    if (!ifs) {
        cout << "[-] File not found! Quitting...\n";
        return 0;
    }
    cout << "[?] Please enter name modify ISO: ";
    cin >> savedPatchISO;

    ofstream ofs(savedPatchISO, ios::binary);

    cout << "\n";

    for (int sectorCurrent = 0; sectorCurrent < 4171712; sectorCurrent++) {
        cout << consoleOut;
        cout << string(consoleOut.length(),'\b');

        if (sectorCurrent == 1913760) usingPatch = true;
        if (sectorCurrent == 2272032) usingPatch = false;
        if (usingPatch) ofs.write(zero, 2048);
        else {
            char* bytesData = new char[2048];
            ifs.seekg(currentMemPos, ios::beg);
            ifs.read(bytesData, 2048);
            ofs.write(bytesData, 2048);
            currentMemPos += 2048;
            delete[] bytesData;
        }

        consoleOut = "[+] Processing Sector: " + to_string(sectorCurrent) + " / 4171712";
    }

    ifs.close();
    ofs.close();
    cout << "\n[+] ISO has been modified! Name ISO: " << savedPatchISO << "\n";
    system("pause > nul");
    return 0;
}
