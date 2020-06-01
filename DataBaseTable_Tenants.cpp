/********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataBaseTable_Tenants
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\DataBaseTable_Tenants.cpp
*********************************************************************/

//## auto_generated
#include "DataBaseTable_Tenants.h"
//## link itsAdd_Tenants_form
#include "Add_Tenants_form.h"
//## link itsDelete_Tenants_form
#include "Delete_Tenants_form.h"
//## link itsEdit_Tenants_form
#include "Edit_Tenants_form.h"
//## package Default

//## class DataBaseTable_Tenants
DataBaseTable_Tenants::DataBaseTable_Tenants() {
    itsAdd_Tenants_form = NULL;
    itsDelete_Tenants_form = NULL;
    itsEdit_Tenants_form = NULL;
}

DataBaseTable_Tenants::~DataBaseTable_Tenants() {
    cleanUpRelations();
}

void DataBaseTable_Tenants::Show() {
    //#[ operation Show()
    //#]
}

int DataBaseTable_Tenants::getAddress() const {
    return Address;
}

void DataBaseTable_Tenants::setAddress(int p_Address) {
    Address = p_Address;
}

int DataBaseTable_Tenants::getMiddlename() const {
    return Middlename;
}

void DataBaseTable_Tenants::setMiddlename(int p_Middlename) {
    Middlename = p_Middlename;
}

int DataBaseTable_Tenants::getName() const {
    return Name;
}

void DataBaseTable_Tenants::setName(int p_Name) {
    Name = p_Name;
}

int DataBaseTable_Tenants::getPassport() const {
    return Passport;
}

void DataBaseTable_Tenants::setPassport(int p_Passport) {
    Passport = p_Passport;
}

int DataBaseTable_Tenants::getSurname() const {
    return Surname;
}

void DataBaseTable_Tenants::setSurname(int p_Surname) {
    Surname = p_Surname;
}

Add_Tenants_form* DataBaseTable_Tenants::getItsAdd_Tenants_form() const {
    return itsAdd_Tenants_form;
}

void DataBaseTable_Tenants::setItsAdd_Tenants_form(Add_Tenants_form* p_Add_Tenants_form) {
    if(p_Add_Tenants_form != NULL)
        {
            p_Add_Tenants_form->_setItsDataBaseTable_Tenants(this);
        }
    _setItsAdd_Tenants_form(p_Add_Tenants_form);
}

Delete_Tenants_form* DataBaseTable_Tenants::getItsDelete_Tenants_form() const {
    return itsDelete_Tenants_form;
}

void DataBaseTable_Tenants::setItsDelete_Tenants_form(Delete_Tenants_form* p_Delete_Tenants_form) {
    if(p_Delete_Tenants_form != NULL)
        {
            p_Delete_Tenants_form->_setItsDataBaseTable_Tenants(this);
        }
    _setItsDelete_Tenants_form(p_Delete_Tenants_form);
}

Edit_Tenants_form* DataBaseTable_Tenants::getItsEdit_Tenants_form() const {
    return itsEdit_Tenants_form;
}

void DataBaseTable_Tenants::setItsEdit_Tenants_form(Edit_Tenants_form* p_Edit_Tenants_form) {
    if(p_Edit_Tenants_form != NULL)
        {
            p_Edit_Tenants_form->_setItsDataBaseTable_Tenants(this);
        }
    _setItsEdit_Tenants_form(p_Edit_Tenants_form);
}

void DataBaseTable_Tenants::cleanUpRelations() {
    if(itsAdd_Tenants_form != NULL)
        {
            DataBaseTable_Tenants* p_DataBaseTable_Tenants = itsAdd_Tenants_form->getItsDataBaseTable_Tenants();
            if(p_DataBaseTable_Tenants != NULL)
                {
                    itsAdd_Tenants_form->__setItsDataBaseTable_Tenants(NULL);
                }
            itsAdd_Tenants_form = NULL;
        }
    if(itsDelete_Tenants_form != NULL)
        {
            DataBaseTable_Tenants* p_DataBaseTable_Tenants = itsDelete_Tenants_form->getItsDataBaseTable_Tenants();
            if(p_DataBaseTable_Tenants != NULL)
                {
                    itsDelete_Tenants_form->__setItsDataBaseTable_Tenants(NULL);
                }
            itsDelete_Tenants_form = NULL;
        }
    if(itsEdit_Tenants_form != NULL)
        {
            DataBaseTable_Tenants* p_DataBaseTable_Tenants = itsEdit_Tenants_form->getItsDataBaseTable_Tenants();
            if(p_DataBaseTable_Tenants != NULL)
                {
                    itsEdit_Tenants_form->__setItsDataBaseTable_Tenants(NULL);
                }
            itsEdit_Tenants_form = NULL;
        }
}

void DataBaseTable_Tenants::__setItsAdd_Tenants_form(Add_Tenants_form* p_Add_Tenants_form) {
    itsAdd_Tenants_form = p_Add_Tenants_form;
}

void DataBaseTable_Tenants::_setItsAdd_Tenants_form(Add_Tenants_form* p_Add_Tenants_form) {
    if(itsAdd_Tenants_form != NULL)
        {
            itsAdd_Tenants_form->__setItsDataBaseTable_Tenants(NULL);
        }
    __setItsAdd_Tenants_form(p_Add_Tenants_form);
}

void DataBaseTable_Tenants::_clearItsAdd_Tenants_form() {
    itsAdd_Tenants_form = NULL;
}

void DataBaseTable_Tenants::__setItsDelete_Tenants_form(Delete_Tenants_form* p_Delete_Tenants_form) {
    itsDelete_Tenants_form = p_Delete_Tenants_form;
}

void DataBaseTable_Tenants::_setItsDelete_Tenants_form(Delete_Tenants_form* p_Delete_Tenants_form) {
    if(itsDelete_Tenants_form != NULL)
        {
            itsDelete_Tenants_form->__setItsDataBaseTable_Tenants(NULL);
        }
    __setItsDelete_Tenants_form(p_Delete_Tenants_form);
}

void DataBaseTable_Tenants::_clearItsDelete_Tenants_form() {
    itsDelete_Tenants_form = NULL;
}

void DataBaseTable_Tenants::__setItsEdit_Tenants_form(Edit_Tenants_form* p_Edit_Tenants_form) {
    itsEdit_Tenants_form = p_Edit_Tenants_form;
}

void DataBaseTable_Tenants::_setItsEdit_Tenants_form(Edit_Tenants_form* p_Edit_Tenants_form) {
    if(itsEdit_Tenants_form != NULL)
        {
            itsEdit_Tenants_form->__setItsDataBaseTable_Tenants(NULL);
        }
    __setItsEdit_Tenants_form(p_Edit_Tenants_form);
}

void DataBaseTable_Tenants::_clearItsEdit_Tenants_form() {
    itsEdit_Tenants_form = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataBaseTable_Tenants.cpp
*********************************************************************/
