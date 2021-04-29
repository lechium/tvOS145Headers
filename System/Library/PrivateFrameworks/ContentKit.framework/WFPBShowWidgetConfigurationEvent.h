/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBShowWidgetConfigurationEvent : PBCodable <NSCopying> {

	NSString* _appBundleIdentifier;
	NSString* _intentType;
	NSString* _key;
	NSString* _sizeClass;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                              //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleIdentifier; 
@property (nonatomic,retain) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentType; 
@property (nonatomic,retain) NSString * intentType;                       //@synthesize intentType=_intentType - In the implementation block
@property (nonatomic,readonly) BOOL hasSizeClass; 
@property (nonatomic,retain) NSString * sizeClass;                        //@synthesize sizeClass=_sizeClass - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)setIntentType:(NSString *)arg1 ;
-(NSString *)intentType;
-(BOOL)hasIntentType;
-(BOOL)hasKey;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)sizeClass;
-(void)setSizeClass:(NSString *)arg1 ;
-(BOOL)hasAppBundleIdentifier;
-(BOOL)hasSizeClass;
@end
