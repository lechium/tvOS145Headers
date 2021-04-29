/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface ADClientDPIDManager : NSObject {

	NSObject*<OS_dispatch_queue> _backupFlowQueue;
	BOOL _isTest;

}

@property (nonatomic,readonly) BOOL isTest;              //@synthesize isTest=_isTest - In the implementation block
+(id)sharedInstance;
+(id)DPIDOperationTypeToString:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isTest;
-(void)updateActiveRecordICloudDSID;
-(BOOL)canContinueProcessing:(id)arg1 ;
-(void)reconcileDPID:(/*^block*/id)arg1 ;
-(void)handlePushNotification:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetDPID:(/*^block*/id)arg1 ;
@end

