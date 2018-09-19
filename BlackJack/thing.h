class player
{
    private:
        int card;
        int total;
        bool hasAce;
        stringstream display;//hand
    public:
        player();
        hit();
        display();
        getTotal();
};
