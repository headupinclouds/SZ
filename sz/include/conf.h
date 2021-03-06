/**
 *  @file conf.h
 *  @author Sheng Di
 *  @date July, 2017
 *  @brief Header file for the conf.c.
 *  (C) 2016 by Mathematics and Computer Science (MCS), Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 */

#ifndef _Conf_H
#define _Conf_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>

//conf.c
void updateQuantizationInfo(int quant_intervals);
void clearHuffmanMem();
int SZ_ReadConf();
int SZ_LoadConf();
int checkVersion(char* version);
unsigned int roundUpToPowerOf2(unsigned int base);

#ifdef __cplusplus
}
#endif

#endif /* ----- #ifndef _Conf_H  ----- */

