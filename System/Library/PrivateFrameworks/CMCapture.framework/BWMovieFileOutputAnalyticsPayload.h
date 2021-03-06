/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWCoreAnalyticsPayload.h>

@class NSDictionary, NSString;

@interface BWMovieFileOutputAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {

	BWCoreAnalyticsMovieRecordingSphereAFStatistics* _sphereAFStatistics;
	NSDictionary* _sphereModeByPortType;
	NSDictionary* _APSModeByPortType;
	NSDictionary* _variableFrameRateStatistics;
	BOOL _afDriverShortOccurred;
	BOOL _videoMirrored;
	int _activeDeviceMask;
	int _devicePosition;
	int _videoOrientation;
	int _deviceType;
	float _nominalFramerate;
	int _height;
	int _width;
	NSString* _clientApplicationID;
	double _duration;
	double _durationFront;
	double _durationFrontSuperWide;
	double _durationRearWide;
	double _durationRearTele;
	double _durationRearSuperWide;

}

@property (assign,nonatomic) int activeDeviceMask;                                                             //@synthesize activeDeviceMask=_activeDeviceMask - In the implementation block
@property (assign,nonatomic) int devicePosition;                                                               //@synthesize devicePosition=_devicePosition - In the implementation block
@property (assign,nonatomic) int videoOrientation;                                                             //@synthesize videoOrientation=_videoOrientation - In the implementation block
@property (assign,nonatomic) BOOL videoMirrored;                                                               //@synthesize videoMirrored=_videoMirrored - In the implementation block
@property (assign,nonatomic) int deviceType;                                                                   //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,copy) NSString * clientApplicationID;                                                     //@synthesize clientApplicationID=_clientApplicationID - In the implementation block
@property (assign,nonatomic) double duration;                                                                  //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double durationFront;                                                             //@synthesize durationFront=_durationFront - In the implementation block
@property (assign,nonatomic) double durationFrontSuperWide;                                                    //@synthesize durationFrontSuperWide=_durationFrontSuperWide - In the implementation block
@property (assign,nonatomic) double durationRearWide;                                                          //@synthesize durationRearWide=_durationRearWide - In the implementation block
@property (assign,nonatomic) double durationRearTele;                                                          //@synthesize durationRearTele=_durationRearTele - In the implementation block
@property (assign,nonatomic) double durationRearSuperWide;                                                     //@synthesize durationRearSuperWide=_durationRearSuperWide - In the implementation block
@property (assign,nonatomic) float nominalFramerate;                                                           //@synthesize nominalFramerate=_nominalFramerate - In the implementation block
@property (assign,nonatomic) int height;                                                                       //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) int width;                                                                        //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) BWCoreAnalyticsMovieRecordingSphereAFStatistics* sphereAFStatistics;              //@synthesize sphereAFStatistics=_sphereAFStatistics - In the implementation block
@property (nonatomic,retain) NSDictionary * sphereModeByPortType;                                              //@synthesize sphereModeByPortType=_sphereModeByPortType - In the implementation block
@property (nonatomic,retain) NSDictionary * APSModeByPortType;                                                 //@synthesize APSModeByPortType=_APSModeByPortType - In the implementation block
@property (nonatomic,retain) NSDictionary * variableFrameRateStatistics;                                       //@synthesize variableFrameRateStatistics=_variableFrameRateStatistics - In the implementation block
@property (assign,nonatomic) BOOL afDriverShortOccurred;                                                       //@synthesize afDriverShortOccurred=_afDriverShortOccurred - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)reset;
-(double)duration;
-(int)width;
-(int)height;
-(void)setWidth:(int)arg1 ;
-(void)setHeight:(int)arg1 ;
-(void)setDuration:(double)arg1 ;
-(int)deviceType;
-(void)setDeviceType:(int)arg1 ;
-(id)eventName;
-(BOOL)videoMirrored;
-(void)setVideoMirrored:(BOOL)arg1 ;
-(int)videoOrientation;
-(void)setVideoOrientation:(int)arg1 ;
-(id)eventDictionary;
-(NSString *)clientApplicationID;
-(void)setClientApplicationID:(NSString *)arg1 ;
-(void)setNominalFramerate:(float)arg1 ;
-(void)setDurationFront:(double)arg1 ;
-(void)setDurationFrontSuperWide:(double)arg1 ;
-(void)setDurationRearWide:(double)arg1 ;
-(void)setDurationRearTele:(double)arg1 ;
-(void)setDurationRearSuperWide:(double)arg1 ;
-(void)setSphereAFStatistics:(BWCoreAnalyticsMovieRecordingSphereAFStatistics*)arg1 ;
-(void)setSphereModeByPortType:(NSDictionary *)arg1 ;
-(void)setAPSModeByPortType:(NSDictionary *)arg1 ;
-(void)setVariableFrameRateStatistics:(NSDictionary *)arg1 ;
-(void)setAfDriverShortOccurred:(BOOL)arg1 ;
-(void)setDevicePosition:(int)arg1 ;
-(BOOL)afDriverShortOccurred;
-(int)activeDeviceMask;
-(void)setActiveDeviceMask:(int)arg1 ;
-(int)devicePosition;
-(BWCoreAnalyticsMovieRecordingSphereAFStatistics*)sphereAFStatistics;
-(NSDictionary *)sphereModeByPortType;
-(NSDictionary *)APSModeByPortType;
-(NSDictionary *)variableFrameRateStatistics;
-(double)durationFront;
-(double)durationFrontSuperWide;
-(double)durationRearWide;
-(double)durationRearTele;
-(double)durationRearSuperWide;
-(float)nominalFramerate;
@end

