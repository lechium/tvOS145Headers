/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INUpdateAlarmIntentExport.h>

@class INAlarmSearch, INAlarm, INDateComponentsRange, INSpeakableString, NSString;

@interface INUpdateAlarmIntent : INIntent <INUpdateAlarmIntentExport>

@property (nonatomic,copy,readonly) INAlarmSearch * alarmSearch; 
@property (nonatomic,copy,readonly) INAlarm * alarm; 
@property (nonatomic,readonly) long long operation; 
@property (nonatomic,copy,readonly) INDateComponentsRange * proposedTime; 
@property (nonatomic,copy,readonly) INSpeakableString * proposedLabel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(void)setDomain:(id)arg1 ;
-(long long)operation;
-(void)setOperation:(long long)arg1 ;
-(id)_metadata;
-(void)_setMetadata:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)verb;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INAlarmSearch *)alarmSearch;
-(void)setAlarmSearch:(INAlarmSearch *)arg1 ;
-(INAlarm *)alarm;
-(void)setAlarm:(INAlarm *)arg1 ;
-(INDateComponentsRange *)proposedTime;
-(void)setProposedTime:(INDateComponentsRange *)arg1 ;
-(INSpeakableString *)proposedLabel;
-(void)setProposedLabel:(INSpeakableString *)arg1 ;
-(id)initWithAlarmSearch:(id)arg1 alarm:(id)arg2 operation:(long long)arg3 proposedTime:(id)arg4 proposedLabel:(id)arg5 ;
@end

