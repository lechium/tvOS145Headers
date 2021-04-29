/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSNumber, NSMutableSet, NSUUID;

@interface HMIPersonBlob : HMFObject {

	float _personIouMax;
	NSNumber* _personIndex;
	NSMutableSet* _personIndices;
	NSUUID* _blobID;
	CGSize _frameDimensions;
	CGPoint _position;
	CGVector _motionMean;
	CGRect _regionOfInterest;
	CGRect _faceBoundingBox;
	CGRect _personBoundingBox;

}

@property (readonly) CGSize frameDimensions;                  //@synthesize frameDimensions=_frameDimensions - In the implementation block
@property (readonly) CGRect regionOfInterest;                 //@synthesize regionOfInterest=_regionOfInterest - In the implementation block
@property (assign) CGRect faceBoundingBox;                    //@synthesize faceBoundingBox=_faceBoundingBox - In the implementation block
@property (assign) CGRect personBoundingBox;                  //@synthesize personBoundingBox=_personBoundingBox - In the implementation block
@property (assign) CGPoint position;                          //@synthesize position=_position - In the implementation block
@property (assign) CGVector motionMean;                       //@synthesize motionMean=_motionMean - In the implementation block
@property (retain) NSNumber * personIndex;                    //@synthesize personIndex=_personIndex - In the implementation block
@property (retain) NSMutableSet * personIndices;              //@synthesize personIndices=_personIndices - In the implementation block
@property (assign) float personIouMax;                        //@synthesize personIouMax=_personIouMax - In the implementation block
@property (readonly) NSUUID * blobID;                         //@synthesize blobID=_blobID - In the implementation block
-(CGPoint)position;
-(void)setPosition:(CGPoint)arg1 ;
-(BOOL)isMoving;
-(CGRect)regionOfInterest;
-(CGRect)faceBoundingBox;
-(void)setFaceBoundingBox:(CGRect)arg1 ;
-(BOOL)isLost;
-(CGSize)frameDimensions;
-(void)_computeBlobPropertiesWithBoundingBox:(CGRect)arg1 personBoundingBox:(CGRect)arg2 dx:(double)arg3 dy:(double)arg4 motionVectors:(id)arg5 isDetection:(BOOL)arg6 ;
-(NSUUID *)blobID;
-(CGRect)personBoundingBox;
-(CGVector)motionMean;
-(double)boxDistanceToPersonBlob:(id)arg1 ;
-(double)sizeDistanceToPersonBlob:(id)arg1 ;
-(BOOL)isBijectiveToPersonBlob:(id)arg1 ;
-(void)setPersonBoundingBox:(CGRect)arg1 ;
-(NSMutableSet *)personIndices;
-(NSNumber *)personIndex;
-(float)personIouMax;
-(void)setMotionMean:(CGVector)arg1 ;
-(id)initWithPersonWithFaceEvent:(id)arg1 motionVectors:(id)arg2 personIndex:(int)arg3 regionOfInterest:(CGRect)arg4 frameDimensions:(CGSize)arg5 ;
-(id)initWithPersonWithoutFaceEvent:(id)arg1 personIndex:(int)arg2 regionOfInterest:(CGRect)arg3 frameDimensions:(CGSize)arg4 ;
-(id)initWithPersonBlob:(id)arg1 motionVectors:(id)arg2 personIndex:(int)arg3 regionOfInterest:(CGRect)arg4 frameDimensions:(CGSize)arg5 ;
-(double)similarityToPersonBlob:(id)arg1 ;
-(void)adjustFaceBoundingBoxFromPersonBlob:(id)arg1 ;
-(void)setPersonIndex:(NSNumber *)arg1 ;
-(void)setPersonIndices:(NSMutableSet *)arg1 ;
-(void)setPersonIouMax:(float)arg1 ;
@end

