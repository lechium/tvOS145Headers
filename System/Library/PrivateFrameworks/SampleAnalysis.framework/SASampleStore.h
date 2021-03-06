/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSMutableArray, SATimestamp, SAWSUpdateDataStore, SABinaryLocator, NSMutableSet, NSString, SAMountStatusTracker, SAFrame, SATask, SATimeRange, NSArray, SASharedCache, NSDictionary;

@interface SASampleStore : NSObject <NSSecureCoding> {

	NSMutableDictionary* _tasksByUniquePid;
	NSMutableDictionary* _tasksByPid;
	NSMutableArray* _sampleTimestamps;
	unsigned long long _numSamples;
	SATimestamp* _startTime;
	SATimestamp* _endTime;
	NSMutableArray* _hidEvents;
	NSMutableArray* _fanSpeeds;
	NSMutableArray* _kernelCaches;
	NSMutableArray* _sharedCaches;
	SAWSUpdateDataStore* _wsDataStore;
	SABinaryLocator* _binaryLocator;
	NSMutableSet* _pidsToTrack;
	int _targetProcessId;
	unsigned long long _targetThreadId;
	mach_timebase_info _machTimebase;
	CSArchitecture _arch;
	unsigned _threadPolicyVersion;
	unsigned long long _previousSampleTimestamp;
	unsigned _previousStackshotBufferSize;
	BOOL _sampleOnlyMainThreads;
	BOOL _nextSampleIsFirstSamplingAllThreads;
	BOOL _stackshotsOnlyIncludeSpecificProcesses;
	BOOL _nextSampleIsFirstSamplingAllProcesses;
	BOOL _haveKPerfSched;
	double _sampleIntervalLimit;
	NSMutableArray* _namesToUseDsymForUUID;
	NSMutableArray* _idsToUseDsymForUUID;
	BOOL _bulkSymbolicationFailed;
	unsigned long long _numMicrostackshotsSkippedDueToMissingLoadInfos;
	unsigned long long _targetHIDEventMachAbs;
	NSMutableDictionary* _processAddressTranslations;
	BOOL _attemptedResampling;
	BOOL _keepMicrostackshotsWithoutLoadInfo;
	BOOL _sanitizePaths;
	BOOL _omitSensitiveStrings;
	BOOL _shouldGatherKextStat;
	unsigned _workQueueSoftThreadLimit;
	unsigned _workQueueHardThreadLimit;
	unsigned _numActiveCPUs;
	unsigned long long _dataSource;
	unsigned long long _dataStyle;
	double _attemptedSamplingInterval;
	NSString* _reason;
	double _lastWakeTime;
	SAMountStatusTracker* _mountStatusTracker;
	SAFrame* _cpuSignalHandlerStackLeafKernelFrame;
	unsigned long long _dataGatheringOptions;
	SATimestamp* _timeWhenTransitionedToSamplingAllThreads;
	SATimestamp* _timeWhenTransitionedToSamplingAllProcesses;
	NSString* _kextStat;
	NSString* _kernelVersion;
	NSString* _osProductName;
	NSString* _osProductVersion;
	NSString* _osBuildVersion;
	NSString* _hardwareModel;
	NSString* _bootArgs;
	unsigned long long _targetHIDEventEndMachAbs;
	SATask* _targetProcess;
	NSString* _customOutput;
	double _cpuUsed;
	double _cpuDuration;
	double _cpuLimit;
	double _cpuLimitDuration;
	unsigned long long _numWakeups;
	double _wakeupsDuration;
	unsigned long long _numWakeupsLimit;
	double _wakeupsLimitDuration;
	unsigned long long _bytesWritten;
	double _writeDuration;
	unsigned long long _bytesWrittenLimit;
	double _writeLimitDuration;
	NSString* _event;
	NSString* _eventNote;
	SATimeRange* _eventTimeRange;
	NSString* _signature;
	NSString* _actionTaken;
	double _extraDuration;
	NSString* _durationNote;
	NSString* _stepsNote;
	double _reportTimeThreshold;
	NSArray* _previousSAVersions;
	SASharedCache* _mostRecentNativeSharedCache;

}

