/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, MDLMatrix4x4Array;

@interface MDLSkeleton : MDLObject <NSCopying> {

	NSArray* _jointPaths;
	MDLMatrix4x4Array* _jointBindTransforms;
	MDLMatrix4x4Array* _jointRestTransforms;

}

@property (nonatomic,readonly) NSArray * jointPaths;                                 //@synthesize jointPaths=_jointPaths - In the implementation block
@property (nonatomic,readonly) MDLMatrix4x4Array * jointBindTransforms;              //@synthesize jointBindTransforms=_jointBindTransforms - In the implementation block
@property (nonatomic,readonly) MDLMatrix4x4Array * jointRestTransforms;              //@synthesize jointRestTransforms=_jointRestTransforms - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)jointPaths;
-(MDLMatrix4x4Array *)jointBindTransforms;
-(id)initWithName:(id)arg1 jointPaths:(id)arg2 ;
-(MDLMatrix4x4Array *)jointRestTransforms;
@end
