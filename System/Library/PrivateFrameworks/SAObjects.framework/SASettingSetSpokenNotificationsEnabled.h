/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SASettingSetBool.h>

@class NSString, NSDate;

@interface SASettingSetSpokenNotificationsEnabled : SASettingSetBool

@property (nonatomic,copy) NSString * appBundleId; 
@property (nonatomic,copy) NSDate * timeToReEnable; 
+(id)setSpokenNotificationsEnabled;
+(id)setSpokenNotificationsEnabledWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSDate *)timeToReEnable;
-(void)setTimeToReEnable:(NSDate *)arg1 ;
@end

