/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BrightnessControl.framework/BrightnessControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BrightnessControl/BrightnessControl-Structs.h>
#import <BrightnessControl/BCBrtControl.h>

@interface BCAppleBacklightBrtControl : BCBrtControl {

	unsigned _backlightService;
	double _minUser;
	double _maxUser;
	double _minMilliAmps;
	double _maxMilliAmps;
	double _maxNitsEDR;
	BOOL _isDFR;
	BOOL _isDCP;
	BOOL _override;
	BOOL _energySaving;
	unsigned long long _thermalMitigation;
	SCD_Struct_BC0* _terminationCallback;
	IONotificationPortRef _terminationNotifPort;
	unsigned _terminationIterator;

}

@property (readonly) unsigned long long registryID; 
+(id)newMonitorWithHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
+(id)copyAvailableControls;
-(id)init;
-(void)dealloc;
-(unsigned long long)registryID;
-(id)initWithService:(unsigned)arg1 ;
-(id)ID;
-(id)copyModuleIdentifier;
-(BOOL)setNits:(double)arg1 error:(id*)arg2 ;
-(double)getNitsWithError:(id*)arg1 ;
-(BOOL)setProperty:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(id)copyProperty:(id)arg1 error:(id*)arg2 ;
-(void)setDisplayService:(unsigned)arg1 ;
@end

