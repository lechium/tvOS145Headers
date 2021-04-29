/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class BSMutableSettings, UIMutableTransformer, NSSet, NSString, UIColor, NSDictionary, UITransformer;

@interface UIScenePresentationContext : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {

	BSMutableSettings* _settings;
	UIScenePresentationContext* _defaultPresentationContext;
	UIMutableTransformer* _transformer;

}

@property (nonatomic,readonly) UIScenePresentationContext * _defaultPresentationContext;                               //@synthesize defaultPresentationContext=_defaultPresentationContext - In the implementation block
@property (nonatomic,copy,readonly) NSSet * _exclusiveLayerTargetsToInclude; 
@property (nonatomic,copy,readonly) NSSet * _layerTargetsToExclude; 
@property (getter=_isVisibilityPropagationEnabled,nonatomic,readonly) BOOL _visibilityPropagationEnabled; 
@property (nonatomic,copy,readonly) NSString * _minificationFilterName; 
@property (getter=isClippingDisabled,nonatomic,readonly) BOOL clippingDisabled; 
@property (nonatomic,readonly) unsigned long long appearanceStyle; 
@property (nonatomic,copy,readonly) UIColor * backgroundColorWhileHosting; 
@property (nonatomic,copy,readonly) UIColor * backgroundColorWhileNotHosting; 
@property (nonatomic,readonly) unsigned long long presentedLayerTypes; 
@property (nonatomic,copy,readonly) NSDictionary * layerPresentationOverrides; 
@property (nonatomic,copy,readonly) UITransformer * hostTransformer; 
@property (nonatomic,readonly) unsigned long long renderingMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(unsigned long long)renderingMode;
-(unsigned long long)appearanceStyle;
-(BOOL)_isVisibilityPropagationEnabled;
-(unsigned long long)presentedLayerTypes;
-(NSSet *)_exclusiveLayerTargetsToInclude;
-(NSSet *)_layerTargetsToExclude;
-(NSDictionary *)layerPresentationOverrides;
-(BOOL)isClippingDisabled;
-(NSString *)_minificationFilterName;
-(UIColor *)backgroundColorWhileHosting;
-(UIColor *)backgroundColorWhileNotHosting;
-(UITransformer *)hostTransformer;
-(id)_initWithDefaultPresentationContext:(id)arg1 ;
-(UIScenePresentationContext *)_defaultPresentationContext;
-(id)_initWithSettings:(id)arg1 defaultPresentationContext:(id)arg2 ;
-(id)_initWithPresentationContext:(id)arg1 ;
-(id)_initWithDefaultValues;
@end

