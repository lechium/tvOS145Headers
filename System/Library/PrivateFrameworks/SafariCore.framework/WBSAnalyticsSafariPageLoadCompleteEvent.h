/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariPageLoadCompleteEvent : PBCodable <NSCopying> {

	unsigned long long _configurationID;
	long long _errorCode;
	unsigned long long _pageID;
	unsigned long long _pageLoadTime;
	unsigned long long _timestamp;
	SCD_Struct_WB6 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasConfigurationID; 
@property (assign,nonatomic) unsigned long long configurationID;              //@synthesize configurationID=_configurationID - In the implementation block
@property (assign,nonatomic) BOOL hasPageID; 
@property (assign,nonatomic) unsigned long long pageID;                       //@synthesize pageID=_pageID - In the implementation block
@property (assign,nonatomic) BOOL hasPageLoadTime; 
@property (assign,nonatomic) unsigned long long pageLoadTime;                 //@synthesize pageLoadTime=_pageLoadTime - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                             //@synthesize errorCode=_errorCode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(long long)errorCode;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)setConfigurationID:(unsigned long long)arg1 ;
-(void)setHasConfigurationID:(BOOL)arg1 ;
-(BOOL)hasConfigurationID;
-(void)setPageID:(unsigned long long)arg1 ;
-(void)setHasPageID:(BOOL)arg1 ;
-(BOOL)hasPageID;
-(void)setPageLoadTime:(unsigned long long)arg1 ;
-(void)setHasPageLoadTime:(BOOL)arg1 ;
-(BOOL)hasPageLoadTime;
-(unsigned long long)configurationID;
-(unsigned long long)pageID;
-(unsigned long long)pageLoadTime;
@end

