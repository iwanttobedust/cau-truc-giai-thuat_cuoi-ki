#pragma once

#ifndef FAMILY_H
#define FAMILY_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Cau truc thanh vien gia pha
struct Person {
    int id;
    string name;
    int parentId;
};

// Khai bao danh sach gia pha
extern vector<Person> family;

// Khai bao cac ham
int findPerson(int id);

void findAncestor();

void printChildren(int id);

void printSiblings(int id);

#endif
