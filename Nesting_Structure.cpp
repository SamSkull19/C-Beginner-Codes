#include<bits/stdc++.h>
using namespace std;

struct graphics{    // Nested From This Structure
    string gpu_name;
    string gpu_chip;
};

struct computer{      // Structure Definition
    string processor;
    int ram_size;
    string hdd_size;
    graphics gpu; //Nesting
    double psu;
};

int main()
{
    computer pc;

    pc.processor = "Interl";
    pc.ram_size = 16;
    pc.hdd_size = "1 TB";
    pc.gpu.gpu_name = "Zotac";
    pc.gpu.gpu_chip = "Nvidia";
    pc.psu = 650;

    cout << "Processor: " << pc.processor << endl;
    cout << "Ram: " << pc.ram_size << endl;
    cout << "HDD: " << pc.hdd_size << endl;
    cout << "GPU Name: " << pc.gpu.gpu_name << endl;
    cout << "GPU Chipset: " << pc.gpu.gpu_chip << endl;
    cout << "Power Supply: " << pc.psu << endl;

    return 0;
}