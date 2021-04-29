/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomeStreams/BiomeStreams-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BMPBAppLaunchEvent : PBCodable <NSCopying> {

	double _absoluteTimestamp;
	double _duration;
	NSString* _bundleID;
	NSString* _launchReason;
	int _launchType;
	BOOL _string;
	SCD_Struct_BM7 _has;

}

@property (nonatomic,readonly) BOOL hasLaunchReason; 
@property (nonatomic,retain) NSString * launchReason;                //@synthesize launchReason=_launchReason - In the implementation block
@property (assign,nonatomic) BOOL hasLaunchType; 
@property (assign,nonatomic) int launchType;                         //@synthesize launchType=_launchType - In the implementation block
@property (assign,nonatomic) BOOL hasString; 
@property (assign,nonatomic) BOOL string;                            //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) BOOL hasAbsoluteTimestamp; 
@property (assign,nonatomic) double absoluteTimestamp;               //@synthesize absoluteTimestamp=_absoluteTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) double duration;                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                    //@synthesize bundleID=_bundleID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)string;
-(void)setString:(BOOL)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasBundleID;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(double)absoluteTimestamp;
-(void)setAbsoluteTimestamp:(double)arg1 ;
-(BOOL)hasString;
-(NSString *)launchReason;
-(void)setLaunchReason:(NSString *)arg1 ;
-(void)setHasAbsoluteTimestamp:(BOOL)arg1 ;
-(BOOL)hasAbsoluteTimestamp;
-(BOOL)hasLaunchReason;
-(int)launchType;
-(void)setLaunchType:(int)arg1 ;
-(void)setHasLaunchType:(BOOL)arg1 ;
-(BOOL)hasLaunchType;
-(id)launchTypeAsString:(int)arg1 ;
-(int)StringAsLaunchType:(id)arg1 ;
-(void)setHasString:(BOOL)arg1 ;
@end

