/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableString, NSMutableArray, NSMutableDictionary, AXMVisionFeature;

@interface AXMDescriptionBuilder : NSObject {

	long long _builderOptions;
	NSMutableString* _speakableDescription;
	NSMutableString* _visualDescription;
	NSMutableArray* _faceFeatures;
	NSMutableDictionary* _classificationLabelsToLocValuesMap;
	NSMutableArray* _iconClassFeatures;
	AXMVisionFeature* _captionFeature;
	BOOL _isNSFW;
	BOOL _shouldModifyCaptionForSensitiveContent;
	AXMVisionFeature* _blurFeature;
	AXMVisionFeature* _brightnessFeature;
	AXMVisionFeature* _primarySensitiveContentFeature;

}

@property (nonatomic,retain) AXMVisionFeature * blurFeature;                                 //@synthesize blurFeature=_blurFeature - In the implementation block
@property (nonatomic,retain) AXMVisionFeature * brightnessFeature;                           //@synthesize brightnessFeature=_brightnessFeature - In the implementation block
@property (assign,nonatomic) BOOL isNSFW;                                                    //@synthesize isNSFW=_isNSFW - In the implementation block
@property (assign,nonatomic) BOOL shouldModifyCaptionForSensitiveContent;                    //@synthesize shouldModifyCaptionForSensitiveContent=_shouldModifyCaptionForSensitiveContent - In the implementation block
@property (nonatomic,retain) AXMVisionFeature * primarySensitiveContentFeature;              //@synthesize primarySensitiveContentFeature=_primarySensitiveContentFeature - In the implementation block
+(id)builderWithOptions:(long long)arg1 ;
-(id)_initWithOptions:(long long)arg1 ;
-(void)addDetectedClassificationLocalizedValue:(id)arg1 forLabel:(id)arg2 ;
-(BOOL)_usesTemplateForLowConfidenceAndExplicitFeatures;
-(BOOL)isNSFW;
-(BOOL)_shouldReplaceCaptionWithGenericTemplate;
-(void)_addGenericTemplateForCaptionInformationToDescription:(id)arg1 ;
-(void)_addCaptionInformationToDescription:(id)arg1 ;
-(void)_addBrightnessInformationToDescription:(id)arg1 ;
-(void)_addBlurInformationToDescription:(id)arg1 ;
-(void)_addFaceInformationToDescription:(id)arg1 ;
-(void)_addClassificationInformationToDescription:(id)arg1 ;
-(void)_addIconClassInformationToDescription:(id)arg1 ;
-(id)buildSpeakableDescription;
-(id)_stringForPauseType:(long long)arg1 ;
-(void)_appendPauseType:(long long)arg1 toDescriptionIfNeeded:(id)arg2 ;
-(void)_appendToDescription:(id)arg1 afterPauseType:(long long)arg2 withContents:(id)arg3 ;
-(BOOL)_shouldSummarizeDetectedPeople;
-(void)_addPersonSummaryToDescription:(id)arg1 ;
-(void)_addDetailedFaceInformationToDescription:(id)arg1 ;
-(BOOL)shouldModifyCaptionForSensitiveContent;
-(AXMVisionFeature *)primarySensitiveContentFeature;
-(id)_templateRulesForTag:(id)arg1 ;
-(id)_subsumedTagsForTags:(id)arg1 ;
-(id)_ignoredTagsForTags:(id)arg1 ;
-(void)addDetectedFaces:(id)arg1 ;
-(void)addDetectedClassificationFeatures:(id)arg1 ;
-(void)setDetectedCaption:(id)arg1 ;
-(void)addDetectedIconClasses:(id)arg1 ;
-(id)buildVisualDescription;
-(AXMVisionFeature *)blurFeature;
-(void)setBlurFeature:(AXMVisionFeature *)arg1 ;
-(AXMVisionFeature *)brightnessFeature;
-(void)setBrightnessFeature:(AXMVisionFeature *)arg1 ;
-(void)setIsNSFW:(BOOL)arg1 ;
-(void)setShouldModifyCaptionForSensitiveContent:(BOOL)arg1 ;
-(void)setPrimarySensitiveContentFeature:(AXMVisionFeature *)arg1 ;
@end

