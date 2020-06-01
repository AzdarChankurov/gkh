/********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Delete_Tenants_form
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Delete_Tenants_form.cpp
*********************************************************************/

//## auto_generated
#include "Delete_Tenants_form.h"
//## link itsButton_Delete
#include "Button_Delete.h"
//## link itsDataBaseTable_Tenants
#include "DataBaseTable_Tenants.h"
//## link itsMain_form
#include "Main_form.h"
//## package Default

//## class Delete_Tenants_form
Delete_Tenants_form::Delete_Tenants_form() {
    itsButton_Delete = NULL;
    itsDataBaseTable_Tenants = NULL;
    itsMain_form = NULL;
}

Delete_Tenants_form::~Delete_Tenants_form() {
    cleanUpRelations();
}

void Delete_Tenants_form::Delete() {
    //#[ operation Delete()
    //#]
}

int Delete_Tenants_form::getPassport() const {
    return Passport;
}

void Delete_Tenants_form::setPassport(int p_Passport) {
    Passport = p_Passport;
}

Button_Delete* Delete_Tenants_form::getItsButton_Delete() const {
    return itsButton_Delete;
}

void Delete_Tenants_form::setItsButton_Delete(Button_Delete* p_Button_Delete) {
    if(p_Button_Delete != NULL)
        {
            p_Button_Delete->_setItsDelete_Tenants_form(this);
        }
    _setItsButton_Delete(p_Button_Delete);
}

DataBaseTable_Tenants* Delete_Tenants_form::getItsDataBaseTable_Tenants() const {
    return itsDataBaseTable_Tenants;
}

void Delete_Tenants_form::setItsDataBaseTable_Tenants(DataBaseTable_Tenants* p_DataBaseTable_Tenants) {
    if(p_DataBaseTable_Tenants != NULL)
        {
            p_DataBaseTable_Tenants->_setItsDelete_Tenants_form(this);
        }
    _setItsDataBaseTable_Tenants(p_DataBaseTable_Tenants);
}

Main_form* Delete_Tenants_form::getItsMain_form() const {
    return itsMain_form;
}

void Delete_Tenants_form::setItsMain_form(Main_form* p_Main_form) {
    if(p_Main_form != NULL)
        {
            p_Main_form->_setItsDelete_Tenants_form(this);
        }
    _setItsMain_form(p_Main_form);
}

void Delete_Tenants_form::cleanUpRelations() {
    if(itsButton_Delete != NULL)
        {
            Delete_Tenants_form* p_Delete_Tenants_form = itsButton_Delete->getItsDelete_Tenants_form();
            if(p_Delete_Tenants_form != NULL)
                {
                    itsButton_Delete->__setItsDelete_Tenants_form(NULL);
                }
            itsButton_Delete = NULL;
        }
    if(itsDataBaseTable_Tenants != NULL)
        {
            Delete_Tenants_form* p_Delete_Tenants_form = itsDataBaseTable_Tenants->getItsDelete_Tenants_form();
            if(p_Delete_Tenants_form != NULL)
                {
                    itsDataBaseTable_Tenants->__setItsDelete_Tenants_form(NULL);
                }
            itsDataBaseTable_Tenants = NULL;
        }
    if(itsMain_form != NULL)
        {
            Delete_Tenants_form* p_Delete_Tenants_form = itsMain_form->getItsDelete_Tenants_form();
            if(p_Delete_Tenants_form != NULL)
                {
                    itsMain_form->__setItsDelete_Tenants_form(NULL);
                }
            itsMain_form = NULL;
        }
}

void Delete_Tenants_form::__setItsButton_Delete(Button_Delete* p_Button_Delete) {
    itsButton_Delete = p_Button_Delete;
}

void Delete_Tenants_form::_setItsButton_Delete(Button_Delete* p_Button_Delete) {
    if(itsButton_Delete != NULL)
        {
            itsButton_Delete->__setItsDelete_Tenants_form(NULL);
        }
    __setItsButton_Delete(p_Button_Delete);
}

void Delete_Tenants_form::_clearItsButton_Delete() {
    itsButton_Delete = NULL;
}

void Delete_Tenants_form::__setItsDataBaseTable_Tenants(DataBaseTable_Tenants* p_DataBaseTable_Tenants) {
    itsDataBaseTable_Tenants = p_DataBaseTable_Tenants;
}

void Delete_Tenants_form::_setItsDataBaseTable_Tenants(DataBaseTable_Tenants* p_DataBaseTable_Tenants) {
    if(itsDataBaseTable_Tenants != NULL)
        {
            itsDataBaseTable_Tenants->__setItsDelete_Tenants_form(NULL);
        }
    __setItsDataBaseTable_Tenants(p_DataBaseTable_Tenants);
}

void Delete_Tenants_form::_clearItsDataBaseTable_Tenants() {
    itsDataBaseTable_Tenants = NULL;
}

void Delete_Tenants_form::__setItsMain_form(Main_form* p_Main_form) {
    itsMain_form = p_Main_form;
}

void Delete_Tenants_form::_setItsMain_form(Main_form* p_Main_form) {
    if(itsMain_form != NULL)
        {
            itsMain_form->__setItsDelete_Tenants_form(NULL);
        }
    __setItsMain_form(p_Main_form);
}

void Delete_Tenants_form::_clearItsMain_form() {
    itsMain_form = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Delete_Tenants_form.cpp
*********************************************************************/
