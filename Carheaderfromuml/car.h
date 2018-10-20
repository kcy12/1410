#ifndef CAR_H
#define CAR_H
using namespace std;

class Car
{
    public:
        Car(string a_name, int a_wheels, double a_engine_size);
        string get_model();
        bool is_running();
        void set_wheels(int w);
        double accelerate(int fuel_rate);
        string vin;
    private:
        int diagnostics(char system);
        string model;
        int wheels;
        double engine_size;

};

#endif // CAR_H
