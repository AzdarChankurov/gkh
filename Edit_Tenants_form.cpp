/********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Edit_Tenants_form
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Edit_Tenants_form.cpp
*********************************************************************/

//## auto_generated
#include "Edit_Tenants_form.h"
//## link itsButton_Edit
#include "Button_Edit.h"
//## link itsDataBaseTable_Tenants
#include "DataBaseTable_Tenants.h"
//## link itsMain_form
#include "Main_form.h"
//## package Default

//## class Edit_Tenants_form
Edit_Tenants_form::Edit_Tenants_form() {
    itsButton_Edit = NULL;
    itsDataBaseTable_Tenants = NULL;
    itsMain_form = NULL;
}

Edit_Tenants_form::~Edit_Tenants_form() {
    cleanUpRelations();
}

void Edit_Tenants_form::Edit() {
    //#[ operation Edit()
    //#]
}

int Edit_Tenants_form::getAddress() const {
    return Address;
}

void Edit_Tenants_form::setAddress(int p_Address) {
    Address = p_Address;
}

int Edit_Tenants_form::getMiddlename() const {
    return Middlename;
}

void Edit_Tenants_form::setMiddlename(int p_Middlename) {
    Middlename = p_Middlename;
}

int Edit_Tenants_form::getName() const {
    return Name;
}

void Edit_Tenants_form::setName(int p_Name) {
    Name = p_Name;
}

int Edit_Tenants_form::getPassport() const {
    return Passport;
}

void Edit_Tenants_form::setPassport(int p_Passport) {
    Passport = p_Passport;
}

int Edit_Tenants_form::getSurname() const {
    return Surname;
}

void Edit_Tenants_form::setSurname(int p_Surname) {
    Surname = p_Surname;
}

Button_Edit* Edit_Tenants_form::getItsButton_Edit() const {
    return itsButton_Edit;
}

void Edit_Tenants_form::setItsButton_Edit(Button_Edit* p_Button_Edit) {
    if(p_Button_Edit != NULL)
        {
            p_Button_Edit->_setItsEdit_Tenants_form(this);
        }
    _setItsButton_Edit(p_Button_Edit);
}

DataBaseTable_Tenants* Edit_Tenants_form::getItsDataBaseTable_Tenants() const {
    return itsDataBaseTable_Tenants;
}

void Edit_Tenants_form::setItsDataBaseTable_Tenants(DataBaseTable_Tenants* p_DataBaseTable_Tenants) {
    if(p_DataBaseTable_Tenants != NULL)
        {
            p_DataBaseTable_Tenants->_setItsEdit_Tenants_form(this);
        }
    _setItsDataBaseTable_Tenants(p_DataBaseTable_Tenants);
}

Main_form* Edit_Tenants_form::getItsMain_form() const {
    return itsMain_form;
}

void Edit_Tenants_form::setItsMain_form(Main_form* p_Main_form) {
    if(p_Main_form != NULL)
        {
            p_Main_form->_setItsEdit_Tenants_form(this);
        }
    _setItsMain_form(p_Main_form);
}

void Edit_Tenants_form::cleanUpRelations() {
    if(itsButton_Edit != NULL)
        {
            Edit_Tenants_form* p_Edit_Tenants_form = itsButton_Edit->getItsEdit_Tenants_form();
            if(p_Edit_Tenants_form != NULL)
                {
                    itsButton_Edit->__setItsEdit_Tenants_form(NULL);
                }
            itsButton_Edit = NULL;
        }
    if(itsDataBaseTable_Tenants != NULL)
        {
            Edit_Tenants_form* p_Edit_Tenants_form = itsDataBaseTable_Tenants->getItsEdit_Tenants_form();
            if(p_Edit_Tenants_form != NULL)
                {
                    itsDataBaseTable_Tenants->__setItsEdit_Tenants_form(NULL);
                }
            itsDataBaseTable_Tenants = NULL;
        }
    if(itsMain_form != NULL)
        {
            Edit_Tenants_form* p_Edit_Tenants_form = itsMain_form->getItsEdit_Tenants_form();
            if(p_Edit_Tenants_form != NULL)
                {
                    itsMain_form->__setItsEdit_Tenants_form(NULL);
                }
            itsMain_form = NULL;
        }
}

void Edit_Tenants_form::__setItsButton_Edit(Button_Edit* p_Button_Edit) {
    itsButton_Edit = p_Button_Edit;
}

void Edit_Tenants_form::_setItsButton_Edit(Button_Edit* p_Button_Edit) {
    if(itsButton_Edit != NULL)
        {
            itsButton_Edit->__setItsEdit_Tenants_form(NULL);
        }
    __setItsButton_Edit(p_Button_Edit);
}

void Edit_Tenants_form::_clearItsButton_Edit() {
    itsButton_Edit = NULL;
}

void Edit_Tenants_form::__setItsDataBaseTable_Tenants(DataBaseTable_Tenants* p_DataBaseTable_Tenants) {
    itsDataBaseTable_Tenants = p_DataBaseTable_Tenants;
}

void Edit_Tenants_form::_setItsDataBaseTable_Tenants(DataBaseTable_Tenants* p_DataBaseTable_Tenants) {
    if(itsDataBaseTable_Tenants != NULL)
        {
            itsDataBaseTable_Tenants->__setItsEdit_Tenants_form(NULL);
        }
    __setItsDataBaseTable_Tenants(p_DataBaseTable_Tenants);
}

void Edit_Tenants_form::_clearItsDataBaseTable_Tenants() {
    itsDataBaseTable_Tenants = NULL;
}

void Edit_Tenants_form::__setItsMain_form(Main_form* p_Main_form) {
    itsMain_form = p_Main_form;
}

void Edit_Tenants_form::_setItsMain_form(Main_form* p_Main_form) {
    if(itsMain_form != NULL)
        {
            itsMain_form->__setItsEdit_Tenants_form(NULL);
        }
    __setItsMain_form(p_Main_form);
}

void Edit_Tenants_form::_clearItsMain_form() {
    itsMain_form = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Edit_Tenants_form.cpp
*********************************************************************/
