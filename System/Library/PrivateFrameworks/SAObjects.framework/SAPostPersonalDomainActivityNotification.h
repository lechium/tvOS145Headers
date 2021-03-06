/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAPostPersonalDomainActivityNotification : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * homeId; 
@property (nonatomic,copy) NSString * notificationBody; 
@property (nonatomic,copy) NSString * originatingDeviceName; 
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSString *)homeId;
-(void)setHomeId:(NSString *)arg1 ;
-(NSString *)notificationBody;
-(void)setNotificationBody:(NSString *)arg1 ;
-(NSString *)originatingDeviceName;
-(void)setOriginatingDeviceName:(NSString *)arg1 ;
@end

