/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UNNotification, NSString, BSServiceConnectionEndpoint, UIScene;

@interface UNNotificationResponse : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {

	UNNotification* _notification;
	NSString* _actionIdentifier;
	NSString* _originIdentifier;
	BSServiceConnectionEndpoint* _targetConnectionEndpoint;
	NSString* _targetSceneIdentifier;

}

@property (nonatomic,readonly) UIScene * targetScene; 
@property (nonatomic,copy,readonly) NSString * originIdentifier;                                    //@synthesize originIdentifier=_originIdentifier - In the implementation block
@property (nonatomic,readonly) BSServiceConnectionEndpoint * targetConnectionEndpoint;              //@synthesize targetConnectionEndpoint=_targetConnectionEndpoint - In the implementation block
@property (nonatomic,readonly) NSString * targetSceneIdentifier;                                    //@synthesize targetSceneIdentifier=_targetSceneIdentifier - In the implementation block
@property (nonatomic,copy,readonly) UNNotification * notification;                                  //@synthesize notification=_notification - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionIdentifier;                                    //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 ;
+(id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 ;
+(id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 targetSceneIdentifier:(id)arg5 ;
-(UIScene *)targetScene;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSString *)originIdentifier;
-(UNNotification *)notification;
-(NSString *)actionIdentifier;
-(id)_initWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 targetSceneIdentifier:(id)arg5 ;
-(BSServiceConnectionEndpoint *)targetConnectionEndpoint;
-(NSString *)targetSceneIdentifier;
-(id)initWithNotification:(id)arg1 actionIdentifier:(id)arg2 ;
@end

