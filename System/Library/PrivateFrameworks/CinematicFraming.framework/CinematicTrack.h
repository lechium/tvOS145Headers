/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CinematicFraming.framework/CinematicFraming
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CinematicFraming/CinematicFraming-Structs.h>
#import <CinematicFraming/BaseTrack.h>

@class MovementStateEstimator;

@interface CinematicTrack : BaseTrack {

	MovementStateEstimator* _mseX;
	MovementStateEstimator* _mseY;
	BOOL _wasStationaryBefore;
	CGRect _lastStationaryRect;
	BOOL _isOutsideOfView;
	BOOL _isStationary;
	SCD_Struct_Ci3 _withinFrameLastTimestamp;
	CGRect _boundingBoxForFraming;
	CGRect _afterImageBoundingBox;
	SCD_Struct_Ci3 _afterImageExpirationTimestamp;
	CGRect _lastMeasuredFaceBoundingBox;
	BOOL isTrackedByDirector;

}

@property (nonatomic,readonly) BOOL wasStationaryBefore;                             //@synthesize wasStationaryBefore=_wasStationaryBefore - In the implementation block
@property (nonatomic,readonly) CGRect lastStationaryRect;                            //@synthesize lastStationaryRect=_lastStationaryRect - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Ci3 withinFrameLastTimestamp;              //@synthesize withinFrameLastTimestamp=_withinFrameLastTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL isOutsideOfView;                                 //@synthesize isOutsideOfView=_isOutsideOfView - In the implementation block
@property (nonatomic,readonly) BOOL isStationary;                                    //@synthesize isStationary=_isStationary - In the implementation block
@property (assign,nonatomic) BOOL isTrackedByDirector; 
@property (assign,nonatomic) CGRect boundingBoxForFraming;                           //@synthesize boundingBoxForFraming=_boundingBoxForFraming - In the implementation block
-(BOOL)isStationary;
-(BOOL)isOutsideOfView;
-(CGRect)boundingBoxForFraming;
-(id)initWithObservation:(id)arg1 identifier:(long long)arg2 options:(id)arg3 atTime:(SCD_Struct_Ci3)arg4 ;
-(void)updatePropertiesWithMetadata:(id)arg1 inView:(CGRect)arg2 ;
-(void)setAfterImage:(CGRect)arg1 forDuration:(float)arg2 atTime:(SCD_Struct_Ci3)arg3 ;
-(CGRect)afterImageBoundingBoxAtTime:(SCD_Struct_Ci3)arg1 ;
-(void)resetProperties;
-(CGRect)faceBoundingBoxForFramingAtTime:(SCD_Struct_Ci3)arg1 ;
-(BOOL)wasStationaryBefore;
-(CGRect)lastStationaryRect;
-(SCD_Struct_Ci3)withinFrameLastTimestamp;
-(void)setBoundingBoxForFraming:(CGRect)arg1 ;
-(BOOL)isTrackedByDirector;
-(void)setIsTrackedByDirector:(BOOL)arg1 ;
@end

