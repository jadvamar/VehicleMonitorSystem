#ifndef FLUIDS_H
#define FLUIDS_H
#include<QSet>
#include <vector>

class Fluids
{
public:
    Fluids();
    QSet<QString> getfluidlist();
    QSet<QString> addfluid(QString fluidname);
private:
     QSet<QString> fluidlist;
};

#endif // FLUIDS_H
