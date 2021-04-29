/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@interface SCNBillboardConstraint : SCNConstraint {

	unsigned long long _freeAxes;
	BOOL _preserveScale;

}

@property (assign,nonatomic) unsigned long long freeAxes;              //@synthesize freeAxes=_freeAxes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)billboardConstraint;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPreserveScale:(BOOL)arg1 ;
-(void)setFreeAxes:(unsigned long long)arg1 ;
-(unsigned long long)freeAxes;
-(BOOL)preserveScale;
@end

