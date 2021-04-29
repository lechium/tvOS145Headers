/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Accounts/Notification/AppleIDSSONotificationPlugin.bundle/AppleIDSSONotificationPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@class NSString;

@interface AIDAAccountNotification : NSObject <ACDAccountNotificationPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(id)_supportedServiceIDs;
-(id)_appleIDAuthenticationAccountsMatchingAppleAccount:(id)arg1 inStore:(id)arg2 ;
@end

