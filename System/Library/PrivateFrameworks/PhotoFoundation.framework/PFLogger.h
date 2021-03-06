/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PFLoggerBackend, OS_dispatch_queue;
#import <PhotoFoundation/PhotoFoundation-Structs.h>
@class NSObject, NSArray, NSString, NSDictionary, NSSet;

@interface PFLogger : NSObject {

	BOOL _shouldLogToCrashReporter;
	BOOL _backendAllowsConcurrentAccess;
	int _logLevel;
	NSObject*<PFLoggerBackend> _backend;
	NSArray* _tracedSubsystems;
	NSArray* _debuggedSubsystems;
	NSString* _facilityPrefix;
	NSDictionary* _options;
	NSObject*<OS_dispatch_queue> _backendAccessSerializationQueue;
	NSObject*<OS_dispatch_queue> _recordedSubsystemsQueue;
	NSSet* _recordedSubsystems;

}

@property (retain) NSString * facilityPrefix;                                                 //@synthesize facilityPrefix=_facilityPrefix - In the implementation block
@property (retain) NSDictionary * options;                                                    //@synthesize options=_options - In the implementation block
@property (retain) NSObject*<PFLoggerBackend> backend;                                        //@synthesize backend=_backend - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> backendAccessSerializationQueue;              //@synthesize backendAccessSerializationQueue=_backendAccessSerializationQueue - In the implementation block
@property (assign) BOOL backendAllowsConcurrentAccess;                                        //@synthesize backendAllowsConcurrentAccess=_backendAllowsConcurrentAccess - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> recordedSubsystemsQueue;                      //@synthesize recordedSubsystemsQueue=_recordedSubsystemsQueue - In the implementation block
@property (retain) NSSet * recordedSubsystems;                                                //@synthesize recordedSubsystems=_recordedSubsystems - In the implementation block
@property (assign) int logLevel;                                                              //@synthesize logLevel=_logLevel - In the implementation block
@property (assign) BOOL shouldLogToCrashReporter;                                             //@synthesize shouldLogToCrashReporter=_shouldLogToCrashReporter - In the implementation block
@property (retain) NSArray * tracedSubsystems;                                                //@synthesize tracedSubsystems=_tracedSubsystems - In the implementation block
@property (retain) NSArray * debuggedSubsystems;                                              //@synthesize debuggedSubsystems=_debuggedSubsystems - In the implementation block
+(void)initialize;
+(id)defaultLogger;
+(void)logFromCodeLocation:(SCD_Struct_PF5*)arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4 ;
+(void)logFromCodeLocation:(SCD_Struct_PF5*)arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4 arguments:(char*)arg5 ;
+(void)logCrashReporterMessage:(id)arg1 fromCodeLocation:(SCD_Struct_PF5*)arg2 ;
+(id)loggerWithBackend:(id)arg1 logLevel:(int)arg2 options:(id)arg3 ;
+(void)flushDefaultLoggerIfPresent;
+(void)setDefaultLogger:(id)arg1 ;
+(void)recreateDefaultLogger;
+(int)defaultLoggerLogLevel;
+(id)createDefaultLogger;
+(id)backendsFromUserDefaultsWithLogLevel:(int)arg1 ;
+(BOOL)enabledForSubsystem:(id)arg1 level:(int)arg2 ;
+(void)setupCrashReporter;
+(void)logCrashReporterMessageFromCodeLocation:(SCD_Struct_PF5*)arg1 format:(id)arg2 ;
+(BOOL)traceEnabledForSubsystem:(id)arg1 ;
-(id)description;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)flush;
-(void)setLogLevel:(int)arg1 ;
-(int)logLevel;
-(void)logFromCodeLocation:(SCD_Struct_PF5*)arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4 ;
-(NSObject*<PFLoggerBackend>)backend;
-(void)setBackend:(NSObject*<PFLoggerBackend>)arg1 ;
-(id)initWithBackend:(id)arg1 logLevel:(int)arg2 options:(id)arg3 ;
-(void)processOptions;
-(void)logFromCodeLocation:(SCD_Struct_PF5*)arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4 arguments:(char*)arg5 ;
-(BOOL)enabledForSubsystem:(id)arg1 subsystems:(id)arg2 ;
-(void)_recordSubsystem:(id)arg1 ;
-(BOOL)shouldLogToCrashReporter;
-(void)setShouldLogToCrashReporter:(BOOL)arg1 ;
-(NSArray *)tracedSubsystems;
-(void)setTracedSubsystems:(NSArray *)arg1 ;
-(NSArray *)debuggedSubsystems;
-(void)setDebuggedSubsystems:(NSArray *)arg1 ;
-(NSString *)facilityPrefix;
-(void)setFacilityPrefix:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)backendAccessSerializationQueue;
-(void)setBackendAccessSerializationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)backendAllowsConcurrentAccess;
-(void)setBackendAllowsConcurrentAccess:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)recordedSubsystemsQueue;
-(void)setRecordedSubsystemsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSSet *)recordedSubsystems;
-(void)setRecordedSubsystems:(NSSet *)arg1 ;
@end

