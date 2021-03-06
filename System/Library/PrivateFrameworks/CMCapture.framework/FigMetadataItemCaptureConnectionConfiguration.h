/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureConnectionConfiguration.h>

@interface FigMetadataItemCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {

	opaqueCMFormatDescriptionRef _formatDescription;
	OpaqueCMClockRef _clock;
	int _sourceSubType;

}

@property (nonatomic,retain) opaqueCMFormatDescriptionRef formatDescription;              //@synthesize formatDescription=_formatDescription - In the implementation block
@property (nonatomic,retain) OpaqueCMClockRef clock;                                      //@synthesize clock=_clock - In the implementation block
@property (assign,nonatomic) int sourceSubType;                                           //@synthesize sourceSubType=_sourceSubType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(OpaqueCMClockRef)clock;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(void)setClock:(OpaqueCMClockRef)arg1 ;
-(void)setFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)setSourceSubType:(int)arg1 ;
-(int)sourceSubType;
@end

