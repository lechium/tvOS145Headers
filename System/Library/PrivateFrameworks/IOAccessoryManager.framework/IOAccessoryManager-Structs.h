/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct OpaqueAudioComponentInstance* OpaqueAudioComponentInstanceRef;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct {
	int type;
	int pin;
	int halogenResult;
	double voltageGainCorrection;
	double currentGainCorrection;
	double currentPhaseCompensation;
	double calVoltageSNR;
	double calCurrentSNR;
	double calVoltageAmplitude;
	double calCurrentAmplitude;
	double goertzelImpedance;
	double goertzelPhase;
	double compensatedImpedance;
	double compensatedPhase;
	double resistanceInOhms;
	double capacitanceInNanoF;
	double measurementVoltageSNR;
	double measurementCurrentSNR;
	double measurementVoltageAmplitude;
	double measurementCurrentAmplitude;
	double measurementVoltagePhase;
	double measurementCurrentPhase;
	double measurementLoadImpedanceMagnitude;
	double measurementLoadImpedancePhase;
} SCD_Struct_Ha2;

typedef struct OpaqueFFTSetupD* OpaqueFFTSetupDRef;

