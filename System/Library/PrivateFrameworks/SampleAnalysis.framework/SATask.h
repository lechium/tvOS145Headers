/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class NSMutableArray, NSMutableDictionary, NSString, SABinary, SATimestamp, NSArray, SASharedCache, SAThread, NSMutableSet, SABinaryLoadInfo, NSDictionary;

@interface SATask : NSObject <SASerializable> {

	NSMutableArray* _taskStates;
	NSMutableDictionary* _threads;
	NSMutableDictionary* _dispatchQueues;
	NSString* _mainBinaryPath;
	SABinary* _mainBinary;
	NSString* _name;
	BOOL _alreadyAttemptedToGetLoadInfoFromLiveProcess;
	BOOL _isBeta;
	BOOL _isUnresponsive;
	BOOL _usesSuddenTermination;
	BOOL _allowsIdleExit;
	BOOL _isTranslocated;
	BOOL _alreadyGatheredDataFromLiveProcess;
	BOOL _noSharedCache;
	BOOL _assumeBinaryLoadInfosContainsMainBinary;
	int _pid;
	int _ppid;
	int _rpid;
	unsigned _uid;
	unsigned long long _uniquePid;
	NSString* _bundleName;
	NSString* _bundleBuildVersion;
	NSString* _bundleProjectName;
	NSString* _bundleSourceVersion;
	NSString* _bundleProductBuildVersion;
	NSString* _commerceAppID;
	NSString* _commerceExternalID;
	unsigned long long _adamID;
	NSString* _vendorID;
	NSString* _appType;
	NSString* _cohortID;
	SATimestamp* _execTimestamp;
	SATimestamp* _exitTimestamp;
	double _timeOfLastResponse;
	NSArray* _binaryLoadInfos;
	SASharedCache* _sharedCache;
	SAThread* _mainThread;
	SATimestamp* _pidStartTimestamp;
	NSMutableSet* _rootFrames;
	CSArchitecture _architecture;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) int pid; 
