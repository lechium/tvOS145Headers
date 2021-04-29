/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDCameraGetSnapshotProtocol.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, HMDCameraSnapshotLocalDelegate, HMDSnapshotRequestHandlerProtocol;
@class HMDCameraSnapshotSessionID, NSObject, HMDAccessory, NSDictionary, HMDSnapshotFile, NSString;

@interface HMDCameraSnapshotLocal : HMFObject <HMDCameraGetSnapshotProtocol, HMFLogging> {

	HMDCameraSnapshotSessionID* _sessionID;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDAccessory* _accessory;
	NSDictionary* _options;
	id<HMDCameraSnapshotLocalDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	HMDSnapshotFile* _snapshotFile;
	id<HMDSnapshotRequestHandlerProtocol> _snapshotRequestHandler;

}

@property (nonatomic,readonly) HMDCameraSnapshotSessionID * sessionID;                                    //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                    //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                                           //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;                                                    //@synthesize options=_options - In the implementation block
@property (nonatomic,__weak,readonly) id<HMDCameraSnapshotLocalDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                                //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) HMDSnapshotFile * snapshotFile;                                              //@synthesize snapshotFile=_snapshotFile - In the implementation block
@property (nonatomic,readonly) id<HMDSnapshotRequestHandlerProtocol> snapshotRequestHandler;              //@synthesize snapshotRequestHandler=_snapshotRequestHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(id<HMDCameraSnapshotLocalDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSDictionary *)options;
-(HMDCameraSnapshotSessionID *)sessionID;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(HMDAccessory *)accessory;
-(id)logIdentifier;
-(void)_callDelegate:(id)arg1 error:(id)arg2 ;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 accessory:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 snapshotRequestHandler:(id)arg7 ;
-(void)getSnapshot:(unsigned long long)arg1 ;
-(void)_getSnapshot:(unsigned long long)arg1 ;
-(id<HMDSnapshotRequestHandlerProtocol>)snapshotRequestHandler;
-(void)_handleSnapshotFile:(id)arg1 error:(id)arg2 ;
-(void)setSnapshotFile:(HMDSnapshotFile *)arg1 ;
-(HMDSnapshotFile *)snapshotFile;
@end

