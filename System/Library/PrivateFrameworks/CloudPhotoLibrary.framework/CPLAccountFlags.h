/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CPLAccountFlags : PBCodable <NSCopying> {

	long long _version;
	int _reason;
	BOOL _defaultHEVC;
	SCD_Struct_CP4 _has;

}

@property (assign,nonatomic) BOOL hasDefaultHEVC; 
@property (assign,nonatomic) BOOL defaultHEVC;                 //@synthesize defaultHEVC=_defaultHEVC - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) int reason;                       //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) long long version;                //@synthesize version=_version - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)reason;
-(long long)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setReason:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasReason:(BOOL)arg1 ;
-(BOOL)hasReason;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(id)reasonAsString:(int)arg1 ;
-(int)StringAsReason:(id)arg1 ;
-(void)setDefaultHEVC:(BOOL)arg1 ;
-(void)setHasDefaultHEVC:(BOOL)arg1 ;
-(BOOL)hasDefaultHEVC;
-(BOOL)defaultHEVC;
@end

