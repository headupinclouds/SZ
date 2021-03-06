/**
 *  @file sz_double.h
 *  @author Sheng Di
 *  @date July, 2017
 *  @brief Header file for the sz_double.c.
 *  (C) 2016 by Mathematics and Computer Science (MCS), Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 */

#ifndef _SZ_Double_H
#define _SZ_Double_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>

void computeReqLength_double(double realPrecision, short radExpo, int* reqLength, double* medianValue);

void compute_segment_precisions_double_1D(double *oriData, size_t dataLength, double* pwrErrBound, unsigned char* pwrErrBoundBytes, double globalPrecision);
unsigned int optimize_intervals_double_1D_pwr(double *oriData, size_t dataLength, double* pwrErrBound);
unsigned int optimize_intervals_double_1D(double *oriData, size_t dataLength, double realPrecision);

void compute_segment_precisions_double_2D(double *oriData, double* pwrErrBound, 
size_t r1, size_t r2, size_t R2, size_t edgeSize, unsigned char* pwrErrBoundBytes, double Min, double Max, double globalPrecision);
unsigned int optimize_intervals_double_2D(double *oriData, size_t r1, size_t r2, double realPrecision);
unsigned int optimize_intervals_double_2D_pwr(double *oriData, size_t r1, size_t r2, size_t R2, size_t edgeSize, double* pwrErrBound);

void compute_segment_precisions_double_3D(double *oriData, double* pwrErrBound, 
size_t r1, size_t r2, size_t r3, size_t R2, size_t R3, size_t edgeSize, unsigned char* pwrErrBoundBytes, double Min, double Max, double globalPrecision);
unsigned int optimize_intervals_double_3D(double *oriData, size_t r1, size_t r2, size_t r3, double realPrecision);
unsigned int optimize_intervals_double_3D_pwr(double *oriData, size_t r1, size_t r2, size_t r3, size_t R2, size_t R3, size_t edgeSize, double* pwrErrBound);

unsigned int optimize_intervals_double_4D(double *oriData, size_t r1, size_t r2, size_t r3, size_t r4, double realPrecision);

unsigned int optimize_intervals_double_1D_subblock(double *oriData, double realPrecision, size_t r1, size_t s1, size_t e1);
unsigned int optimize_intervals_double_2D_subblock(double *oriData, double realPrecision, size_t r1, size_t r2, size_t s1, size_t s2, size_t e1, size_t e2);
unsigned int optimize_intervals_double_3D_subblock(double *oriData, double realPrecision, size_t r1, size_t r2, size_t r3, size_t s1, size_t s2, size_t s3, size_t e1, size_t e2, size_t e3);
unsigned int optimize_intervals_double_4D_subblock(double *oriData, double realPrecision, size_t r1, size_t r2, size_t r3, size_t r4, size_t s1, size_t s2, size_t s3, size_t s4, size_t e1, size_t e2, size_t e3, size_t e4);

TightDataPointStorageD* SZ_compress_double_1D_MDQ(double *oriData, 
size_t dataLength, double realPrecision, double valueRangeSize, double medianValue_d);
void SZ_compress_args_double_StoreOriData(double* oriData, size_t dataLength, TightDataPointStorageD* tdps, 
unsigned char** newByteData, size_t *outSize);
void SZ_compress_args_double_NoCkRngeNoGzip_1D(unsigned char** newByteData, double *oriData, size_t dataLength, double realPrecision, size_t *outSize, double valueRangeSize, double medianValue_d);
void SZ_compress_args_double_NoCkRngeNoGzip_1D_pwr(unsigned char** newByteData, double *oriData, double globalPrecision, 
size_t dataLength, size_t *outSize, double min, double max);

TightDataPointStorageD* SZ_compress_double_2D_MDQ(double *oriData, size_t r1, size_t r2, double realPrecision, double valueRangeSize, double medianValue_d);
void SZ_compress_args_double_NoCkRngeNoGzip_2D(unsigned char** newByteData, double *oriData, size_t r1, size_t r2, double realPrecision, size_t *outSize, double valueRangeSize, double medianValue_d);
void SZ_compress_args_double_NoCkRngeNoGzip_2D_pwr(unsigned char** newByteData, double *oriData, double globalPrecision, size_t r1, size_t r2, size_t *outSize, double min, double max);

