/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNGeometry;

@interface SCNLevelOfDetail : NSObject <NSCopying, NSSecureCoding> {

	C3DLODRef _lod;
	long long _mode;
	SCNGeometry* _geometry;

}

@property (readonly) SCNGeometry * geometry; 
@property (readonly) double screenSpaceRadius; 
@property (readonly) double worldSpaceDistance; 
+(BOOL)supportsSecureCoding;
+(id)levelOfDetailWithGeometry:(id)arg1 screenSpaceRadius:(double)arg2 ;
+(id)levelOfDetailWithGeometry:(id)arg1 worldSpaceDistance:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)thresholdValue;
-(SCNGeometry *)geometry;
-(const void*)__CFObject;
-(long long)thresholdMode;
-(double)screenSpaceRadius;
-(double)worldSpaceDistance;
-(void)_setupWithGeometry:(id)arg1 thresholdMode:(long long)arg2 value:(double)arg3 ;
-(id)initWithGeometry:(id)arg1 thresholdMode:(long long)arg2 lod:(C3DLODRef)arg3 ;
-(void)_customEncodingOfSCNLevelOfDetail:(id)arg1 ;
-(void)_didDecodeSCNLevelOfDetail:(id)arg1 ;
-(id)initWithGeometry:(id)arg1 thresholdMode:(long long)arg2 thresholdValue:(id)arg3 ;
@end

