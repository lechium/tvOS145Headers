/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MDLComponent.h>

@protocol MDLJointAnimation;
@class MDLSkeleton, NSArray, NSString;

@interface MDLAnimationBindComponent : NSObject <NSCopying, MDLComponent> {

	MDLSkeleton* _skeleton;
	id<MDLJointAnimation> _jointAnimation;
	NSArray* _jointPaths;
	SCD_Struct_MD1 _geometryBindTransform;

}

@property (nonatomic,retain) MDLSkeleton * skeleton;                            //@synthesize skeleton=_skeleton - In the implementation block
@property (nonatomic,retain) id<MDLJointAnimation> jointAnimation;              //@synthesize jointAnimation=_jointAnimation - In the implementation block
@property (nonatomic,retain) NSArray * jointPaths;                              //@synthesize jointPaths=_jointPaths - In the implementation block
@property (assign,nonatomic) SCD_Struct_MD1 geometryBindTransform;              //@synthesize geometryBindTransform=_geometryBindTransform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(MDLSkeleton *)skeleton;
-(NSArray *)jointPaths;
-(void)setSkeleton:(MDLSkeleton *)arg1 ;
-(void)setJointAnimation:(id<MDLJointAnimation>)arg1 ;
-(void)setGeometryBindTransform:(SCD_Struct_MD1)arg1 ;
-(void)setJointPaths:(NSArray *)arg1 ;
-(id<MDLJointAnimation>)jointAnimation;
-(SCD_Struct_MD1)geometryBindTransform;
@end

