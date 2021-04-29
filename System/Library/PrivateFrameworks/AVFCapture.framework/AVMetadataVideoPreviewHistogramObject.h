/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVMetadataObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AVMetadataVideoPreviewHistogramObject : AVMetadataObject <NSCopying> {

	NSData* _lumaHistogramData;

}

@property (readonly) NSData * lumaHistogramData;              //@synthesize lumaHistogramData=_lumaHistogramData - In the implementation block
+(id)videoPreviewHistogramObjectWithLumaHistogramData:(id)arg1 input:(id)arg2 time:(SCD_Struct_AV0)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 ;
-(id)initWithLumaHistogramData:(id)arg1 time:(SCD_Struct_AV0)arg2 sourceCaptureInput:(id)arg3 ;
-(NSData *)lumaHistogramData;
@end

