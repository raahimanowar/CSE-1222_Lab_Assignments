#include <bits/stdc++.h>
using namespace std;

class Flower {
private:
    string soil;
    
protected:
    string season;
    
public:
    string name;
};

class Rose : public Flower {
public:
    void showInfo() {
        season = "Spring";
        cout << "Name: " << name << endl;
        cout << "Season: " << season << endl;
    }
};

class Color {
public:
    string color;
    
    void showColor() {
        cout << "Color: " << color << endl;
    }
};

class Tulip : public Flower, public Color {
public:
    void showInfo() {
        cout << "I am a " << color << " " << name << endl;
    }
};

class Daisy : public Flower {
public:
    void showInfo() {
        cout << "I am a small " << name << endl;
    }
};

class Sunflower : public Flower {
public:
    void showInfo() {
        cout << "I am a big " << name << endl;
    }
};

int main() { 
    cout << "1. SINGLE INHERITANCE:" << endl;
    Rose rose;
    rose.name = "Rose";
    rose.showInfo();
    
    cout << "2. MULTIPLE INHERITANCE:" << endl;
    Tulip tulip;
    tulip.name = "Tulip";
    tulip.color = "Yellow";
    tulip.showInfo();
    tulip.showColor();
    
    cout << "3. HIERARCHICAL INHERITANCE:" << endl;
    Daisy daisy;
    daisy.name = "Daisy";
    daisy.showInfo();
    
    Sunflower sun;
    sun.name = "Sunflower";
    sun.showInfo();
    
    return 0;
}