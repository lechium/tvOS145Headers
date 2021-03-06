/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMDeviceSetupSessionDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/TROperationHandler.h>

@class HMDeviceSetupSession, NSString;

@interface HMDeviceSetupOperationHandler : NSObject <HMDeviceSetupSessionDelegate, HMFLogging, TROperationHandler> {

	HMDeviceSetupSession* _setupSession;

}

@property (nonatomic,readonly) HMDeviceSetupSession * setupSession;              //@synthesize setupSession=_setupSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(void)dealloc;
-(void)registerMessageHandlersForSession:(id)arg1 ;
-(id)logIdentifier;
-(HMDeviceSetupSession *)setupSession;
-(void)_handleReceivedRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)setupSession:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)setupSession:(id)arg1 didReceiveExchangeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

