/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface ICIAMLogEventRequest : PBRequest <NSCopying> {

	long long _dSID;
	NSString* _applicationMessageIdentifier;
	NSString* _deviceID;
	NSMutableArray* _eventParameters;
	SCD_Struct_IC8 _has;

}

@property (nonatomic,readonly) BOOL hasApplicationMessageIdentifier; 
@property (nonatomic,retain) NSString * applicationMessageIdentifier;              //@synthesize applicationMessageIdentifier=_applicationMessageIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasDSID; 
@property (assign,nonatomic) long long dSID;                                       //@synthesize dSID=_dSID - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceID; 
@property (nonatomic,retain) NSString * deviceID;                                  //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSMutableArray * eventParameters;                     //@synthesize eventParameters=_eventParameters - In the implementation block
+(Class)eventParametersType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDSID:(long long)arg1 ;
-(void)setHasDSID:(BOOL)arg1 ;
-(BOOL)hasDSID;
-(BOOL)hasDeviceID;
-(long long)dSID;
-(BOOL)hasApplicationMessageIdentifier;
-(void)clearEventParameters;
-(void)addEventParameters:(id)arg1 ;
-(unsigned long long)eventParametersCount;
-(id)eventParametersAtIndex:(unsigned long long)arg1 ;
-(NSString *)applicationMessageIdentifier;
-(void)setApplicationMessageIdentifier:(NSString *)arg1 ;
-(NSMutableArray *)eventParameters;
-(void)setEventParameters:(NSMutableArray *)arg1 ;
@end

