/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INObject.h>

@class NSString, INPerson, NSArray;

@interface DeviceQuery : INObject

@property (copy,nonatomic) NSString * deviceType; 
@property (copy,nonatomic) NSString * deviceName; 
@property (retain,nonatomic) INPerson * deviceOwner; 
@property (copy,nonatomic) NSArray * deviceTypeCategories; 
@property (copy,nonatomic) NSString * deviceTypeOriginalInput; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3 ;
@end

