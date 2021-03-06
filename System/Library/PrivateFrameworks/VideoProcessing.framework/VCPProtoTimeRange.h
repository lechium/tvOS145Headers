/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoTime;

@interface VCPProtoTimeRange : PBCodable <NSCopying> {

	VCPProtoTime* _duration;
	VCPProtoTime* _start;

}

@property (nonatomic,retain) VCPProtoTime * start;                 //@synthesize start=_start - In the implementation block
@property (nonatomic,retain) VCPProtoTime * duration;              //@synthesize duration=_duration - In the implementation block
+(id)timeRangeWithCMTimeRange:(SCD_Struct_VC17)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(VCPProtoTime *)start;
-(id)dictionaryRepresentation;
-(VCPProtoTime *)duration;
-(void)setDuration:(VCPProtoTime *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStart:(VCPProtoTime *)arg1 ;
-(SCD_Struct_VC17)timeRangeValue;
@end

