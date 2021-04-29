/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDataStreamSocketPrivate.h>

@protocol HMDDataStreamSocketDelegate, OS_dispatch_queue;
@class NSString, HMDDataStreamStreamProtocol, NSObject, HMFUnfairLock, NSMutableArray;

@interface HMDDataStreamSocket : NSObject <HMFLogging, HMDDataStreamSocketPrivate> {

	BOOL _closed;
	NSString* _applicationProtocolName;
	id<HMDDataStreamSocketDelegate> _delegate;
	unsigned long long _trafficClass;
	HMDDataStreamStreamProtocol* _streamProtocol;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFUnfairLock* _lock;
	NSMutableArray* _pendingReads;

}

@property (__weak,readonly) HMDDataStreamStreamProtocol * streamProtocol;              //@synthesize streamProtocol=_streamProtocol - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                           //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMFUnfairLock * lock;                                             //@synthesize lock=_lock - In the implementation block
@property (assign,getter=isClosed,nonatomic) BOOL closed;                              //@synthesize closed=_closed - In the implementation block
@property (readonly) NSMutableArray * pendingReads;                                    //@synthesize pendingReads=_pendingReads - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<HMDDataStreamSocketDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSString * applicationProtocolName;                               //@synthesize applicationProtocolName=_applicationProtocolName - In the implementation block
@property (assign) unsigned long long trafficClass;                                    //@synthesize trafficClass=_trafficClass - In the implementation block
+(id)logCategory;
-(HMFUnfairLock *)lock;
-(id<HMDDataStreamSocketDelegate>)delegate;
-(void)close;
-(void)setDelegate:(id<HMDDataStreamSocketDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)writeData:(id)arg1 error:(id*)arg2 ;
-(id)readData;
-(void)setTrafficClass:(unsigned long long)arg1 ;
-(unsigned long long)trafficClass;
-(void)setClosed:(BOOL)arg1 ;
-(BOOL)isClosed;
-(void)closeWithError:(id)arg1 ;
-(HMDDataStreamStreamProtocol *)streamProtocol;
-(NSString *)applicationProtocolName;
-(id)initWithStreamProtocol:(id)arg1 applicationProtocolName:(id)arg2 workQueue:(id)arg3 ;
-(NSMutableArray *)pendingReads;
-(void)handleIncomingData:(id)arg1 ;
@end

