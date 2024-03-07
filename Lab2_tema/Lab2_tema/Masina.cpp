#include <iostream>
#include "Masina.h"
using namespace std;

void Masina::Set_firma(const char* f) {
    this->firma = f;
}
const char* Masina::Get_firma() {
    return this->firma;
}
void Masina::Set_nr_litri_combustibili(int nlc) {
    this->nr_litri_combustibili = nlc;
}
int Masina::Get_nr_litri_combustibili() {
    return this->nr_litri_combustibili;
}
void Masina::Set_consum(float c) {
    this->consum = c;
}
float Masina::Get_consum() {
    return this->consum;
}
void Masina::Set_kilometraj(int k) {
    this->kilometraj = k;
}
int Masina::Get_kilometraj() {
    return this->kilometraj;
}
int Masina::bisnitar() {
    Set_kilometraj(this->kilometraj - 1000);
    return this->kilometraj;
}
void Masina::cursa(int distanta) {
    Set_kilometraj(this->kilometraj + distanta);
    Set_nr_litri_combustibili(this->nr_litri_combustibili - this->consum * distanta);
}
