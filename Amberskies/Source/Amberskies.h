//
// Created by DAOCa on 05/02/2022.
//

#pragma once


#define AMBER_PLATFORM_WINDOWS
#define AMBER_DEBUG


#ifdef AMBER_PLATFORM_WINDOWS

#include <Windows.h>

#else

#error Amber supports windows only

#endif




#include "Test.h"


#include "Amberskies/Core/Application.h"
#include "Amberskies/Core/Log.h"

#include "Amberskies/Events/Event.h"



