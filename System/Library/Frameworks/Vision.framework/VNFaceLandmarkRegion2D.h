/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNFaceLandmarkRegion.h>

@class NSMutableDictionary, NSArray;

@interface VNFaceLandmarkRegion2D : VNFaceLandmarkRegion {

	NSMutableDictionary* _sizedPointsCache;
	os_unfair_lock_s _pointsCalculatorLock;
	* _points;
	NSArray* _precisionEstimatesPerPoint;
	NSArray* _occlusionFlagsPerPoint;

}

@property (readonly) const * points;                                    //@synthesize points=_points - In the implementation block
@property (readonly) NSArray * occlusionFlagsPerPoint;                  //@synthesize occlusionFlagsPerPoint=_occlusionFlagsPerPoint - In the implementation block
@property (readonly) const CGPoint* normalizedPoints; 
@property (readonly) NSArray * precisionEstimatesPerPoint;              //@synthesize precisionEstimatesPerPoint=_precisionEstimatesPerPoint - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const *)points;
-(const CGPoint*)pointsInImageOfSize:(CGSize)arg1 ;
-(2)pointAtIndex:(unsigned long long)arg1 ;
-(void)_initLocks;
-(id)initWithRequestRevision:(unsigned long long)arg1 faceBoundingBox:(CGRect)arg2 ;
-(const CGPoint*)normalizedPoints;
-(id)initWithRequestRevision:(unsigned long long)arg1 faceBoundingBox:(CGRect)arg2 points:(5*)arg3 pointCount:(unsigned long long)arg4 precisionEstimatesPerPoint:(id)arg5 occlusionFlagsPerPoint:(id)arg6 ;
-(NSArray *)precisionEstimatesPerPoint;
-(NSArray *)occlusionFlagsPerPoint;
@end

