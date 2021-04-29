/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDTriggerModel.h>

@class NSDate, NSData, NSString;

@interface HMDTimerTriggerModel : HMDTriggerModel

@property (nonatomic,copy) NSDate * fireDate; 
@property (nonatomic,copy) NSData * fireDateTimeZone; 
@property (nonatomic,copy) NSString * significantEvent; 
@property (nonatomic,copy) NSData * significantEventOffset; 
@property (nonatomic,copy) NSData * fireRepeatInterval; 
@property (nonatomic,copy) NSData * recurrences; 
+(id)properties;
-(id)createPayload;
@end

