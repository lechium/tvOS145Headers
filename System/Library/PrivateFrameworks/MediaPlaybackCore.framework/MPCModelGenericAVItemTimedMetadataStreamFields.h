/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface MPCModelGenericAVItemTimedMetadataStreamFields : NSObject {

	BOOL _explicitContent;
	NSString* _title;
	NSString* _artist;
	NSString* _album;
	NSArray* _artworkDictionaries;

}

@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * artist;                                            //@synthesize artist=_artist - In the implementation block
@property (nonatomic,copy) NSString * album;                                             //@synthesize album=_album - In the implementation block
@property (assign,getter=isExplicitContent,nonatomic) BOOL explicitContent;              //@synthesize explicitContent=_explicitContent - In the implementation block
@property (nonatomic,copy) NSArray * artworkDictionaries;                                //@synthesize artworkDictionaries=_artworkDictionaries - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAlbum:(NSString *)arg1 ;
-(NSString *)album;
-(void)setArtist:(NSString *)arg1 ;
-(NSString *)artist;
-(BOOL)isExplicitContent;
-(void)setExplicitContent:(BOOL)arg1 ;
-(NSArray *)artworkDictionaries;
-(void)setArtworkDictionaries:(NSArray *)arg1 ;
@end

