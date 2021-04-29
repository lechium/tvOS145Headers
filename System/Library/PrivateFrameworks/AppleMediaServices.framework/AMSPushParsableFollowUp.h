/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSPushParsable.h>
#import <libobjc.A.dylib/AMSUserNotificationIntentDelegate.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@class NSString;

@interface AMSPushParsableFollowUp : NSObject <AMSPushParsable, AMSUserNotificationIntentDelegate, AMSBagConsumer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(id)createBagForSubProfile;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(BOOL)shouldSkipAccountCheck;
+(void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3 ;
+(void)removeDeviceOfferWithPayload:(id)arg1 logKey:(id)arg2 bag:(id)arg3 ;
+(BOOL)isDeviceOfferNotification:(id)arg1 ;
+(BOOL)_shouldAllowFollowUp:(id)arg1 bag:(id)arg2 ;
+(BOOL)_shouldClearFollowUpFromPayload:(id)arg1 ;
+(void)_performClearWithPayload:(id)arg1 ;
+(void)_performPostWithPayload:(id)arg1 bag:(id)arg2 ;
+(id)_createFollowUpItemFromNotification:(id)arg1 ;
+(id)_createFollowUpItemFromPayload:(id)arg1 ;
+(void)userNotification:(id)arg1 selectedButtonAction:(id)arg2 bag:(id)arg3 ;
+(id)_createNotificationFromFollowUpItem:(id)arg1 ;
@end

