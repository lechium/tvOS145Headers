/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFServiceHelper.h>

@protocol AFServiceHelper;
@class NSString;

@interface CFServiceHelper : NSObject <AFServiceHelper> {

	BOOL _isClientLiteHelper;
	id<AFServiceHelper> _serviceHelper;

}

@property (retain) id<AFServiceHelper> serviceHelper;               //@synthesize serviceHelper=_serviceHelper - In the implementation block
@property (assign) BOOL isClientLiteHelper;                         //@synthesize isClientLiteHelper=_isClientLiteHelper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isDeviceInStarkMode;
-(void)dismissAssistant;
-(void)prepareForAudioHandoffWithCompletion:(/*^block*/id)arg1 ;
-(void)prepareForAudioHandoffFailedWithCompletion:(/*^block*/id)arg1 ;
-(void)handleCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)openSensitiveURL:(id)arg1 ;
-(id)assistantLocalizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3 ;
-(BOOL)isDeviceLockedWithPasscode;
-(BOOL)isDeviceInCarDND;
-(BOOL)isTimeoutSuspended;
-(void)handleCommand:(id)arg1 isOneWay:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)peerInfoForCurrentCommand;
-(void)handleRemoteCommand:(id)arg1 isOneWay:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithServiceHelper:(id)arg1 ;
-(id)initClientLiteHelper;
-(id<AFServiceHelper>)serviceHelper;
-(void)setServiceHelper:(id<AFServiceHelper>)arg1 ;
-(BOOL)isClientLiteHelper;
-(void)setIsClientLiteHelper:(BOOL)arg1 ;
@end

