//
//  objects.h
//  hw6
//
//  Created by Alvin J on 2/11/21.
//

#ifndef objects_h
#define objects_h
using namespace std;

class keyboard{
private:
    int price;          // us dollars
    string k_brand;     // ducky, anne pro, logitech, corsair, hyperx
public:
    keyboard(){};   // empty constructor
    
    keyboard(int price, string k_brand){
        this->price = price;
        this->k_brand = k_brand;
    }
    int getPrice(){
        return this->price;
    }
    string getKeyboardBrand(){
        return this->k_brand;
    }
    
    // "==" operator
    bool operator== (const keyboard& k){
        return (price == k.price);
    }
    
    // "<" operator
    bool operator < (const keyboard& k){
        return (price < k.price);
    }
    
    // "<<" operator
    friend ostream &operator<<(ostream &output, const keyboard& k){
        output << "price: $" << k.price << "\nkeyboard brand: " << k.k_brand << endl;
        return output;
    }
};

class mouse{
private:
    int weight;         // in grams
    string m_brand;   // ex: endgame, logitech, finalmouse, razer, glorious
public:
    mouse(){};  // empty constructor
    
    mouse(int weight, string m_brand){
        this->weight = weight;
        this->m_brand = m_brand;
    }
    int getWeight(){
        return this->weight;
    }
    string getMouseBrand(){
        return this->m_brand;
    }
    // "==" operator
    bool operator== (const mouse& m){
        return (weight = m.weight);
    }
    
    // "<" operator
    bool operator < (const mouse& m){
        return (weight < m.weight);
    }
    
    // "<<" operator
    friend ostream &operator<<(ostream &output, const mouse& m){
        output << "weight: " << m.weight << "(g)" << "\nmouse brand: " << m.m_brand << endl;
        return output;
    }
};

#endif /* objects_h */
