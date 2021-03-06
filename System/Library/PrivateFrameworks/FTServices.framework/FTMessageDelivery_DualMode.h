/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FTServices/FTMessageDeliveryProtocol.h>
#import <FTServices/FTMessageQueueDelegate.h>

@class NSString, IDSBaseMessage, NSArray, FTMessageDelivery, FTMessageQueue;

@interface FTMessageDelivery_DualMode : NSObject <FTMessageDeliveryProtocol, FTMessageQueueDelegate> {

	FTMessageDelivery* _httpDelivery;
	FTMessageDelivery* _apsDelivery;
	FTMessageQueue* _dualModeQueue;
	NSString* _userAgentString;

}

@property (nonatomic,copy) NSString * userAgent; 
@property (readonly) BOOL hasQueuedItems; 
@property (readonly) BOOL busy; 
@property (assign) BOOL retryInAirplaneMode; 
@property (assign) BOOL logToRegistration; 
@property (readonly) IDSBaseMessage * currentMessage; 
@property (readonly) NSArray * queuedMessages; 
@property (readonly) NSArray * allMessages; 
@property (readonly) long long maxMessageSize; 
@property (readonly) long long maxLargeMessageSize; 
@property (assign) unsigned long long maxConcurrentMessages; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)cancelMessage:(id)arg1 ;
-(id)initWithPreferedType:(long long)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(BOOL)sendMessage:(id)arg1 ;
-(NSArray *)queuedMessages;
-(void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2 ;
-(BOOL)_isInBackoffMode;
-(long long)_randomPercentageChanceForDualDelivery;
-(void)dequeueMessageIfNeeded;
-(BOOL)_shouldUseDualDeliveryForMessage:(id)arg1 ;
-(void)handleTranslationAndDeliveryOnAPS:(id)arg1 ;
-(void)_enterBackOffMode;
@end

