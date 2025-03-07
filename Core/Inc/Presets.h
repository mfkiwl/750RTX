/*******************************************************************************

                   Presets.h module of the program ARM_Radio
						                          
						            Copyright 2015 by Alberto I2PHD, December 2015
						                                      
    This file is part of ARM_Radio.

    ARM_Radio is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    ARM_Radio is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with ARM_Radio.  It is contained in the file Copying.txt in the
    same ZIP file where this file was extracted from.				                                      
						                                      
*******************************************************************************/

#include "main.h"
//---------------------------------------------------------------
// Preset stations
//---------------------------------------------------------------

static char pNames[MAXPRESETS][16] =
 {"User", "SAQ", "Le Blanc", "MSF Anthorn", "DCF-77", "RTTY 147.3", "Satelor", "Allouis",
   "Radio Europe 1","UK BBC 4", "Monte Carlo","Polskie R1", "Beacon ARI-MI", "Italy RAI 1"};
/*
static float pFreqs[MAXPRESETS] =
 {0.f, 900000.f, 531000.f, 657000.f, 639000.f, 549000.f, 558000.f, 476180.f, 474000.f, 472400.f,
  594000.f, 472000.f, 610000.f, 617000.f};
*/

/* RAI Siziano, PLA Pula, GAZ Gazoldo, COD Codogno, VIC Vicenza, LNE Linate */
static float pFreqs[MAXPRESETS] =
 {0.f, 7010000.f, 352500.f, 383000.f, 387000.f, 401500.f, 418000.f, 558000.f, 474000.f, 472400.f,
  594000.f, 472000.f, 610000.f, 617000.f};
  static Mode pModes[MAXPRESETS] =
 {AM, LSB, CW, CW, CW, CW, AM, CW, CW, CW, CW, CW, AM, AM};


/*
  {0.f, 17200.f, 18300.f, 60000.f, 77500.f, 147300.f, 153000.f, 162000.f, 183000.f, 198000.f,
  216000.f, 225000.f, 476180.f, 900000.f};
 
static Mode pModes[MAXPRESETS] =
 {AM, AM,AM, AM, AM, AM, AM, CW, CW, CW, AM, CW, AM, AM};
 */

static Bwidth pBws[MAXPRESETS] =
 {Narrow, Narrow, Narrow, Narrow, Narrow, Narrow, Narrow, Narrow, Narrow, Narrow, Narrow, Narrow,
  Narrow, Narrow};
 //--------------------------------------------------------------
