/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaServices/MSVLyricsElement.h>

@class NSString, NSArray;

@interface MSVLyricsSection : MSVLyricsElement {

	long long _songPart;
	NSString* _songPartText;
	NSArray* _lines;

}

@property (assign,nonatomic) long long songPart;                 //@synthesize songPart=_songPart - In the implementation block
@property (nonatomic,copy) NSString * songPartText;              //@synthesize songPartText=_songPartText - In the implementation block
@property (nonatomic,retain) NSArray * lines;                    //@synthesize lines=_lines - In the implementation block
+(long long)_songPartForText:(id)arg1 ;
-(id)description;
-(id)init;
-(NSArray *)lines;
-(void)setLines:(NSArray *)arg1 ;
-(void)setSongPartText:(NSString *)arg1 ;
-(long long)songPart;
-(void)setSongPart:(long long)arg1 ;
-(NSString *)songPartText;
@end
