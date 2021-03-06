/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Foundation/Foundation-Structs.h>
@class NSDictionary, NSArray, NSString;

@interface NSProcessInfo : NSObject {

	NSDictionary* environment;
	NSArray* arguments;
	NSString* hostName;
	NSString* name;
	long long automaticTerminationOptOutCounter;

}

@property (copy,readonly) NSString * userName; 
@property (copy,readonly) NSString * fullUserName; 
@property (getter=isMacCatalystApp,readonly) BOOL macCatalystApp; 
@property (getter=isiOSAppOnMac,readonly) BOOL iOSAppOnMac; 
@property (copy,readonly) NSDictionary * environment; 
@property (copy,readonly) NSArray * arguments; 
@property (copy,readonly) NSString * hostName; 
@property (copy) NSString * processName; 
@property (readonly) int processIdentifier; 
@property (copy,readonly) NSString * globallyUniqueString; 
@property (copy,readonly) NSString * operatingSystemVersionString; 
@property (readonly) SCD_Struct_NS56 operatingSystemVersion; 
@property (readonly) unsigned long long processorCount; 
@property (readonly) unsigned long long activeProcessorCount; 
@property (readonly) unsigned long long physicalMemory; 
@property (readonly) double systemUptime; 
@property (assign) BOOL automaticTerminationSupportEnabled; 
+(id)processInfo;
-(id)bs_jobLabel;
-(void)_disableAutomaticTerminationWithoutSettingRelaunchable:(id)arg1 ;
-(void)_enableAutomaticTerminationWithoutSettingRelaunchable:(id)arg1 ;
-(void)dealloc;
-(NSString *)hostName;
-(int)processIdentifier;
-(NSArray *)arguments;
-(NSString *)processName;
-(NSDictionary *)environment;
-(void)_registerForHardwareStateNotifications;
-(unsigned long long)operatingSystem;
-(void)setArguments:(NSArray *)arg1 ;
-(void)setProcessName:(NSString *)arg1 ;
-(NSString *)globallyUniqueString;
-(NSString *)userName;
-(id)userHomeDirectory;
-(id)operatingSystemName;
-(NSString *)operatingSystemVersionString;
-(SCD_Struct_NS56)operatingSystemVersion;
-(BOOL)isOperatingSystemAtLeastVersion:(SCD_Struct_NS56)arg1 ;
-(unsigned long long)processorCount;
-(unsigned long long)activeProcessorCount;
-(unsigned long long)physicalMemory;
-(BOOL)isTranslated;
-(double)systemUptime;
-(void)disableSuddenTermination;
-(void)enableSuddenTermination;
-(void)_exitIfSuddenTerminationEnabledWithStatus:(int)arg1 ;
-(void)_exitWhenSuddenTerminationEnabledWithStatus:(int)arg1 ;
-(long long)_suddenTerminationDisablingCount;
-(void)disableAutomaticTermination:(id)arg1 ;
-(void)enableAutomaticTermination:(id)arg1 ;
-(void)setAutomaticTerminationSupportEnabled:(BOOL)arg1 ;
-(BOOL)automaticTerminationSupportEnabled;
-(void)_disableAutomaticTerminationOnly:(id)arg1 ;
-(void)_enableAutomaticTerminationOnly:(id)arg1 ;
-(void)_reactivateActivity:(id)arg1 ;
-(void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)beginSuspensionOfSystemBehaviors:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)endSystemBehaviorSuspension:(id)arg1 ;
-(id)beginActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)endActivity:(id)arg1 ;
-(void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)performExpiringActivityWithReason:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(long long)thermalState;
-(BOOL)isLowPowerModeEnabled;
-(BOOL)isMacCatalystApp;
-(BOOL)isiOSAppOnMac;
@end

