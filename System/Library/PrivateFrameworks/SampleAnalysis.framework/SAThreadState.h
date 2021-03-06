/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SATimestamp, SAFrame, SAWaitInfo, SATurnstileInfo, NSString, SADispatchQueue;

@interface SAThreadState : NSObject <SASerializable, NSCopying> {

	unsigned char _cpuNum;
	unsigned char _basePriority;
	unsigned char _scheduledPriority;
	unsigned _threadQos : 3;
	unsigned _threadRequestedQos : 3;
	unsigned _isSuspended : 1;
	unsigned _isIOPassive : 1;
	unsigned _startSampleIndex : 30;
	unsigned _isDarwinBG : 1;
	unsigned _isIdleWorkQueue : 1;
	unsigned _endSampleIndex : 30;
	unsigned _isRunning : 1;
	unsigned _filledName : 1;
	unsigned _filledDispatchQueue : 1;
	unsigned _filledUserStack : 1;
	unsigned _filledScheduling : 1;
	unsigned _filledCyclesInstructions : 1;
	unsigned _filledSnapshot : 1;
	unsigned _threadRequestedQosOverride : 3;
	unsigned _threadQosPromote : 3;
	unsigned _threadQosKEventOverride : 3;
	unsigned _threadQosWorkQueueOverride : 3;
	unsigned _threadQosWorkloopServicerOverride : 3;
	unsigned _isPromotedAboveTask : 1;
	unsigned char _ioTier;
	unsigned char _threadQosIpcOverride;
	unsigned char _threadQosSyncIpcOverride;
	unsigned _schedulerFlags;
	unsigned _state;
	SATimestamp* _startTimestamp;
	SATimestamp* _endTimestamp;
	SAFrame* _leafUserFrame;
	SAFrame* _leafKernelFrame;
	SAWaitInfo* _waitInfo;
	SATurnstileInfo* _turnstileInfo;
	NSString* _name;
	SADispatchQueue* _dispatchQueue;
	unsigned long long _voucherIdentifier;
	unsigned long long _userTimeInNs;
	unsigned long long _systemTimeInNs;
	unsigned long long _instructions;
	unsigned long long _cycles;
	SATimestamp* _timestampLastMadeRunnable;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL filledName; 
@property (assign) BOOL filledDispatchQueue; 
@property (assign) BOOL filledUserStack; 
@property (assign) BOOL filledScheduling; 
@property (assign) BOOL filledCyclesInstructions; 
@property (assign) BOOL filledSnapshot; 
@property (readonly) unsigned char microstackshotFlags; 
@property (readonly) SATimestamp * startTimestamp; 
@property (readonly) SATimestamp * endTimestamp; 
@property (readonly) unsigned long long startSampleIndex; 
@property (readonly) unsigned long long endSampleIndex; 
@property (readonly) SAFrame * leafUserFrame; 
@property (readonly) SAFrame * leafKernelFrame; 
@property (readonly) SAWaitInfo * waitInfo; 
@property (readonly) SATurnstileInfo * turnstileInfo; 
@property (readonly) NSString * name; 
@property (__weak,readonly) SADispatchQueue * dispatchQueue; 
@property (readonly) unsigned long long voucherIdentifier; 
@property (readonly) unsigned long long userTimeInNs; 
@property (readonly) unsigned long long systemTimeInNs; 
@property (readonly) unsigned long long cpuTimeNs; 
@property (readonly) unsigned long long instructions; 
@property (readonly) unsigned long long cycles; 
@property (readonly) int basePriority; 
@property (readonly) int scheduledPriority; 
@property (readonly) unsigned schedulerFlags; 
@property (readonly) SATimestamp * timestampLastMadeRunnable; 
@property (readonly) unsigned char threadQos; 
@property (readonly) unsigned char threadRequestedQos; 
@property (readonly) unsigned char threadRequestedQosOverride; 
@property (readonly) unsigned char threadQosPromote; 
@property (readonly) unsigned char threadQosKEventOverride; 
@property (readonly) unsigned char threadQosWorkQueueOverride; 
@property (readonly) unsigned char threadQosWorkloopServicerOverride; 
@property (readonly) BOOL isPromotedAboveTask; 
@property (readonly) unsigned char ioTier; 
@property (readonly) BOOL isIOPassive; 
@property (readonly) BOOL isSuspended; 
@property (readonly) BOOL isDarwinBG; 
@property (readonly) BOOL isIdleWorkQueue; 
@property (readonly) BOOL isRunning; 
@property (readonly) unsigned cpuNum; 
@property (readonly) BOOL hasDispatchQueue; 
@property (readonly) BOOL isWaiting; 
@property (readonly) BOOL isStopped; 
@property (readonly) BOOL isRunnable; 
@property (readonly) BOOL isWaitingUninterruptibly; 
@property (readonly) BOOL isHaltedAtTermination; 
@property (readonly) BOOL isAbortingInterruptibleWaits; 
@property (readonly) BOOL isAbortingInterruptibleWaitsAtSafePoints; 
@property (readonly) BOOL isMicrostackshot; 
@property (readonly) BOOL isUserMode; 
@property (readonly) BOOL isInterruptRecord; 
@property (readonly) BOOL isTimerArmingRecord; 
@property (readonly) BOOL isIORecord; 
@property (readonly) BOOL isBatteryAndUserActivityValid; 
@property (readonly) BOOL isUserActive; 
@property (readonly) BOOL isOnBattery; 
@property (readonly) unsigned cpuSpeedMhz; 
@property (readonly) unsigned char threadQosIpcOverride;                           //@synthesize threadQosIpcOverride=_threadQosIpcOverride - In the implementation block
@property (readonly) unsigned char threadQosSyncIpcOverride;                       //@synthesize threadQosSyncIpcOverride=_threadQosSyncIpcOverride - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)stateWithStartTimestamp:(id)arg1 endTimestamp:(id)arg2 startSampleIndex:(unsigned long long)arg3 endSampleIndex:(unsigned long long)arg4 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(int)basePriority;
-(BOOL)isStopped;
-(BOOL)isSuspended;
-(BOOL)isRunning;
-(SADispatchQueue *)dispatchQueue;
-(SATimestamp *)startTimestamp;
-(SATimestamp *)endTimestamp;
-(unsigned long long)instructions;
-(BOOL)isWaiting;
-(id)stack;
-(BOOL)isUserActive;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA17*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(unsigned long long)endSampleIndex;
-(unsigned long long)startSampleIndex;
-(SAWaitInfo *)waitInfo;
-(SATurnstileInfo *)turnstileInfo;
-(unsigned long long)userTimeInNs;
-(unsigned long long)systemTimeInNs;
-(unsigned long long)cycles;
-(int)scheduledPriority;
-(unsigned)schedulerFlags;
-(unsigned long long)voucherIdentifier;
-(unsigned char)threadQos;
-(unsigned char)threadRequestedQos;
-(unsigned char)threadRequestedQosOverride;
-(unsigned char)ioTier;
-(BOOL)isDarwinBG;
-(BOOL)isIOPassive;
-(BOOL)isIdleWorkQueue;
-(SAFrame *)leafUserFrame;
-(SAFrame *)leafKernelFrame;
-(SATimestamp *)timestampLastMadeRunnable;
-(unsigned long long)cpuTimeNs;
-(BOOL)filledName;
-(void)setFilledName:(BOOL)arg1 ;
-(BOOL)filledDispatchQueue;
-(void)setFilledDispatchQueue:(BOOL)arg1 ;
-(BOOL)filledUserStack;
-(void)setFilledUserStack:(BOOL)arg1 ;
-(BOOL)filledScheduling;
-(void)setFilledScheduling:(BOOL)arg1 ;
-(BOOL)filledCyclesInstructions;
-(void)setFilledCyclesInstructions:(BOOL)arg1 ;
-(BOOL)filledSnapshot;
-(void)setFilledSnapshot:(BOOL)arg1 ;
-(BOOL)hasDispatchQueue;
-(id)initWithStartTimestamp:(id)arg1 endTimestamp:(id)arg2 startSampleIndex:(unsigned long long)arg3 endSampleIndex:(unsigned long long)arg4 ;
-(id)initWithKCDataThreadV2:(const thread_snapshot_v2*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(mach_timebase_info)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 ;
-(id)initWithKCDataThreadV4:(const thread_snapshot_v4*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(mach_timebase_info)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 threadPolicyVersion:(unsigned)arg12 threadInstructionCycles:(const instrs_cycles_snapshot*)arg13 ;
-(id)initWithKCDataDeltaThreadV2:(const thread_delta_snapshot_v2*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 oldThreadState:(id)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 ;
-(id)initWithKCDataDeltaThreadV3:(const thread_delta_snapshot_v3*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 oldThreadState:(id)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 threadPolicyVersion:(unsigned)arg12 ;
-(id)initWithStackshotThreadV1:(const thread_snapshot*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 leafUserFrame:(id)arg6 leafKernelFrame:(id)arg7 machTimebase:(mach_timebase_info)arg8 ;
-(id)stackIgnoringKernelStackWithLeafFrame:(id)arg1 ;
-(unsigned)cpuNum;
-(unsigned char)threadQosPromote;
-(unsigned char)threadQosKEventOverride;
-(unsigned char)threadQosWorkQueueOverride;
-(unsigned char)threadQosWorkloopServicerOverride;
-(BOOL)isPromotedAboveTask;
-(BOOL)isRunnable;
-(BOOL)isWaitingUninterruptibly;
-(BOOL)isHaltedAtTermination;
-(BOOL)isAbortingInterruptibleWaits;
-(BOOL)isAbortingInterruptibleWaitsAtSafePoints;
-(BOOL)isMicrostackshot;
-(BOOL)isInterruptRecord;
-(BOOL)isTimerArmingRecord;
-(BOOL)isIORecord;
-(BOOL)isUserMode;
-(BOOL)isBatteryAndUserActivityValid;
-(BOOL)isOnBattery;
-(unsigned)cpuSpeedMhz;
-(unsigned char)microstackshotFlags;
-(unsigned long long)sampleCountInSampleIndexRangeStart:(unsigned long long)arg1 end:(unsigned long long)arg2 ;
-(BOOL)hasSameStackAs:(id)arg1 ;
-(unsigned char)threadQosIpcOverride;
-(unsigned char)threadQosSyncIpcOverride;
@end

