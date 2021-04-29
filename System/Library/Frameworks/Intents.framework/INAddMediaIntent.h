/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INAddMediaIntentExport.h>

@class NSArray, INMediaSearch, INMediaDestination, INPrivateAddMediaIntentData, NSString;

@interface INAddMediaIntent : INIntent <INAddMediaIntentExport>

@property (nonatomic,copy,readonly) NSArray * mediaItems; 
@property (nonatomic,copy,readonly) INMediaSearch * mediaSearch; 
@property (nonatomic,copy,readonly) INMediaDestination * mediaDestination; 
@property (nonatomic,copy) INPrivateAddMediaIntentData * privateAddMediaIntentData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(void)setDomain:(id)arg1 ;
-(id)_metadata;
-(void)_setMetadata:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)verb;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(NSArray *)mediaItems;
-(void)setMediaItems:(NSArray *)arg1 ;
-(INMediaSearch *)mediaSearch;
-(void)setMediaSearch:(INMediaSearch *)arg1 ;
-(BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
-(INMediaDestination *)mediaDestination;
-(void)setMediaDestination:(INMediaDestination *)arg1 ;
-(INPrivateAddMediaIntentData *)privateAddMediaIntentData;
-(void)setPrivateAddMediaIntentData:(INPrivateAddMediaIntentData *)arg1 ;
-(id)initWithMediaItems:(id)arg1 mediaSearch:(id)arg2 mediaDestination:(id)arg3 ;
@end
