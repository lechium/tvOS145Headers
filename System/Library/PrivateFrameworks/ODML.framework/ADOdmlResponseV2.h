/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ODML.framework/ODML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ODML/ODML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ADOdmlResponseV2 : PBCodable <NSCopying> {

	NSMutableArray* _features;
	BOOL _odmlEnabled;
	SCD_Struct_AD3 _has;

}

@property (assign,nonatomic) BOOL hasOdmlEnabled; 
@property (assign,nonatomic) BOOL odmlEnabled;                       //@synthesize odmlEnabled=_odmlEnabled - In the implementation block
@property (nonatomic,retain) NSMutableArray * features;              //@synthesize features=_features - In the implementation block
+(Class)featuresType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)features;
-(void)setFeatures:(NSMutableArray *)arg1 ;
-(id)featuresAtIndex:(unsigned long long)arg1 ;
-(void)addFeatures:(id)arg1 ;
-(unsigned long long)featuresCount;
-(void)clearFeatures;
-(void)setOdmlEnabled:(BOOL)arg1 ;
-(void)setHasOdmlEnabled:(BOOL)arg1 ;
-(BOOL)hasOdmlEnabled;
-(BOOL)odmlEnabled;
@end

