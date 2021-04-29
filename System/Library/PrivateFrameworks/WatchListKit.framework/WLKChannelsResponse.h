/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSDictionary, NSDate;

@interface WLKChannelsResponse : NSObject {

	BOOL _filtered;
	NSArray* _orderedChannels;
	NSDictionary* _channels;
	NSDate* _expirationDate;
	unsigned long long _environmentHash;

}

@property (nonatomic,copy) NSDate * expirationDate;                           //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) BOOL filtered;                                   //@synthesize filtered=_filtered - In the implementation block
@property (assign,nonatomic) unsigned long long environmentHash;              //@synthesize environmentHash=_environmentHash - In the implementation block
@property (nonatomic,retain) NSArray * orderedChannels;                       //@synthesize orderedChannels=_orderedChannels - In the implementation block
@property (nonatomic,retain) NSDictionary * channels;                         //@synthesize channels=_channels - In the implementation block
+(id)parseChannelsFromPayload:(id)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)filtered;
-(void)setFiltered:(BOOL)arg1 ;
-(NSDictionary *)channels;
-(void)setChannels:(NSDictionary *)arg1 ;
-(unsigned long long)environmentHash;
-(id)initWithDictionary:(id)arg1 expirationDate:(id)arg2 environmentHash:(unsigned long long)arg3 filtered:(BOOL)arg4 ;
-(BOOL)isValidForFiltered:(BOOL)arg1 ;
-(NSArray *)orderedChannels;
-(void)setEnvironmentHash:(unsigned long long)arg1 ;
-(void)setOrderedChannels:(NSArray *)arg1 ;
@end

