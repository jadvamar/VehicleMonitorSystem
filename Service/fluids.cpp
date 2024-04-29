#include "fluids.h"

Fluids::Fluids() {
    fluidlist={"Transmission Oil","Engine Oil","Brake Fluid" };
}
QSet<QString> Fluids::getfluidlist()
{
    return fluidlist;
}

QSet<QString> Fluids::addfluid(QString fluidname)
{
    fluidlist.insert(fluidname);
    return fluidlist;
}
