/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiPolicy/WiFiCandidateNetwork.h>

@protocol TBScore, TBNetwork;
@class NSString, NSSet;

@interface WiFi3BarsNetwork : NSObject <WiFiCandidateNetwork> {

	BOOL matched;
	BOOL _unwantedNetworkName;
	unsigned _venueType;
	NSString* password;
	NSSet* _attributes;
	id<TBScore> _qualityScore;
	id<TBScore> _popularityScore;
	unsigned long long _type;
	unsigned long long _venueGroup;
	NSString* _uniqueIdentifier;
	NSString* _SSID;
	id<TBNetwork> _network;

}

@property (nonatomic,copy) NSString * uniqueIdentifier;                    //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (setter=SID,nonatomic,copy) NSString * SSID;                     //@synthesize SSID=_SSID - In the implementation block
@property (nonatomic,retain) id<TBNetwork> network;                        //@synthesize network=_network - In the implementation block
@property (assign,nonatomic) BOOL unwantedNetworkName;                     //@synthesize unwantedNetworkName=_unwantedNetworkName - In the implementation block
@property (nonatomic,readonly) NSSet * accessPoints; 
@property (nonatomic,copy,readonly) NSString * password; 
@property (nonatomic,readonly) long long source; 
@property (nonatomic,readonly) NSSet * attributes;                         //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) BOOL matched; 
@property (nonatomic,readonly) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long venueGroup;              //@synthesize venueGroup=_venueGroup - In the implementation block
@property (nonatomic,readonly) unsigned venueType;                         //@synthesize venueType=_venueType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TBScore> popularityScore;                //@synthesize popularityScore=_popularityScore - In the implementation block
@property (nonatomic,readonly) id<TBScore> qualityScore;                   //@synthesize qualityScore=_qualityScore - In the implementation block
-(NSString *)description;
-(NSString *)password;
-(unsigned long long)type;
-(long long)source;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSSet *)attributes;
-(id<TBNetwork>)network;
-(NSSet *)accessPoints;
-(unsigned long long)venueGroup;
-(unsigned)venueType;
-(void)setSSID:(NSString *)arg1 ;
-(NSString *)SSID;
-(void)setNetwork:(id<TBNetwork>)arg1 ;
-(id)initWithNetwork:(id)arg1 ;
-(id<TBScore>)qualityScore;
-(void)setMatched:(BOOL)arg1 ;
-(BOOL)unwantedNetworkName;
-(void)setUnwantedNetworkName:(BOOL)arg1 ;
-(BOOL)matched;
-(id<TBScore>)popularityScore;
-(BOOL)containsAccessPointMatchingBSSIDs:(id)arg1 ;
@end

