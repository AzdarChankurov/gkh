/********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Button_Delete
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Button_Delete.cpp
*********************************************************************/

//## auto_generated
#include "Button_Delete.h"
//## link itsDelete_Tenants_form
#include "Delete_Tenants_form.h"
//## link itsMain_form
#include "Main_form.h"
//## package Default

//## class Button_Delete
Button_Delete::Button_Delete() {
    itsDelete_Tenants_form = NULL;
    itsMain_form = NULL;
}

Button_Delete::~Button_Delete() {
    cleanUpRelations();
}

void Button_Delete::Delete_Tenants_form_Open() {
    //#[ operation Delete_Tenants_form_Open()
    //#]
}

int Button_Delete::getDelete() const {
    return Delete;
}

void Button_Delete::setDelete(int p_Delete) {
    Delete = p_Delete;
}

Delete_Tenants_form* Button_Delete::getItsDelete_Tenants_form() const {
    return itsDelete_Tenants_form;
}

void Button_Delete::setItsDelete_Tenants_form(Delete_Tenants_form* p_Delete_Tenants_form) {
    if(p_Delete_Tenants_form != NULL)
        {
            p_Delete_Tenants_form->_setItsButton_Delete(this);
        }
    _setItsDelete_Tenants_form(p_Delete_Tenants_form);
}

Main_form* Button_Delete::getItsMain_form() const {
    return itsMain_form;
}

void Button_Delete::setItsMain_form(Main_form* p_Main_form) {
    if(p_Main_form != NULL)
        {
            p_Main_form->_setItsButton_Delete(this);
        }
    _setItsMain_form(p_Main_form);
}

void Button_Delete::cleanUpRelations() {
    if(itsDelete_Tenants_form != NULL)
        {
            Button_Delete* p_Button_Delete = itsDelete_Tenants_form->getItsButton_Delete();
            if(p_Button_Delete != NULL)
                {
                    itsDelete_Tenants_form->__setItsButton_Delete(NULL);
                }
            itsDelete_Tenants_form = NULL;
        }
    if(itsMain_form != NULL)
        {
            Button_Delete* p_Button_Delete = itsMain_form->getItsButton_Delete();
            if(p_Button_Delete != NULL)
                {
                    itsMain_form->__setItsButton_Delete(NULL);
                }
            itsMain_form = NULL;
        }
}

void Button_Delete::__setItsDelete_Tenants_form(Delete_Tenants_form* p_Delete_Tenants_form) {
    itsDelete_Tenants_form = p_Delete_Tenants_form;
}

void Button_Delete::_setItsDelete_Tenants_form(Delete_Tenants_form* p_Delete_Tenants_form) {
    if(itsDelete_Tenants_form != NULL)
        {
            itsDelete_Tenants_form->__setItsButton_Delete(NULL);
        }
    __setItsDelete_Tenants_form(p_Delete_Tenants_form);
}

void Button_Delete::_clearItsDelete_Tenants_form() {
    itsDelete_Tenants_form = NULL;
}

void Button_Delete::__setItsMain_form(Main_form* p_Main_form) {
    itsMain_form = p_Main_form;
}

void Button_Delete::_setItsMain_form(Main_form* p_Main_form) {
    if(itsMain_form != NULL)
        {
            itsMain_form->__setItsButton_Delete(NULL);
        }
    __setItsMain_form(p_Main_form);
}

void Button_Delete::_clearItsMain_form() {
    itsMain_form = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Button_Delete.cpp
*********************************************************************/
