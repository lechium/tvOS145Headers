/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICRadioPlaybackHistoryItem, NSString, NSArray, NSDictionary;

@interface ICRadioPlaybackHistory : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	ICRadioPlaybackHistoryItem* _currentTrack;
	long long _numberOfSkips;
	NSString* _stationIdentifier;
	NSArray* _tracks;

}

@property (nonatomic,copy,readonly) NSString * stationIdentifier;                           //@synthesize stationIdentifier=_stationIdentifier - In the implementation block
@property (nonatomic,readonly) long long numberOfSkips;                                     //@synthesize numberOfSkips=_numberOfSkips - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tracks; 
@property (nonatomic,copy,readonly) ICRadioPlaybackHistoryItem * currentTrack;              //@synthesize currentTrack=_currentTrack - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * propertyListRepresentation; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stationIdentifier;
-(NSArray *)tracks;
-(NSDictionary *)propertyListRepresentation;
-(id)initWithStationIdentifier:(id)arg1 ;
-(long long)numberOfSkips;
-(ICRadioPlaybackHistoryItem *)currentTrack;
@end
