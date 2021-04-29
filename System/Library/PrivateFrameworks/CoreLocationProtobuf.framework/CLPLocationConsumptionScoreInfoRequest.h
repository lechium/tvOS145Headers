/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CLPLocationConsumptionScoreInfoRequest : PBRequest <NSCopying> {

	NSMutableArray* _locationConsumptionScoreInfos;

}

@property (nonatomic,retain) NSMutableArray * locationConsumptionScoreInfos;              //@synthesize locationConsumptionScoreInfos=_locationConsumptionScoreInfos - In the implementation block
+(Class)locationConsumptionScoreInfoType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addLocationConsumptionScoreInfo:(id)arg1 ;
-(unsigned long long)locationConsumptionScoreInfosCount;
-(void)clearLocationConsumptionScoreInfos;
-(id)locationConsumptionScoreInfoAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)locationConsumptionScoreInfos;
-(void)setLocationConsumptionScoreInfos:(NSMutableArray *)arg1 ;
@end

