/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@interface BWTrackedFace : NSObject {

	id _trackingID;
	float _trackingDistance;
	CGRect _trackingRect;
	id _detectionID;
	CGRect _detectionRect;
	float _sizeToDistanceMultiplier;
	float _size;
	float _distance;

}

@property (nonatomic,retain) id trackingID;                       //@synthesize trackingID=_trackingID - In the implementation block
@property (assign,nonatomic) float trackingDistance; 
@property (assign,nonatomic) CGRect trackingRect;                 //@synthesize trackingRect=_trackingRect - In the implementation block
@property (nonatomic,readonly) id detectionID;                    //@synthesize detectionID=_detectionID - In the implementation block
@property (assign,nonatomic) CGRect detectionRect; 
@property (nonatomic,readonly) float size;                        //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) float distance;                    //@synthesize distance=_distance - In the implementation block
-(void)dealloc;
-(float)size;
-(float)distance;
-(id)trackingID;
-(void)setTrackingID:(id)arg1 ;
-(id)initWithDetectionID:(id)arg1 ;
-(CGRect)detectionRect;
-(void)setDetectionRect:(CGRect)arg1 ;
-(float)trackingDistance;
-(void)setTrackingDistance:(float)arg1 ;
-(CGRect)trackingRect;
-(void)setTrackingRect:(CGRect)arg1 ;
-(id)detectionID;
@end