@property (readonly) int ppid; 
@property (readonly) int rpid; 
@property (readonly) unsigned uid;                                       //@synthesize uid=_uid - In the implementation block
@property (readonly) unsigned long long uniquePid;                       //@synthesize uniquePid=_uniquePid - In the implementation block
@property (copy,readonly) NSString * name; 
@property (readonly) NSString * bundleName; 
@property (readonly) NSString * bundleVersion; 
@property (readonly) NSString * bundleShortVersion; 
@property (readonly) NSString * bundleBuildVersion; 
@property (readonly) NSString * bundleProjectName; 
@property (readonly) NSString * bundleSourceVersion; 
@property (readonly) NSString * bundleProductBuildVersion; 
@property (readonly) NSString * bundleIdentifier; 
@property (readonly) NSString * commerceAppID; 
@property (readonly) NSString * commerceExternalID; 
@property (readonly) unsigned long long adamID; 
@property (readonly) NSString * vendorID; 
@property (readonly) NSString * appType; 
@property (readonly) BOOL isBeta; 
@property (readonly) NSString * cohortID; 
@property (readonly) SATimestamp * execTimestamp; 
@property (readonly) SATimestamp * exitTimestamp; 
@property (readonly) BOOL isUnresponsive;                                //@synthesize isUnresponsive=_isUnresponsive - In the implementation block
@property (readonly) double timeOfLastResponse;                          //@synthesize timeOfLastResponse=_timeOfLastResponse - In the implementation block
@property (readonly) BOOL usesSuddenTermination;                         //@synthesize usesSuddenTermination=_usesSuddenTermination - In the implementation block
@property (readonly) BOOL allowsIdleExit;                                //@synthesize allowsIdleExit=_allowsIdleExit - In the implementation block
@property (readonly) BOOL isTranslocated;                                //@synthesize isTranslocated=_isTranslocated - In the implementation block
@property (readonly) NSArray * binaryLoadInfos;                          //@synthesize binaryLoadInfos=_binaryLoadInfos - In the implementation block
@property (readonly) SASharedCache * sharedCache; 
@property (readonly) SABinaryLoadInfo * mainBinaryLoadInfo; 
@property (copy) NSString * mainBinaryPath; 
@property (readonly) SABinary * mainBinary; 
@property (readonly) NSArray * taskStates;                               //@synthesize taskStates=_taskStates - In the implementation block
@property (readonly) SAThread * mainThread; 
@property (readonly) NSDictionary * threads;                             //@synthesize threads=_threads - In the implementation block
@property (readonly) NSDictionary * dispatchQueues;                      //@synthesize dispatchQueues=_dispatchQueues - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)debugDescription;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(SAThread *)mainThread;
-(int)pid;
-(BOOL)isBeta;
-(NSString *)bundleVersion;
-(NSString *)bundleName;
-(SASharedCache *)sharedCache;
-(id)startTimestamp;
-(id)endTimestamp;
-(NSString *)appType;
-(NSString *)vendorID;
-(unsigned)uid;
-(unsigned long long)adamID;
-(NSString *)cohortID;
-(NSString *)bundleShortVersion;
-(int)ppid;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA26*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(SATimestamp *)exitTimestamp;
-(SATimestamp *)execTimestamp;
-(NSArray *)taskStates;
-(NSDictionary *)threads;
-(unsigned long long)uniquePid;
-(NSString *)mainBinaryPath;
-(NSString *)bundleBuildVersion;
-(NSString *)bundleProjectName;
-(NSString *)bundleSourceVersion;
-(NSString *)bundleProductBuildVersion;
-(NSString *)commerceAppID;
-(NSString *)commerceExternalID;
-(NSArray *)binaryLoadInfos;
-(SABinaryLoadInfo *)mainBinaryLoadInfo;
-(NSDictionary *)dispatchQueues;
-(SABinary *)mainBinary;
-(void)enumerateTaskStatesBetweenStartTime:(id)arg1 endTime:(id)arg2 reverseOrder:(BOOL)arg3 withSampleIndex:(BOOL)arg4 block:(/*^block*/id)arg5 ;
-(unsigned long long)sampleCountInTimestampRangeStart:(id)arg1 end:(id)arg2 ;
-(unsigned long long)indexOfFirstTaskStateOnOrAfterTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(unsigned long long)indexOfLastTaskStateOnOrBeforeTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(int)rpid;
-(BOOL)isTranslocated;
-(BOOL)isUnresponsive;
-(double)timeOfLastResponse;
-(void)cpuTimeNs:(unsigned long long*)arg1 cpuInstructions:(unsigned long long*)arg2 cpuCycles:(unsigned long long*)arg3 betweenStartTime:(id)arg4 endTime:(id)arg5 ;
-(id)architectureString;
-(BOOL)usesSuddenTermination;
-(BOOL)allowsIdleExit;
-(id)initWithPid:(int)arg1 andUniquePid:(unsigned long long)arg2 andName:(id)arg3 sharedCache:(id)arg4 ;
-(id)initWithKCDataTask:(const task_snapshot_v2*)arg1 loadInfos:(const dyld_uuid_info_64*)arg2 numLoadInfos:(unsigned)arg3 textExecLoadInfos:(const dyld_uuid_info_64*)arg4 numTextExecLoadInfos:(unsigned)arg5 architecture:(CSArchitecture)arg6 sharedCache:(id)arg7 ;
-(id)initWithKCDataDeltaTask:(const task_delta_snapshot_v2*)arg1 loadInfos:(const dyld_uuid_info_64*)arg2 numLoadInfos:(unsigned)arg3 textExecLoadInfos:(const dyld_uuid_info_64*)arg4 numTextExecLoadInfos:(unsigned)arg5 pid:(int)arg6 sharedCache:(id)arg7 ;
-(id)initWithStackshotTaskV1:(const task_snapshot*)arg1 loadInfos:(const dyld_uuid_info_64*)arg2 numLoadInfos:(unsigned)arg3 sharedCache:(id)arg4 ;
-(void)setMainBinaryPath:(NSString *)arg1 ;
-(id)lastTaskStateOnOrBeforeTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
-(id)firstTaskStateOnOrAfterTime:(id)arg1 withSampleIndex:(BOOL)arg2 ;
@end

