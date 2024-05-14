struct Unit_type_
{
    int PV_max;
    int attack;
    int defense;
    int speed;
    int scope;
};
typedef struct Unit_type_ Unit_type;

struct Unit_
{
    Unit_type type;
    int PV;
    int X_pos;
    int Y_Pos;
};

typedef struct Unit_ Unit;

/*
// knight declaration
Unit_type knight = {5, 2, 3, 3, 1};

// Archer declaration
Unit_type archer = {3, 3, 1, 2, 3};

// thief declaration
Unit_type thief = {5, 4, 0, 4, 1};

*/



