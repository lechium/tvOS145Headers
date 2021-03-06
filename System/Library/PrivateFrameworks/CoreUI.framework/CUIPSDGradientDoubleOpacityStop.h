/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDGradientOpacityStop.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CUIPSDGradientDoubleOpacityStop : CUIPSDGradientOpacityStop <NSCoding> {

	double leadOutOpacity;

}
+(void)initialize;
+(id)doubleOpacityStopWithLocation:(double)arg1 leadInOpacity:(double)arg2 leadOutOpacity:(double)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)leadOutOpacity;
-(BOOL)isDoubleStop;
-(id)initWithLocation:(double)arg1 leadInOpacity:(double)arg2 leadOutOpacity:(double)arg3 ;
-(double)leadInOpacity;
@end

