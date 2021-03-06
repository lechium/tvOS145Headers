/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLMediaLibraryAccountChangeObserver.h>

@protocol OS_dispatch_source;
@class NSXPCConnection, NSObject, MSVTaskAssertion, NSString;

@interface _MLChangeObserver : NSObject <MLMediaLibraryAccountChangeObserver> {

	BOOL _timedOut;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	MSVTaskAssertion* _taskAssertion;

}

@property (nonatomic,retain) NSXPCConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutTimer;              //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (nonatomic,retain) MSVTaskAssertion * taskAssertion;                        //@synthesize taskAssertion=_taskAssertion - In the implementation block
@property (assign,getter=hasTimedOut,nonatomic) BOOL timedOut;                        //@synthesize timedOut=_timedOut - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)observerWithConnection:(id)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setTimedOut:(BOOL)arg1 ;
-(BOOL)hasTimedOut;
-(void)setTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutTimer;
-(void)performDatabasePathChange:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)emergencyDisconnectWithCompletion:(/*^block*/id)arg1 ;
-(void)terminateForFailureToPerformDatabasePathChange;
-(void)tearDownTaskAssertion;
-(void)tearDownTimeoutTimer;
-(void)setupTaskAssertion;
-(void)setupTimeoutTimer;
-(void)setTaskAssertion:(MSVTaskAssertion *)arg1 ;
-(MSVTaskAssertion *)taskAssertion;
@end

