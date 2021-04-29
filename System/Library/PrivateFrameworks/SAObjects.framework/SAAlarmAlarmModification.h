/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSURL, NSNumber, NSString;

@interface SAAlarmAlarmModification : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * addedFrequency; 
@property (nonatomic,copy) NSURL * alarmId; 
@property (nonatomic,copy) NSNumber * enabled; 
@property (nonatomic,copy) NSNumber * hour; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * minute; 
@property (nonatomic,copy) NSArray * removedFrequency; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alarmModification;
+(id)alarmModificationWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setHour:(NSNumber *)arg1 ;
-(void)setMinute:(NSNumber *)arg1 ;
-(NSNumber *)hour;
-(NSNumber *)minute;
-(NSNumber *)enabled;
-(void)setEnabled:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSURL *)alarmId;
-(void)setAlarmId:(NSURL *)arg1 ;
-(id)encodedClassName;
-(NSArray *)addedFrequency;
-(void)setAddedFrequency:(NSArray *)arg1 ;
-(NSArray *)removedFrequency;
-(void)setRemovedFrequency:(NSArray *)arg1 ;
@end

