/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotifications/UserNotifications-Structs.h>
#import <UserNotifications/UNNotificationAttachmentOptions.h>

@class NSDictionary;

@interface UNMutableNotificationAttachmentOptions : UNNotificationAttachmentOptions

@property (assign,nonatomic) unsigned long long displayLocation; 
@property (nonatomic,copy) NSDictionary * thumbnailGeneratorUserInfo; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDisplayLocation:(unsigned long long)arg1 ;
-(void)setThumbnailGeneratorUserInfo:(NSDictionary *)arg1 ;
@end

