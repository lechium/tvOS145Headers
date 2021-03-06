/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCPProtoImageExposureResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	float _exposure;
	float _underExpose;
	SCD_Struct_VC51 _has;

}

@property (assign,nonatomic) float exposure;                   //@synthesize exposure=_exposure - In the implementation block
@property (assign,nonatomic) BOOL hasUnderExpose; 
@property (assign,nonatomic) float underExpose;                //@synthesize underExpose=_underExpose - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)exposure;
-(void)setExposure:(float)arg1 ;
-(id)exportToLegacyDictionary;
-(void)setUnderExpose:(float)arg1 ;
-(void)setHasUnderExpose:(BOOL)arg1 ;
-(BOOL)hasUnderExpose;
-(float)underExpose;
@end

