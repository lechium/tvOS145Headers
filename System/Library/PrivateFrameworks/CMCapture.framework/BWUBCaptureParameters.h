/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface BWUBCaptureParameters : NSObject {

	NSString* _portType;
	double _lowLightEffectiveIntegrationTimeThreshold;
	double _sifrMainEffectiveIntegrationTimeThreshold;
	float _sifrGainThreshold;
	float _lowLightHDRWithoutSIFRISPDGainThreshold;
	double _longWithoutSphereEffectiveIntegrationTimeThreshold;
	double _deepFusionEffectiveIntegrationTimeThreshold;
	NSArray* _deepFusionHDREVZeroCountByEffectiveIntegrationTime;
	double _redSaturationMainEffectiveIntegrationTimeThreshold;
	float _redSaturationSIFRGainThreshold;
	int _toneCurveBehavior;
	BOOL _preserveBlackLevel;
	NSArray* _afWindowParams;
	int _maxNumberOfFramesForAdaptiveBracketing;
	double _digitalFlashAvailableEffectiveIntegrationTimeThreshold;
	double _digitalFlashRecommendedEffectiveIntegrationTimeThreshold;
	double _stationaryDigitalFlashRecommendedEffectiveIntegrationTimeThreshold;
	float _digitalFlashRecommendRegularFlashSNRThreshold;
	float _digitalFlashBacklitRecommendRegularFlashSNRThreshold;
	float _digitalFlashBacklitRecommendRegularFlashAERelativeDifferenceThreshold;
	BOOL _digitalFlashHighlightRecoveryEnabled;
	int _referenceFrameSelectionMethod;
	BOOL _usePreviousSIFR;
	NSArray* _motionAndFocusScoreWeights;

}

@property (nonatomic,readonly) double lowLightEffectiveIntegrationTimeThreshold;                       //@synthesize lowLightEffectiveIntegrationTimeThreshold=_lowLightEffectiveIntegrationTimeThreshold - In the implementation block
@property (nonatomic,readonly) double sifrMainEffectiveIntegrationTimeThreshold;                       //@synthesize sifrMainEffectiveIntegrationTimeThreshold=_sifrMainEffectiveIntegrationTimeThreshold - In the implementation block
@property (nonatomic,readonly) float sifrGainThreshold;                                                //@synthesize sifrGainThreshold=_sifrGainThreshold - In the implementation block
@property (nonatomic,readonly) float lowLightHDRWithoutSIFRISPDGainThreshold;                          //@synthesize lowLightHDRWithoutSIFRISPDGainThreshold=_lowLightHDRWithoutSIFRISPDGainThreshold - In the implementation block
@property (nonatomic,readonly) double longWithoutSphereEffectiveIntegrationTimeThreshold;              //@synthesize longWithoutSphereEffectiveIntegrationTimeThreshold=_longWithoutSphereEffectiveIntegrationTimeThreshold - In the implementation block
@property (nonatomic,readonly) double deepFusionEffectiveIntegrationTimeThreshold;                     //@synthesize deepFusionEffectiveIntegrationTimeThreshold=_deepFusionEffectiveIntegrationTimeThreshold - In the implementation block
@property (nonatomic,readonly) double redSaturationMainEffectiveIntegrationTimeThreshold;              //@synthesize redSaturationMainEffectiveIntegrationTimeThreshold=_redSaturationMainEffectiveIntegrationTimeThreshold - In the implementation block
@property (nonatomic,readonly) float redSaturationSIFRGainThreshold;                                   //@synthesize redSaturationSIFRGainThreshold=_redSaturationSIFRGainThreshold - In the implementation block
@property (nonatomic,readonly) int toneCurveBehavior;                                                  //@synthesize toneCurveBehavior=_toneCurveBehavior - In the implementation block
@property (nonatomic,readonly) BOOL preserveBlackLevel;                                                //@synthesize preserveBlackLevel=_preserveBlackLevel - In the implementation block
@property (nonatomic,readonly) NSArray * afWindowParams;                                               //@synthesize afWindowParams=_afWindowParams - In the implementation block
-(id)description;
-(void)dealloc;
-(id)initWithPortType:(id)arg1 sensorIDDictionary:(id)arg2 ;
-(int)deepFusionHDREVZeroCountForEffectiveIntegrationTime:(double)arg1 ;
-(int)maxNumberOfFramesForAdaptiveBracketing;
-(double)digitalFlashAvailableEffectiveIntegrationTimeThreshold;
-(double)digitalFlashRecommendedEffectiveIntegrationTimeThreshold;
-(double)stationaryDigitalFlashRecommendedEffectiveIntegrationTimeThreshold;
-(float)digitalFlashRecommendRegularFlashSNRThreshold;
-(float)digitalFlashBacklitRecommendRegularFlashSNRThreshold;
-(float)digitalFlashBacklitRecommendRegularFlashAERelativeDifferenceThreshold;
-(BOOL)digitalFlashHighlightRecoveryEnabled;
-(int)referenceFrameSelectionMethod;
-(BOOL)usePreviousSIFR;
-(id)motionAndFocusScoreWeights;
-(double)lowLightEffectiveIntegrationTimeThreshold;
-(double)sifrMainEffectiveIntegrationTimeThreshold;
-(float)sifrGainThreshold;
-(float)lowLightHDRWithoutSIFRISPDGainThreshold;
-(double)longWithoutSphereEffectiveIntegrationTimeThreshold;
-(double)deepFusionEffectiveIntegrationTimeThreshold;
-(double)redSaturationMainEffectiveIntegrationTimeThreshold;
-(float)redSaturationSIFRGainThreshold;
-(int)toneCurveBehavior;
-(BOOL)preserveBlackLevel;
-(NSArray *)afWindowParams;
@end

