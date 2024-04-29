#include "filters.h"

Filters::Filters() {
    filterlist={"Air Filter","Fuel Filter","Oil Filter"};
}

QSet<QString> Filters::getfilterlist()
{
    return filterlist;
}

QSet<QString> Filters::addfilter(QString filtername)
{
    filterlist.insert(filtername);
    return filterlist;
}

