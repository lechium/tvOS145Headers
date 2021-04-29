/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface ADConfigurationResponse : PBCodable <NSCopying> {

	int _bannerProxyType;
	NSString* _configVersion;
	NSMutableArray* _theConfigurations;
	NSString* _resourceConnectProxyURL;
	NSString* _resourceProxyURL;
	SCD_Struct_AD3 _has;

}

@property (nonatomic,retain) NSMutableArray * theConfigurations;              //@synthesize theConfigurations=_theConfigurations - In the implementation block
@property (nonatomic,readonly) BOOL hasResourceProxyURL; 
@property (nonatomic,retain) NSString * resourceProxyURL;                     //@synthesize resourceProxyURL=_resourceProxyURL - In the implementation block
@property (nonatomic,readonly) BOOL hasResourceConnectProxyURL; 
@property (nonatomic,retain) NSString * resourceConnectProxyURL;              //@synthesize resourceConnectProxyURL=_resourceConnectProxyURL - In the implementation block
@property (assign,nonatomic) BOOL hasBannerProxyType; 
@property (assign,nonatomic) int bannerProxyType;                             //@synthesize bannerProxyType=_bannerProxyType - In the implementation block
@property (nonatomic,readonly) BOOL hasConfigVersion; 
@property (nonatomic,retain) NSString * configVersion;                        //@synthesize configVersion=_configVersion - In the implementation block
+(Class)theConfigurationType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConfigVersion:(NSString *)arg1 ;
-(BOOL)hasConfigVersion;
-(NSString *)configVersion;
-(void)addTheConfiguration:(id)arg1 ;
-(unsigned long long)theConfigurationsCount;
-(void)clearTheConfigurations;
-(id)theConfigurationAtIndex:(unsigned long long)arg1 ;
-(void)setResourceProxyURL:(NSString *)arg1 ;
-(void)setResourceConnectProxyURL:(NSString *)arg1 ;
-(BOOL)hasResourceProxyURL;
-(BOOL)hasResourceConnectProxyURL;
-(int)bannerProxyType;
-(void)setBannerProxyType:(int)arg1 ;
-(void)setHasBannerProxyType:(BOOL)arg1 ;
-(BOOL)hasBannerProxyType;
-(id)bannerProxyTypeAsString:(int)arg1 ;
-(int)StringAsBannerProxyType:(id)arg1 ;
-(NSMutableArray *)theConfigurations;
-(void)setTheConfigurations:(NSMutableArray *)arg1 ;
-(NSString *)resourceProxyURL;
-(NSString *)resourceConnectProxyURL;
@end

