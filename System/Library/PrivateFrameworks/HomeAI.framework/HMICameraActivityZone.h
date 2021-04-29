/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSArray, NSString;

@interface HMICameraActivityZone : HMFObject <NSSecureCoding, HMFLogging> {

	BOOL _inclusion;
	NSArray* _points;

}

@property (copy,readonly) NSArray * points;                          //@synthesize points=_points - In the implementation block
@property (getter=isInclusion,readonly) BOOL inclusion;              //@synthesize inclusion=_inclusion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)filterEvents:(id)arg1 withActivityZones:(id)arg2 motionDetection:(id)arg3 insetPercentageInclusion:(float)arg4 insetPercentageExclusion:(float)arg5 ;
+(void)generateAndSubmitStats:(id)arg1 filteredEvents:(id)arg2 motionDetection:(id)arg3 activityZones:(id)arg4 ;
+(void)submitCoreAnalyticsEvent:(id)arg1 filteringLevel:(id)arg2 numberOfDetectedObjects:(id)arg3 ;
+(id)activityZonesFromString:(id)arg1 isInclusion:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)points;
-(id)initWithPoints:(id)arg1 ;
-(id)initWithPoints:(id)arg1 isInclusion:(BOOL)arg2 ;
-(BOOL)saveToJsonActivityZones:(id)arg1 motionDetection:(id)arg2 videoFragmentUrl:(id)arg3 frameId:(id)arg4 UUID:(id)arg5 detectionID:(id)arg6 zoneID:(id)arg7 ;
-(BOOL)isInclusion;
-(BOOL)overlapsWithElipseInsideRect:(CGRect)arg1 ;
-(unsigned long long)activityZoneType;
-(BOOL)overlapsWithElipseInsideRect:(CGRect)arg1 withInsetPercentage:(float)arg2 ;
-(BOOL)checkIfObjectIsStaticWithBoundingBox:(CGRect)arg1 motionDetection:(id)arg2 eventClass:(Class)arg3 ;
-(BOOL)containsEvent:(id)arg1 withInsetPercentage:(float)arg2 ;
-(id)jsonReperesentaionOfDetectedObject:(id)arg1 motionDetection:(id)arg2 eventClass:(id)arg3 ;
-(BOOL)containsVectorWithSource:(CGPoint)arg1 destination:(CGPoint)arg2 ;
@end

