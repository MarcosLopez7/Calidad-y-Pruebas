//
// Created by marcoslopez7 on 13/01/17.
//

#include <vector>

class Cola {
public:
    Cola();
    void add(int, bool);
    int borra(int);
    bool empty();
    int size();

private:
    std::vector<int> *v;
};

Cola::Cola() {
    v = new std::vector<int>();
}

void Cola::add(int e, bool f) {

    if (f) {
        v->push_back(e);
    } else
        v->insert(v->begin(), v->size());

}

int Cola::borra(int p) {

    if (v->size() > p && p > 0) {
        int e = v->at(p);
        v->erase(v->begin() + p);
        return p;
    }

    return 0;
}


bool Cola::empty() {

    if (v->size() == 0)
        return true;
    else
        return false;

}

int Cola::size(){return v->size();}