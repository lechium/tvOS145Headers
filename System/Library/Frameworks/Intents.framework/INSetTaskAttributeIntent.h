/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetTaskAttributeIntentExport.h>

@class INTask, INSpeakableString, INSpatialEventTrigger, INTemporalEventTrigger, INContactEventTrigger, NSString;

@interface INSetTaskAttributeIntent : INIntent <INSetTaskAttributeIntentExport>

@property (nonatomic,copy,readonly) INTask * targetTask; 
@property (nonatomic,copy,readonly) INSpeakableString * taskTitle; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) long long priority; 
@property (nonatomic,copy,readonly) INSpatialEventTrigger * spatialEventTrigger; 
@property (nonatomic,copy,readonly) INTemporalEventTrigger * temporalEventTrigger; 
@property (nonatomic,copy) INContactEventTrigger * contactEventTrigger; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(void)setDomain:(id)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(id)_metadata;
-(long long)status;
-(void)_setMetadata:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(id)_dictionaryRepresentation;
-(INContactEventTrigger *)contactEventTrigger;
-(void)setContactEventTrigger:(INContactEventTrigger *)arg1 ;
-(INSpatialEventTrigger *)spatialEventTrigger;
-(void)setSpatialEventTrigger:(INSpatialEventTrigger *)arg1 ;
-(INTask *)targetTask;
-(void)setTargetTask:(INTask *)arg1 ;
-(INSpeakableString *)taskTitle;
-(void)setTaskTitle:(INSpeakableString *)arg1 ;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(INTemporalEventTrigger *)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)verb;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithTargetTask:(id)arg1 status:(long long)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4 ;
-(id)initWithTargetTask:(id)arg1 taskTitle:(id)arg2 status:(long long)arg3 priority:(long long)arg4 spatialEventTrigger:(id)arg5 temporalEventTrigger:(id)arg6 ;
@end

