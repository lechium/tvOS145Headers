/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WatchListKit/WatchListKit-Structs.h>
#import <libobjc.A.dylib/WLKCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSDate, NSString, NSURL, NSNumber;

@interface WLKServerConfigurationResponse : NSObject <WLKCoding, NSCopying> {

	NSDictionary* _responseDictionary;
	NSDate* _expirationDate;
	unsigned long long _environmentHash;
	NSDictionary* _endpointsDictionary;

}

@property (nonatomic,readonly) NSDictionary * responseDictionary;                                  //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                                            //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) unsigned long long environmentHash;                                 //@synthesize environmentHash=_environmentHash - In the implementation block
@property (nonatomic,readonly) NSDictionary * endpointsDictionary;                                 //@synthesize endpointsDictionary=_endpointsDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * requiredRequestKeyValuePairsDictionary; 
@property (nonatomic,readonly) NSString * vppaStatusString; 
@property (nonatomic,readonly) long long vppaStatus; 
@property (nonatomic,readonly) NSURL * playActivityURL; 
@property (nonatomic,readonly) NSDictionary * features; 
@property (nonatomic,copy,readonly) NSString * utsk; 
@property (getter=isActiveUser,nonatomic,readonly) BOOL activeUser; 
@property (nonatomic,copy,readonly) NSNumber * vppaSessionDurationInMillis; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)expirationDate;
-(id)dictionaryRepresentation;
-(NSDictionary *)features;
-(id)_routes;
-(NSDictionary *)responseDictionary;
-(id)_userProperties;
-(id)initWithServerResponseDictionary:(id)arg1 expirationDate:(id)arg2 environmentHash:(unsigned long long)arg3 ;
-(id)_expirationDateFromResponse:(id)arg1 ;
-(unsigned long long)environmentHash;
-(BOOL)_v3Enabled;
-(id)_requiredRequestKVPMap;
-(id)_VPPAInfo;
-(NSString *)vppaStatusString;
-(id)_utskProperties;
-(NSDictionary *)requiredRequestKeyValuePairsDictionary;
-(id)_applicationProperties;
-(id)serverRouteNamed:(id)arg1 ;
-(id)configurationResponseByReplacingUTSK:(id)arg1 ;
-(NSNumber *)vppaSessionDurationInMillis;
-(long long)vppaStatus;
-(NSString *)utsk;
-(BOOL)isActiveUser;
-(id)utsc;
-(NSURL *)playActivityURL;
-(id)requiredRequestKeyValuePairsForType:(id)arg1 ;
-(BOOL)isValidIgnoringExpiration;
-(NSDictionary *)endpointsDictionary;
@end

