/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WiFiAnalyticsAWDWiFiNWActivityRateAndAggregation : PBCodable <NSCopying> {

	SCD_Struct_Wi8* _ampduAGGs;
	SCD_Struct_Wi8* _rxMCSSuccess;
	SCD_Struct_Wi8* _rxVHTSuccess;
	SCD_Struct_Wi8* _txMCSSuccess;
	SCD_Struct_Wi8* _txVHTSuccess;

}

@property (nonatomic,readonly) unsigned long long rxVHTSuccessCount; 
@property (nonatomic,readonly) unsigned long long* rxVHTSuccess; 
@property (nonatomic,readonly) unsigned long long txVHTSuccessCount; 
@property (nonatomic,readonly) unsigned long long* txVHTSuccess; 
@property (nonatomic,readonly) unsigned long long rxMCSSuccessCount; 
@property (nonatomic,readonly) unsigned long long* rxMCSSuccess; 
@property (nonatomic,readonly) unsigned long long txMCSSuccessCount; 
@property (nonatomic,readonly) unsigned long long* txMCSSuccess; 
@property (nonatomic,readonly) unsigned long long ampduAGGsCount; 
@property (nonatomic,readonly) unsigned long long* ampduAGGs; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)rxVHTSuccessCount;
-(void)clearRxVHTSuccess;
-(unsigned long long)rxVHTSuccessAtIndex:(unsigned long long)arg1 ;
-(void)addRxVHTSuccess:(unsigned long long)arg1 ;
-(unsigned long long)txVHTSuccessCount;
-(void)clearTxVHTSuccess;
-(unsigned long long)txVHTSuccessAtIndex:(unsigned long long)arg1 ;
-(void)addTxVHTSuccess:(unsigned long long)arg1 ;
-(unsigned long long)rxMCSSuccessCount;
-(void)clearRxMCSSuccess;
-(unsigned long long)rxMCSSuccessAtIndex:(unsigned long long)arg1 ;
-(void)addRxMCSSuccess:(unsigned long long)arg1 ;
-(unsigned long long)txMCSSuccessCount;
-(void)clearTxMCSSuccess;
-(unsigned long long)txMCSSuccessAtIndex:(unsigned long long)arg1 ;
-(void)addTxMCSSuccess:(unsigned long long)arg1 ;
-(unsigned long long)ampduAGGsCount;
-(void)clearAmpduAGGs;
-(unsigned long long)ampduAGGAtIndex:(unsigned long long)arg1 ;
-(void)addAmpduAGG:(unsigned long long)arg1 ;
-(unsigned long long*)rxVHTSuccess;
-(void)setRxVHTSuccess:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long*)txVHTSuccess;
-(void)setTxVHTSuccess:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long*)rxMCSSuccess;
-(void)setRxMCSSuccess:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long*)txMCSSuccess;
-(void)setTxMCSSuccess:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long*)ampduAGGs;
-(void)setAmpduAGGs:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
@end