@property (assign) BOOL keepStateBetweenSampleIndexes; 
@property (assign) double kPerfPETSampleIntervalLimit; 
@property (assign) BOOL haveKPerfSched; 
@property (readonly) unsigned long long dataSource; 
@property (readonly) unsigned long long dataStyle; 
@property (assign) double attemptedSamplingInterval;                                        //@synthesize attemptedSamplingInterval=_attemptedSamplingInterval - In the implementation block
@property (readonly) NSDictionary * tasksByUniquePid;                                       //@synthesize tasksByUniquePid=_tasksByUniquePid - In the implementation block
@property (readonly) NSDictionary * tasksByPid;                                             //@synthesize tasksByPid=_tasksByPid - In the implementation block
@property (readonly) NSArray * sampleTimestamps;                                            //@synthesize sampleTimestamps=_sampleTimestamps - In the implementation block
@property (readonly) unsigned long long numSamples; 
@property (readonly) SATimestamp * startTime; 
@property (readonly) SATimestamp * endTime; 
@property (readonly) mach_timebase_info machTimebase; 
@property (copy) NSString * reason;                                                         //@synthesize reason=_reason - In the implementation block
@property (readonly) double lastWakeTime;                                                   //@synthesize lastWakeTime=_lastWakeTime - In the implementation block
@property (readonly) NSArray * kernelCaches;                                                //@synthesize kernelCaches=_kernelCaches - In the implementation block
@property (readonly) NSArray * sharedCaches;                                                //@synthesize sharedCaches=_sharedCaches - In the implementation block
@property (readonly) SAMountStatusTracker * mountStatusTracker;                             //@synthesize mountStatusTracker=_mountStatusTracker - In the implementation block
@property (readonly) NSArray * hidEvents;                                                   //@synthesize hidEvents=_hidEvents - In the implementation block
@property (assign) BOOL keepMicrostackshotsWithoutLoadInfo;                                 //@synthesize keepMicrostackshotsWithoutLoadInfo=_keepMicrostackshotsWithoutLoadInfo - In the implementation block
@property (readonly) SAFrame * cpuSignalHandlerStackLeafKernelFrame;                        //@synthesize cpuSignalHandlerStackLeafKernelFrame=_cpuSignalHandlerStackLeafKernelFrame - In the implementation block
@property (assign) unsigned long long dataGatheringOptions;                                 //@synthesize dataGatheringOptions=_dataGatheringOptions - In the implementation block
@property (assign) BOOL sampleOnlyMainThreads; 
@property (readonly) SATimestamp * timeWhenTransitionedToSamplingAllThreads;                //@synthesize timeWhenTransitionedToSamplingAllThreads=_timeWhenTransitionedToSamplingAllThreads - In the implementation block
@property (assign) BOOL stackshotsOnlyIncludeSpecificProcesses; 
@property (readonly) SATimestamp * timeWhenTransitionedToSamplingAllProcesses;              //@synthesize timeWhenTransitionedToSamplingAllProcesses=_timeWhenTransitionedToSamplingAllProcesses - In the implementation block
@property (assign) BOOL sanitizePaths;                                                      //@synthesize sanitizePaths=_sanitizePaths - In the implementation block
@property (assign) BOOL omitSensitiveStrings;                                               //@synthesize omitSensitiveStrings=_omitSensitiveStrings - In the implementation block
@property (assign) BOOL shouldGatherKextStat;                                               //@synthesize shouldGatherKextStat=_shouldGatherKextStat - In the implementation block
@property (copy,readonly) NSString * kextStat;                                              //@synthesize kextStat=_kextStat - In the implementation block
@property (readonly) NSString * kernelVersion;                                              //@synthesize kernelVersion=_kernelVersion - In the implementation block
@property (copy) NSString * osProductName;                                                  //@synthesize osProductName=_osProductName - In the implementation block
@property (copy) NSString * osProductVersion;                                               //@synthesize osProductVersion=_osProductVersion - In the implementation block
@property (copy) NSString * osBuildVersion;                                                 //@synthesize osBuildVersion=_osBuildVersion - In the implementation block
@property (copy) NSString * machineArchitecture; 
@property (readonly) unsigned workQueueSoftThreadLimit;                                     //@synthesize workQueueSoftThreadLimit=_workQueueSoftThreadLimit - In the implementation block
@property (readonly) unsigned workQueueHardThreadLimit;                                     //@synthesize workQueueHardThreadLimit=_workQueueHardThreadLimit - In the implementation block
@property (copy) NSString * hardwareModel;                                                  //@synthesize hardwareModel=_hardwareModel - In the implementation block
@property (assign) unsigned numActiveCPUs;                                                  //@synthesize numActiveCPUs=_numActiveCPUs - In the implementation block
@property (copy) NSString * bootArgs;                                                       //@synthesize bootArgs=_bootArgs - In the implementation block
@property (assign) int targetProcessId; 
@property (assign) unsigned long long targetThreadId; 
@property (assign) unsigned long long targetHIDEventMachAbs; 
@property (assign) unsigned long long targetHIDEventEndMachAbs;                             //@synthesize targetHIDEventEndMachAbs=_targetHIDEventEndMachAbs - In the implementation block
@property (readonly) SATask * targetProcess;                                                //@synthesize targetProcess=_targetProcess - In the implementation block
@property (copy) NSString * customOutput;                                                   //@synthesize customOutput=_customOutput - In the implementation block
@property (assign) double cpuUsed;                                                          //@synthesize cpuUsed=_cpuUsed - In the implementation block
@property (assign) double cpuDuration;                                                      //@synthesize cpuDuration=_cpuDuration - In the implementation block
@property (assign) double cpuLimit;                                                         //@synthesize cpuLimit=_cpuLimit - In the implementation block
@property (assign) double cpuLimitDuration;                                                 //@synthesize cpuLimitDuration=_cpuLimitDuration - In the implementation block
@property (assign) unsigned long long numWakeups;                                           //@synthesize numWakeups=_numWakeups - In the implementation block
@property (assign) double wakeupsDuration;                                                  //@synthesize wakeupsDuration=_wakeupsDuration - In the implementation block
@property (assign) unsigned long long numWakeupsLimit;                                      //@synthesize numWakeupsLimit=_numWakeupsLimit - In the implementation block
@property (assign) double wakeupsLimitDuration;                                             //@synthesize wakeupsLimitDuration=_wakeupsLimitDuration - In the implementation block
@property (assign) unsigned long long bytesWritten;                                         //@synthesize bytesWritten=_bytesWritten - In the implementation block
@property (assign) double writeDuration;                                                    //@synthesize writeDuration=_writeDuration - In the implementation block
@property (assign) unsigned long long bytesWrittenLimit;                                    //@synthesize bytesWrittenLimit=_bytesWrittenLimit - In the implementation block
@property (assign) double writeLimitDuration;                                               //@synthesize writeLimitDuration=_writeLimitDuration - In the implementation block
@property (copy) NSString * event;                                                          //@synthesize event=_event - In the implementation block
@property (copy) NSString * eventNote;                                                      //@synthesize eventNote=_eventNote - In the implementation block
@property (copy) SATimeRange * eventTimeRange;                                              //@synthesize eventTimeRange=_eventTimeRange - In the implementation block
@property (copy) NSString * signature;                                                      //@synthesize signature=_signature - In the implementation block
@property (copy) NSString * actionTaken;                                                    //@synthesize actionTaken=_actionTaken - In the implementation block
@property (assign) double extraDuration;                                                    //@synthesize extraDuration=_extraDuration - In the implementation block
@property (copy) NSString * durationNote;                                                   //@synthesize durationNote=_durationNote - In the implementation block
@property (copy) NSString * stepsNote;                                                      //@synthesize stepsNote=_stepsNote - In the implementation block
@property (assign) double reportTimeThreshold;                                              //@synthesize reportTimeThreshold=_reportTimeThreshold - In the implementation block
@property (readonly) NSString * targetProcessName; 
@property (readonly) NSString * targetProcessAbsolutePath; 
@property (readonly) NSString * targetProcessBundleName; 
@property (readonly) NSString * targetProcessBundleVersion; 
@property (readonly) NSString * targetProcessBundleShortVersion; 
@property (readonly) NSString * targetProcessBundleBuildVersion; 
@property (readonly) NSString * targetProcessBundleProjectName; 
@property (readonly) NSString * targetProcessBundleSourceVersion; 
@property (readonly) NSString * targetProcessBundleProductBuildVersion; 
@property (readonly) NSString * targetProcessBundleId; 
@property (readonly) NSString * targetProcessCommerceAppID; 
@property (readonly) NSString * targetProcessCommerceExternalID; 
@property (readonly) NSString * targetProcessVendorID; 
+(BOOL)supportsSecureCoding;
+(BOOL)canOpenFileAsKTraceFile:(const char*)arg1 errorOut:(id*)arg2 ;
+(id)sampleStoreForSpindumpFile:(const char*)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(SATimestamp *)startTime;
-(NSString *)event;
-(NSString *)signature;
-(void)setReason:(NSString *)arg1 ;
-(SATask *)targetProcess;
-(void)setEvent:(NSString *)arg1 ;
-(unsigned long long)dataSource;
-(SATimestamp *)endTime;
-(void)setSignature:(NSString *)arg1 ;
-(NSString *)hardwareModel;
-(void)setHardwareModel:(NSString *)arg1 ;
-(unsigned long long)bytesWritten;
-(void)setBytesWritten:(unsigned long long)arg1 ;
-(NSString *)osBuildVersion;
-(unsigned long long)numSamples;
-(NSString *)bootArgs;
-(void)symbolicate;
-(NSString *)targetProcessName;
-(NSDictionary *)tasksByPid;
-(unsigned long long)dataStyle;
-(NSArray *)sampleTimestamps;
-(void)gatherMachineArchitecture;
-(void)enumerateTasks:(/*^block*/id)arg1 ;
-(unsigned long long)addKCDataStackshot:(id)arg1 returningTimestamp:(id*)arg2 ;
-(NSString *)osProductName;
-(BOOL)keepMicrostackshotsWithoutLoadInfo;
-(unsigned long long)targetHIDEventMachAbs;
-(void)setTargetHIDEventMachAbs:(unsigned long long)arg1 ;
-(BOOL)haveKPerfSched;
-(void)setHaveKPerfSched:(BOOL)arg1 ;
-(double)kPerfPETSampleIntervalLimit;
-(void)setKPerfPETSampleIntervalLimit:(double)arg1 ;
-(void)useDsymForUUIDFor:(id)arg1 ;
-(id)fanSpeedClosestToTimestamp:(id)arg1 ;
-(BOOL)setTargetProcessWithHint:(id)arg1 ;
-(unsigned long long)targetThreadId;
-(void)setTargetThreadId:(unsigned long long)arg1 ;
-(int)targetProcessId;
-(void)setTargetProcessId:(int)arg1 ;
-(NSString *)targetProcessAbsolutePath;
-(NSString *)targetProcessBundleName;
-(NSString *)targetProcessBundleVersion;
-(NSString *)targetProcessBundleShortVersion;
-(NSString *)targetProcessBundleBuildVersion;
-(NSString *)targetProcessBundleProjectName;
-(NSString *)targetProcessBundleSourceVersion;
-(NSString *)targetProcessBundleProductBuildVersion;
-(NSString *)targetProcessBundleId;
-(NSString *)targetProcessCommerceAppID;
-(NSString *)targetProcessCommerceExternalID;
-(NSString *)targetProcessVendorID;
-(BOOL)cacheLoadInfoForProcess:(int)arg1 ;
-(void)addAuxiliaryData:(id)arg1 ;
-(void)startingSamplingLiveSystem;
-(void)finishedSamplingLiveSystem;
-(void)postprocess;
-(id)initForLiveSampling;
-(id)initForFileParsing;
-(void)setSampleOnlyMainThreads:(BOOL)arg1 ;
-(BOOL)sampleOnlyMainThreads;
-(void)setStackshotsOnlyIncludeSpecificProcesses:(BOOL)arg1 ;
-(BOOL)stackshotsOnlyIncludeSpecificProcesses;
-(unsigned long long)indexOfFirstSampleOnOrAfterTimestamp:(id)arg1 ;
-(unsigned long long)indexOfLastSampleOnOrBeforeTimestamp:(id)arg1 ;
-(void)addProcessInfoFromTailspin:(id)arg1 ;
-(unsigned long long)addKCDataStackshots:(id)arg1 createSeparateSamplePerStackshot:(BOOL)arg2 ;
-(unsigned long long)addKCDataStackshot:(id)arg1 ;
-(int)addMicrostackshotsFromFile:(id)arg1 ofTypes:(unsigned)arg2 inTimeRangeStart:(double)arg3 end:(double)arg4 onlyPid:(int)arg5 onlyTid:(unsigned long long)arg6 ;
-(long long)addMicrostackshotsFromData:(id)arg1 ofTypes:(unsigned)arg2 inTimeRangeStart:(double)arg3 end:(double)arg4 onlyPid:(int)arg5 onlyTid:(unsigned long long)arg6 ;
-(BOOL)findCpuSignalHandlerStackLeafKernelFrame;
-(NSString *)machineArchitecture;
-(void)setMachineArchitecture:(NSString *)arg1 ;
-(mach_timebase_info)machTimebase;
-(id)callTreeForTask:(id)arg1 options:(id)arg2 ;
-(id)callTreeForThreadsInTask:(id)arg1 options:(id)arg2 ;
-(id)callTreeForDispatchQueue:(id)arg1 andThread:(id)arg2 inTask:(id)arg3 options:(id)arg4 ;
-(id)callTreeForThread:(id)arg1 inTask:(id)arg2 options:(id)arg3 ;
-(id)callTreeForExecutable:(id)arg1 options:(id)arg2 ;
-(NSDictionary *)tasksByUniquePid;
-(NSArray *)hidEvents;
-(NSArray *)kernelCaches;
-(NSArray *)sharedCaches;
-(double)attemptedSamplingInterval;
-(void)setAttemptedSamplingInterval:(double)arg1 ;
-(double)lastWakeTime;
-(SAMountStatusTracker *)mountStatusTracker;
-(void)setKeepMicrostackshotsWithoutLoadInfo:(BOOL)arg1 ;
-(SAFrame *)cpuSignalHandlerStackLeafKernelFrame;
-(unsigned long long)dataGatheringOptions;
-(void)setDataGatheringOptions:(unsigned long long)arg1 ;
-(SATimestamp *)timeWhenTransitionedToSamplingAllThreads;
-(SATimestamp *)timeWhenTransitionedToSamplingAllProcesses;
-(BOOL)sanitizePaths;
-(void)setSanitizePaths:(BOOL)arg1 ;
-(BOOL)omitSensitiveStrings;
-(void)setOmitSensitiveStrings:(BOOL)arg1 ;
-(BOOL)shouldGatherKextStat;
-(void)setShouldGatherKextStat:(BOOL)arg1 ;
-(NSString *)kextStat;
-(NSString *)kernelVersion;
-(void)setOsProductName:(NSString *)arg1 ;
-(NSString *)osProductVersion;
-(void)setOsProductVersion:(NSString *)arg1 ;
-(void)setOsBuildVersion:(NSString *)arg1 ;
-(unsigned)workQueueSoftThreadLimit;
-(unsigned)workQueueHardThreadLimit;
-(unsigned)numActiveCPUs;
-(void)setNumActiveCPUs:(unsigned)arg1 ;
-(void)setBootArgs:(NSString *)arg1 ;
-(unsigned long long)targetHIDEventEndMachAbs;
-(void)setTargetHIDEventEndMachAbs:(unsigned long long)arg1 ;
-(NSString *)customOutput;
-(void)setCustomOutput:(NSString *)arg1 ;
-(double)cpuUsed;
-(void)setCpuUsed:(double)arg1 ;
-(double)cpuDuration;
-(void)setCpuDuration:(double)arg1 ;
-(double)cpuLimit;
-(void)setCpuLimit:(double)arg1 ;
-(double)cpuLimitDuration;
-(void)setCpuLimitDuration:(double)arg1 ;
-(unsigned long long)numWakeups;
-(void)setNumWakeups:(unsigned long long)arg1 ;
-(double)wakeupsDuration;
-(void)setWakeupsDuration:(double)arg1 ;
-(unsigned long long)numWakeupsLimit;
-(void)setNumWakeupsLimit:(unsigned long long)arg1 ;
-(double)wakeupsLimitDuration;
-(void)setWakeupsLimitDuration:(double)arg1 ;
-(double)writeDuration;
-(void)setWriteDuration:(double)arg1 ;
-(unsigned long long)bytesWrittenLimit;
-(void)setBytesWrittenLimit:(unsigned long long)arg1 ;
-(double)writeLimitDuration;
-(void)setWriteLimitDuration:(double)arg1 ;
-(NSString *)eventNote;
-(void)setEventNote:(NSString *)arg1 ;
-(SATimeRange *)eventTimeRange;
-(void)setEventTimeRange:(SATimeRange *)arg1 ;
-(NSString *)actionTaken;
-(void)setActionTaken:(NSString *)arg1 ;
-(double)extraDuration;
-(void)setExtraDuration:(double)arg1 ;
-(NSString *)durationNote;
-(void)setDurationNote:(NSString *)arg1 ;
-(NSString *)stepsNote;
-(void)setStepsNote:(NSString *)arg1 ;
-(double)reportTimeThreshold;
-(void)setReportTimeThreshold:(double)arg1 ;
-(BOOL)keepStateBetweenSampleIndexes;
-(void)setKeepStateBetweenSampleIndexes:(BOOL)arg1 ;
-(id)tidToPidDict;
-(id)tidsForPid:(int)arg1 ;
-(id)idleThreadSet;
-(BOOL)parseStackshotsFromKTraceFile:(const char*)arg1 warningsOut:(id)arg2 errorOut:(id*)arg3 ;
-(BOOL)parseKTraceFile:(const char*)arg1 warningsOut:(id)arg2 errorOut:(id*)arg3 ;
-(id)binaryFormat;
-(BOOL)saveBinaryFormatToStream:(_sFILE*)arg1 ;
@end

