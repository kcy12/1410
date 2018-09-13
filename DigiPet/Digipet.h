class Digipet
{
  private://object attributes
    int health, hunger;
    int age;
    int happiness;
  public: //prototypes go here
  //constructor
    Digipet();
    //action eat : takes away from hunger
    void eat();
    //action exercise : adds to your health
    void exercise();
    //action get older : subtracts from health and adds to hunger
    void getOlder();
    //displays info
    void displayStats();
    //determines organism viability via HP above 0 and hunger above 100
    bool isAlive();
    void play();
};//DO NOT FORGET SEMI COLON
