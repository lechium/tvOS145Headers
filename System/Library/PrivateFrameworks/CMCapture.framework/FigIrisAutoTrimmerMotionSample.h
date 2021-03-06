/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class NSDictionary, NSMutableDictionary;

@interface FigIrisAutoTrimmerMotionSample : NSObject {

	int _vitalityObjectCount;
	double _timestamp;
	double _deltaPeriod;
	NSDictionary* _inferences;
	NSMutableDictionary* _intermediateCalculations;
	SCD_Struct_Fi116 _gravity;
	SCD_Struct_BW7 _originatingFrameTime;
	SCD_Struct_BW86 _attitude;
	SCD_Struct_BW86 _delta;
	SCD_Struct_BW86 _accel;

}

@property (nonatomic,readonly) SCD_Struct_BW7 originatingFrameTime;                         //@synthesize originatingFrameTime=_originatingFrameTime - In the implementation block
@property (nonatomic,readonly) double timestamp;                                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW7 cmTimestamp; 
@property (nonatomic,readonly) double deltaPeriod;                                          //@synthesize deltaPeriod=_deltaPeriod - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW86 attitude;                                    //@synthesize attitude=_attitude - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW86 delta;                                       //@synthesize delta=_delta - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW86 accel;                                       //@synthesize accel=_accel - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi116 gravity;                                    //@synthesize gravity=_gravity - In the implementation block
@property (nonatomic,retain) NSDictionary * inferences;                                     //@synthesize inferences=_inferences - In the implementation block
@property (assign,nonatomic) int vitalityObjectCount;                                       //@synthesize vitalityObjectCount=_vitalityObjectCount - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * intermediateCalculations;              //@synthesize intermediateCalculations=_intermediateCalculations - In the implementation block
+(void)initialize;
-(void)dealloc;
-(SCD_Struct_Fi116)gravity;
-(double)timestamp;
-(SCD_Struct_BW86)delta;
-(SCD_Struct_BW86)attitude;
-(NSDictionary *)inferences;
-(id)initWithAttitude:(const SCD_Struct_BW86*)arg1 gravity:(const SCD_Struct_Fi116*)arg2 motionTimestamp:(double)arg3 frameTimestamp:(SCD_Struct_BW7)arg4 previousSample:(id)arg5 ;
-(SCD_Struct_BW86)attitudeRelativeTo:(id)arg1 ;
-(void)prepareIntermediates:(long long)arg1 ;
-(SCD_Struct_BW7)cmTimestamp;
-(SCD_Struct_BW7)originatingFrameTime;
-(double)deltaPeriod;
-(SCD_Struct_BW86)accel;
-(void)setInferences:(NSDictionary *)arg1 ;
-(int)vitalityObjectCount;
-(void)setVitalityObjectCount:(int)arg1 ;
-(NSMutableDictionary *)intermediateCalculations;
@end