TightDataPointStorageD* SZ_compress_double_3D_MDQ(double *oriData, size_t r1, size_t r2, size_t r3, double realPrecision, double valueRangeSize, double medianValue_d);
void SZ_compress_args_double_NoCkRngeNoGzip_3D(unsigned char** newByteData, double *oriData, size_t r1, size_t r2, size_t r3, double realPrecision, size_t *outSize, double valueRangeSize, double medianValue_d);
void SZ_compress_args_double_NoCkRngeNoGzip_3D_pwr(unsigned char** newByteData, double *oriData, double globalPrecision, size_t r1, size_t r2, size_t r3, 
size_t *outSize, double min, double max);

TightDataPointStorageD* SZ_compress_double_4D_MDQ(double *oriData, size_t r1, size_t r2, size_t r3, size_t r4, double realPrecision, double valueRangeSize, double medianValue_d);
void SZ_compress_args_double_NoCkRngeNoGzip_4D(unsigned char** newByteData, double *oriData, size_t r1, size_t r2, size_t r3, size_t r4, double realPrecision, size_t *outSize, double valueRangeSize, double medianValue_d);

void SZ_compress_args_double_NoCkRnge_1D_subblock(unsigned char* compressedBytes, double *oriData, double realPrecision, size_t *outSize, double valueRangeSize, double medianValue_d,
size_t r1, size_t s1, size_t e1);
void SZ_compress_args_double_NoCkRnge_2D_subblock(unsigned char* compressedBytes, double *oriData, double realPrecision, size_t *outSize, double valueRangeSize, double medianValue_d,
size_t r2, size_t r1, size_t s2, size_t s1, size_t e2, size_t e1);
void SZ_compress_args_double_NoCkRnge_3D_subblock(unsigned char* compressedBytes, double *oriData, double realPrecision, size_t *outSize, double valueRangeSize, double medianValue_d,
size_t r3, size_t r2, size_t r1, size_t s3, size_t s2, size_t s1, size_t e3, size_t e2, size_t e1);
void SZ_compress_args_double_NoCkRnge_4D_subblock(unsigned char* compressedBytes, double *oriData, double realPrecision, size_t *outSize, double valueRangeSize, double medianValue_d,
size_t r4, size_t r3, size_t r2, size_t r1, size_t s4, size_t s3, size_t s2, size_t s1, size_t e4, size_t e3, size_t e2, size_t e1);

TightDataPointStorageD* SZ_compress_double_1D_MDQ_subblock(double *oriData, double realPrecision, double valueRangeSize, double medianValue_d,
size_t r1, size_t s1, size_t e1);
TightDataPointStorageD* SZ_compress_double_2D_MDQ_subblock(double *oriData, double realPrecision, double valueRangeSize, double medianValue_d,
size_t r1, size_t r2, size_t s1, size_t s2, size_t e1, size_t e2);
TightDataPointStorageD* SZ_compress_double_3D_MDQ_subblock(double *oriData, double realPrecision, double valueRangeSize, double medianValue_d,
size_t r1, size_t r2, size_t r3, size_t s1, size_t s2, size_t s3, size_t e1, size_t e2, size_t e3);
TightDataPointStorageD* SZ_compress_double_4D_MDQ_subblock(double *oriData, double realPrecision, double valueRangeSize, double medianValue_d,
size_t r1, size_t r2, size_t r3, size_t r4, size_t s1, size_t s2, size_t s3, size_t s4, size_t e1, size_t e2, size_t e3, size_t e4);

void SZ_compress_args_double_withinRange(unsigned char** newByteData, double *oriData, size_t dataLength, size_t *outSize);

int SZ_compress_args_double(unsigned char** newByteData, double *oriData, 
size_t r5, size_t r4, size_t r3, size_t r2, size_t r1, size_t *outSize, 
int errBoundMode, double absErr_Bound, double relBoundRatio, double pwRelBoundRatio, int pwrType);

int SZ_compress_args_double_wRngeNoGzip(unsigned char** newByteData, double *oriData, 
size_t r5, size_t r4, size_t r3, size_t r2, size_t r1, size_t *outSize, 
int errBoundMode, double absErr_Bound, double relBoundRatio);

int SZ_decompress_args_double(double** newData, size_t r5, size_t r4, size_t r3, size_t r2, size_t r1, unsigned char* cmpBytes, size_t cmpSize);

#ifdef __cplusplus
}
#endif

#endif /* ----- #ifndef _SZ_Double_H  ----- */

