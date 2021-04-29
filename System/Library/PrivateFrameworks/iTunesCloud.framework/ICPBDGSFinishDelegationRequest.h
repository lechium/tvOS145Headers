/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ICPBDGSFinishDelegationRequest : PBRequest <NSCopying> {

	NSMutableArray* _playerDelegateInfoTokens;

}

@property (nonatomic,retain) NSMutableArray * playerDelegateInfoTokens;              //@synthesize playerDelegateInfoTokens=_playerDelegateInfoTokens - In the implementation block
+(Class)playerDelegateInfoTokenType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearPlayerDelegateInfoTokens;
-(void)addPlayerDelegateInfoToken:(id)arg1 ;
-(unsigned long long)playerDelegateInfoTokensCount;
-(id)playerDelegateInfoTokenAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)playerDelegateInfoTokens;
-(void)setPlayerDelegateInfoTokens:(NSMutableArray *)arg1 ;
@end

