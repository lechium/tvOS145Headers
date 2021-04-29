/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSNumber, ASCArtwork, NSString;

@interface GKGameHighlightInternal : GKInternalRepresentation {

	NSNumber* _adamID;
	ASCArtwork* _artwork;
	NSString* _title;
	NSString* _subtitle;

}

@property (assign,nonatomic) NSNumber * adamID;                 //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,retain) ASCArtwork * artwork;              //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,retain) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;               //@synthesize subtitle=_subtitle - In the implementation block
+(id)secureCodedPropertyKeys;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(ASCArtwork *)artwork;
-(void)setArtwork:(ASCArtwork *)arg1 ;
-(void)setAdamID:(NSNumber *)arg1 ;
-(NSNumber *)adamID;
@end
