/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageConfiguration.h>

@protocol UIImageSymbolConfigurationProvider;
@class NSString;

@interface UIImageSymbolConfiguration : UIImageConfiguration {

	double _pointSize;
	SCD_Struct_UI68 _configFlags;
	long long _scale;
	long long _weight;
	NSString* _textStyle;
	id<UIImageSymbolConfigurationProvider> _provider;
	double _customFontPointSizeMultiplier;

}

@property (nonatomic,readonly) double fixedPointSize; 
@property (nonatomic,readonly) long long scale;                                                     //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) long long weight;                                                    //@synthesize weight=_weight - In the implementation block
@property (nonatomic,copy,readonly) NSString * textStyle;                                           //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,__weak,readonly) id<UIImageSymbolConfigurationProvider> provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) double customFontPointSizeMultiplier;                                //@synthesize customFontPointSizeMultiplier=_customFontPointSizeMultiplier - In the implementation block
@property (nonatomic,readonly) double pointSizeForScalingWithTextStyle; 
+(BOOL)supportsSecureCoding;
+(id)defaultConfiguration;
+(id)_defaultConfiguration;
+(id)configurationWithPointSize:(double)arg1 weight:(long long)arg2 ;
+(id)configurationWithFont:(id)arg1 ;
+(id)configurationWithPointSize:(double)arg1 ;
+(id)configurationWithTextStyle:(id)arg1 ;
+(id)configurationWithPointSize:(double)arg1 weight:(long long)arg2 scale:(long long)arg3 ;
+(id)configurationWithFont:(id)arg1 scale:(long long)arg2 ;
+(id)configurationWithScale:(long long)arg1 ;
+(id)configurationWithTextStyle:(id)arg1 scale:(long long)arg2 ;
+(id)configurationWithWeight:(long long)arg1 ;
+(id)unspecifiedConfiguration;
+(id)configurationFromProvider:(id)arg1 ;
+(id)updatingConfigurationFromProvider:(id)arg1 ;
+(id)configurationFromProvider:(id)arg1 scale:(long long)arg2 ;
+(id)updatingConfigurationFromProvider:(id)arg1 scale:(long long)arg2 ;
+(id)configurationWithConfiguration:(id)arg1 and:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)scale;
-(long long)weight;
-(id<UIImageSymbolConfigurationProvider>)provider;
-(NSString *)textStyle;
-(BOOL)isEqualToConfiguration:(id)arg1 ;
-(BOOL)_isUnspecified;
-(BOOL)isEquivalentToConfiguration:(id)arg1 ;
-(id)_initWithTraitCollection:(id)arg1 ;
-(BOOL)_shouldApplyConfiguration:(id)arg1 ;
-(void)_applyConfigurationValuesTo:(id)arg1 ;
-(BOOL)_hasFixedPointSize;
-(double)fixedPointSize;
-(BOOL)_hasSpecifiedTextStyle;
-(void)_deriveGlyphSize:(long long*)arg1 weight:(long long*)arg2 pointSize:(double*)arg3 ;
-(void)_setFixedPointSize:(double)arg1 ;
-(void)_setPointSizeForScalingWithTextStyle:(double)arg1 ;
-(void)_setProvider:(id)arg1 updating:(BOOL)arg2 ;
-(void)_clearSpecificsExceptScale;
-(BOOL)_hasSpecifiedScale;
-(BOOL)_hasSpecifiedWeight;
-(BOOL)_hasSpecifiedProvider;
-(double)pointSizeForScalingWithTextStyle;
-(BOOL)_isUpdatingProvider;
-(id)configurationWithUnspecifiedTextStyle;
-(id)configurationWithUnspecifiedScale;
-(id)configurationWithUnspecifiedWeight;
-(id)configurationWithUnspecifiedPointSizeAndWeight;
-(double)customFontPointSizeMultiplier;
-(void)_setProvider:(id)arg1 ;
-(id)configurationWithoutTextStyle;
-(id)configurationWithoutScale;
-(id)configurationWithoutWeight;
-(id)configurationWithoutPointSizeAndWeight;
-(BOOL)isSimilarToConfiguration:(id)arg1 ;
@end

