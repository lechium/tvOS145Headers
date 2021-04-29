/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigVideoCaptureConnectionConfiguration.h>

@interface FigPointCloudDataCaptureConnectionConfiguration : FigVideoCaptureConnectionConfiguration {

	int _projectorMode;
	BOOL _supplementalPointCloudData;

}

@property (assign,nonatomic) int projectorMode;                            //@synthesize projectorMode=_projectorMode - In the implementation block
@property (assign,nonatomic) BOOL supplementalPointCloudData;              //@synthesize supplementalPointCloudData=_supplementalPointCloudData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)projectorMode;
-(void)setProjectorMode:(int)arg1 ;
-(void)setSupplementalPointCloudData:(BOOL)arg1 ;
-(BOOL)supplementalPointCloudData;
@end
