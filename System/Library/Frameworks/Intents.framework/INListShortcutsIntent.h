/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INListShortcutsIntentExport.h>

@class NSArray, NSString;

@interface INListShortcutsIntent : INIntent <INListShortcutsIntentExport>

@property (nonatomic,readonly) long long originDevice; 
@property (nonatomic,copy,readonly) NSArray * appTitles; 
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
-(long long)originDevice;
-(void)setOriginDevice:(long long)arg1 ;
-(NSArray *)appTitles;
-(void)setAppTitles:(NSArray *)arg1 ;
-(id)initWithOriginDevice:(long long)arg1 appTitles:(id)arg2 ;
@end

