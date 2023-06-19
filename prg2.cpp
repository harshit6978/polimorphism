#include <iostream>
using namespace std;

class t20{
   public:
    void cricket() {
        cout << "T20 over is 20" << endl;
    }
};

class test : public t20 {
   public:
    void cricket() {
        cout << "Test over is 90" << endl;
        
		t20::cricket();
    }
};

int main(){
    test obj;
	obj.cricket();

    return 0;
}
