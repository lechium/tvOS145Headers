/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSSet;


@protocol WiFiCandidateNetwork <NSObject,TBScorable>
@property (nonatomic,copy) NSString * SSID; 
@property (nonatomic,readonly) NSSet * accessPoints; 
@property (nonatomic,copy,readonly) NSString * password; 
@property (nonatomic,readonly) long long source; 
@property (nonatomic,readonly) NSSet * attributes; 
@property (assign,nonatomic) BOOL matched; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long venueGroup; 
@property (nonatomic,readonly) unsigned venueType; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@optional
-(NSString *)uniqueIdentifier;

@required
-(NSString *)password;
-(unsigned long long)type;
-(long long)source;
-(NSSet *)attributes;
-(NSSet *)accessPoints;
-(unsigned long long)venueGroup;
-(unsigned)venueType;
-(void)setSSID:(id)arg1;
-(NSString *)SSID;
-(void)setMatched:(BOOL)arg1;
-(BOOL)matched;
-(BOOL)containsAccessPointMatchingBSSIDs:(id)arg1;

@end

