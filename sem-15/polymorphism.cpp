#include <iostream>
#include <vector>

using namespace std;

class FilterInterface {
public:
    virtual void Print() {
        cout << "FilterInterface" << endl;
    }
};

class Picture {
private:
    vector<FilterInterface*> cached_filters;
public:
    void Append(FilterInterface* fi_ptr) {
        cached_filters.push_back(fi_ptr);
    }
    void Render() {
        for (auto* filter : cached_filters) {
            filter->Print();
        }
    }
};

class CustomFilter1 : public FilterInterface {
public:
    void Print() override {
        cout << "CustomFilter1" << endl;
    }
};

class CustomFilter2: public FilterInterface {
public:
    void Print() override {
        cout << "CustomFilter2" << endl;
    }
};

int main() {
    FilterInterface fi;
    // CustomFilter cf;
    // fi.Print();
    // cf.Print();
    // cout << endl;
    // FilterInterface* fi_ptr;
    // fi_ptr = &cf;
    // fi_ptr->Print();

    CustomFilter1 cf1;
    Picture picture;
    {
        CustomFilter2 cf2;
        picture.Append(&fi);
        picture.Append(&cf1);
        picture.Append(&cf2);
    }
    picture.Render();
}
