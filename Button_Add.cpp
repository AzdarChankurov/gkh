/********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Button_Add
//!	Generated Date	: Mon, 1, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Button_Add.cpp
*********************************************************************/

//## auto_generated
#include "Button_Add.h"
//## link itsAdd_Tenants_form
#include "Add_Tenants_form.h"
//## link itsMain_form
#include "Main_form.h"
//## package Default

//## class Button_Add
Button_Add::Button_Add() {
    itsAdd_Tenants_form = NULL;
    itsMain_form = NULL;
}

Button_Add::~Button_Add() {
    cleanUpRelations();
}

void Button_Add::Add_Tenants_form_Open() {
    //#[ operation Add_Tenants_form_Open()
    //#]
}

int Button_Add::getAdd() const {
    return Add;
}

void Button_Add::setAdd(int p_Add) {
    Add = p_Add;
}

Add_Tenants_form* Button_Add::getItsAdd_Tenants_form() const {
    return itsAdd_Tenants_form;
}

void Button_Add::setItsAdd_Tenants_form(Add_Tenants_form* p_Add_Tenants_form) {
    if(p_Add_Tenants_form != NULL)
        {
            p_Add_Tenants_form->_setItsButton_Add(this);
        }
    _setItsAdd_Tenants_form(p_Add_Tenants_form);
}

Main_form* Button_Add::getItsMain_form() const {
    return itsMain_form;
}

void Button_Add::setItsMain_form(Main_form* p_Main_form) {
    if(p_Main_form != NULL)
        {
            p_Main_form->_setItsButton_Add(this);
        }
    _setItsMain_form(p_Main_form);
}

void Button_Add::cleanUpRelations() {
    if(itsAdd_Tenants_form != NULL)
        {
            Button_Add* p_Button_Add = itsAdd_Tenants_form->getItsButton_Add();
            if(p_Button_Add != NULL)
                {
                    itsAdd_Tenants_form->__setItsButton_Add(NULL);
                }
            itsAdd_Tenants_form = NULL;
        }
    if(itsMain_form != NULL)
        {
            Button_Add* p_Button_Add = itsMain_form->getItsButton_Add();
            if(p_Button_Add != NULL)
                {
                    itsMain_form->__setItsButton_Add(NULL);
                }
            itsMain_form = NULL;
        }
}

void Button_Add::__setItsAdd_Tenants_form(Add_Tenants_form* p_Add_Tenants_form) {
    itsAdd_Tenants_form = p_Add_Tenants_form;
}

void Button_Add::_setItsAdd_Tenants_form(Add_Tenants_form* p_Add_Tenants_form) {
    if(itsAdd_Tenants_form != NULL)
        {
            itsAdd_Tenants_form->__setItsButton_Add(NULL);
        }
    __setItsAdd_Tenants_form(p_Add_Tenants_form);
}

void Button_Add::_clearItsAdd_Tenants_form() {
    itsAdd_Tenants_form = NULL;
}

void Button_Add::__setItsMain_form(Main_form* p_Main_form) {
    itsMain_form = p_Main_form;
}

void Button_Add::_setItsMain_form(Main_form* p_Main_form) {
    if(itsMain_form != NULL)
        {
            itsMain_form->__setItsButton_Add(NULL);
        }
    __setItsMain_form(p_Main_form);
}

void Button_Add::_clearItsMain_form() {
    itsMain_form = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Button_Add.cpp
*********************************************************************/
