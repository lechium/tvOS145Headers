/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface AWDMMCSError : PBCodable <NSCopying> {

	int _code;
	NSString* _domain;
	NSMutableArray* _underlyingErrors;
	SCD_Struct_AW5 _has;

}

@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;                              //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL hasCode; 
@property (assign,nonatomic) int code;                                       //@synthesize code=_code - In the implementation block
@property (nonatomic,retain) NSMutableArray * underlyingErrors;              //@synthesize underlyingErrors=_underlyingErrors - In the implementation block
+(Class)underlyingErrorsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(NSString *)domain;
-(int)code;
-(void)setDomain:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)underlyingErrors;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCode:(int)arg1 ;
-(void)setHasCode:(BOOL)arg1 ;
-(BOOL)hasCode;
-(BOOL)hasDomain;
-(void)setUnderlyingErrors:(NSMutableArray *)arg1 ;
-(void)addUnderlyingErrors:(id)arg1 ;
-(unsigned long long)underlyingErrorsCount;
-(void)clearUnderlyingErrors;
-(id)underlyingErrorsAtIndex:(unsigned long long)arg1 ;
@end

