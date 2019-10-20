#include <iostream>
#include <vector>
#include "figure.h"
#include "disc.h"
#include "rectangle.h"
int main() {
    std::vector<figure*> figures;
    for(;;) {
        int command;
        std::cin >> command;
        if (command == 0) {
            break;
        } else if(command == 1) {
            int figure_id;
            std::cin >> figure_id;
            figure* new_figure;
            if (figure_id == 0) {
                new_figure = new disc(std::cin);
            } else if (figure_id == 1) {
                new_figure = new rectangle(std::cin);
            }
            figures.push_back(new_figure);
        } else if(command == 2) {
            int function_id;
            std::cin >> function_id;
            if (function_id == 0) {
                for(figure* cur_figure: figures) {
                    cur_figure->print(std::cout);
                }
            } else if (function_id == 1){
                for(figure* cur_figure: figures) {
                    std::cout<<cur_figure->square()<<'\n';
                }
            } else if (function_id == 2) {
                for(figure* cur_figure: figures) {
                    std::cout << cur_figure->center() << '\n';
                }
            }
        } else if (command == 3) {
            int id;
            std::cin >> id;
            delete figures[id];
            figures.erase(figures.begin() + id);
        }
    }
    for (size_t i = 0; i < figures.size(); ++i) {
        delete figures[i];
    }
    return 0;
}