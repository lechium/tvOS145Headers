/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MPStoreLyricsResponse : NSObject {

	BOOL _TTML;
	NSString* _lyricsContent;
	NSString* _lyricsID;

}

@property (assign,getter=isTTML,nonatomic) BOOL TTML;               //@synthesize TTML=_TTML - In the implementation block
@property (nonatomic,retain) NSString * lyricsContent;              //@synthesize lyricsContent=_lyricsContent - In the implementation block
@property (nonatomic,retain) NSString * lyricsID;                   //@synthesize lyricsID=_lyricsID - In the implementation block
-(NSString *)lyricsID;
-(void)setLyricsID:(NSString *)arg1 ;
-(BOOL)isTTML;
-(void)setTTML:(BOOL)arg1 ;
-(NSString *)lyricsContent;
-(void)setLyricsContent:(NSString *)arg1 ;
@end
