/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICPAPlayActivityEnqueuerProperties : PBCodable <NSCopying> {

	unsigned long long _storeAccountID;
	NSString* _buildVersion;
	NSString* _deviceGUID;
	NSString* _deviceName;
	NSString* _storeFrontID;
	int _systemReleaseType;
	NSString* _timeZoneName;
	BOOL _privateListeningEnabled;
	BOOL _sBEnabled;
	SCD_Struct_IC3 _has;

}

@property (nonatomic,readonly) BOOL hasBuildVersion; 
@property (nonatomic,retain) NSString * buildVersion;                        //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceGUID; 
@property (nonatomic,retain) NSString * deviceGUID;                          //@synthesize deviceGUID=_deviceGUID - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                          //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeZoneName; 
@property (nonatomic,retain) NSString * timeZoneName;                        //@synthesize timeZoneName=_timeZoneName - In the implementation block
@property (assign,nonatomic) BOOL hasSystemReleaseType; 
@property (assign,nonatomic) int systemReleaseType;                          //@synthesize systemReleaseType=_systemReleaseType - In the implementation block
@property (assign,nonatomic) BOOL hasSBEnabled; 
@property (assign,nonatomic) BOOL sBEnabled;                                 //@synthesize sBEnabled=_sBEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasStoreAccountID; 
@property (assign,nonatomic) unsigned long long storeAccountID;              //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,readonly) BOOL hasStoreFrontID; 
@property (nonatomic,retain) NSString * storeFrontID;                        //@synthesize storeFrontID=_storeFrontID - In the implementation block
@property (assign,nonatomic) BOOL hasPrivateListeningEnabled; 
@property (assign,nonatomic) BOOL privateListeningEnabled;                   //@synthesize privateListeningEnabled=_privateListeningEnabled - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)deviceName;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)buildVersion;
-(BOOL)hasTimeZoneName;
-(NSString *)timeZoneName;
-(void)setTimeZoneName:(NSString *)arg1 ;
-(void)setBuildVersion:(NSString *)arg1 ;
-(BOOL)hasDeviceName;
-(void)setDeviceGUID:(NSString *)arg1 ;
-(void)setStoreFrontID:(NSString *)arg1 ;
-(BOOL)hasBuildVersion;
-(BOOL)hasDeviceGUID;
-(int)systemReleaseType;
-(void)setSystemReleaseType:(int)arg1 ;
-(void)setHasSystemReleaseType:(BOOL)arg1 ;
-(BOOL)hasSystemReleaseType;
-(void)setSBEnabled:(BOOL)arg1 ;
-(void)setHasSBEnabled:(BOOL)arg1 ;
-(BOOL)hasSBEnabled;
-(void)setStoreAccountID:(unsigned long long)arg1 ;
-(void)setHasStoreAccountID:(BOOL)arg1 ;
-(BOOL)hasStoreAccountID;
-(BOOL)hasStoreFrontID;
-(void)setPrivateListeningEnabled:(BOOL)arg1 ;
-(void)setHasPrivateListeningEnabled:(BOOL)arg1 ;
-(BOOL)hasPrivateListeningEnabled;
-(NSString *)deviceGUID;
-(BOOL)sBEnabled;
-(unsigned long long)storeAccountID;
-(NSString *)storeFrontID;
-(BOOL)privateListeningEnabled;
@end

