/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVVideoCompositionLayerInstructionInternal;

@interface AVVideoCompositionLayerInstruction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {

	AVVideoCompositionLayerInstructionInternal* _layerInstruction;

}

@property (nonatomic,readonly) int trackID; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)konaSerializeVideoLayerInstruction;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)trackID;
-(void)setTrackID:(int)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 atTime:(SCD_Struct_AV6)arg2 ;
-(void)setOpacity:(float)arg1 atTime:(SCD_Struct_AV6)arg2 ;
-(void)setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
-(BOOL)getTransformRampForTime:(SCD_Struct_AV6)arg1 startTransform:(CGAffineTransform*)arg2 endTransform:(CGAffineTransform*)arg3 timeRange:(SCD_Struct_AV7*)arg4 ;
-(void)setTransformRampFromStartTransform:(CGAffineTransform)arg1 toEndTransform:(CGAffineTransform)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
-(BOOL)getOpacityRampForTime:(SCD_Struct_AV6)arg1 startOpacity:(float*)arg2 endOpacity:(float*)arg3 timeRange:(SCD_Struct_AV7*)arg4 ;
-(BOOL)getCropRectangleRampForTime:(SCD_Struct_AV6)arg1 startCropRectangle:(CGRect*)arg2 endCropRectangle:(CGRect*)arg3 timeRange:(SCD_Struct_AV7*)arg4 ;
-(void)setCropRectangleRampFromStartCropRectangle:(CGRect)arg1 toEndCropRectangle:(CGRect)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
-(void)setCropRectangle:(CGRect)arg1 atTime:(SCD_Struct_AV6)arg2 ;
-(id)dictionaryRepresentationWithTimeRange:(SCD_Struct_AV7)arg1 ;
-(void)_setValuesFromDictionary:(id)arg1 timeRange:(SCD_Struct_AV7)arg2 ;
-(void)_setTransformRamps:(id)arg1 ;
-(void)_setOpacityRamps:(id)arg1 ;
-(void)_setCropRectangleRamps:(id)arg1 ;
-(void)_setTransformRampFromStartTransform:(CGAffineTransform)arg1 toEndTransform:(CGAffineTransform)arg2 timeRange:(SCD_Struct_AV7)arg3 selector:(SEL)arg4 ;
-(void)_setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(SCD_Struct_AV7)arg3 selector:(SEL)arg4 ;
-(void)_setCropRectangleRampFromStartCropRectangle:(CGRect)arg1 toEndCropRectangle:(CGRect)arg2 timeRange:(SCD_Struct_AV7)arg3 selector:(SEL)arg4 ;
@end

