/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMDCameraStreamSnapshotHandlerDelegate.h>
#import <libobjc.A.dylib/HMDSnapshotRequestHandlerProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, HMDAccessory, NSMutableArray, HMDCameraStreamSnapshotHandler, HMFTimer, HMDSnapshotFile, NSSet;

@interface HMDSnapshotRequestHandler : HMFObject <HMFLogging, HMFTimerDelegate, HMDCameraStreamSnapshotHandlerDelegate, HMDSnapshotRequestHandlerProtocol> {

	NSString* _imageCacheDirectory;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDAccessory* _accessory;
	NSMutableArray* _pendingRequests;
	HMDCameraStreamSnapshotHandler* _streamSnapshotHandler;
	HMFTimer* _mostRecentSnapshotInvalidationTimer;
	HMDSnapshotFile* _mostRecentSnapshot;
	NSString* _logIdentifier;
	NSSet* _supportedResolutions;

}

@property (nonatomic,readonly) NSString * logIdentifier;                    //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * supportedResolutions;                    //@synthesize supportedResolutions=_supportedResolutions - In the implementation block
@property (nonatomic,readonly) NSString * imageCacheDirectory;              //@synthesize imageCacheDirectory=_imageCacheDirectory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(NSSet *)supportedResolutions;
-(void)requestSnapshot:(id)arg1 streamingTierType:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)streamSnapshotHandler:(id)arg1 didGetNewSnapshot:(id)arg2 ;
-(void)streamSnapshotHandler:(id)arg1 didGetLastSnapshot:(id)arg2 ;
-(id)initWithAccessory:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 imageCacheDirectory:(id)arg4 logID:(id)arg5 ;
-(NSString *)imageCacheDirectory;
-(void)setSupportedResolutions:(NSSet *)arg1 ;
@end
