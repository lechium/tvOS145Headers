/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaServices/MSVLyricsTextElement.h>

@class MSVLyricsSection, NSArray, NSString;

@interface MSVLyricsLine : MSVLyricsTextElement {

	BOOL _instrumentalBreak;
	long long _lineIndex;
	long long _originalLineIndex;
	MSVLyricsSection* _parentSection;
	MSVLyricsLine* _nextLine;
	NSArray* _words;
	NSString* _translationKey;

}

@property (assign,getter=isInstrumentalBreak,nonatomic) BOOL instrumentalBreak;              //@synthesize instrumentalBreak=_instrumentalBreak - In the implementation block
@property (assign,nonatomic) long long lineIndex;                                            //@synthesize lineIndex=_lineIndex - In the implementation block
@property (assign,nonatomic) long long originalLineIndex;                                    //@synthesize originalLineIndex=_originalLineIndex - In the implementation block
@property (assign,nonatomic,__weak) MSVLyricsSection * parentSection;                        //@synthesize parentSection=_parentSection - In the implementation block
@property (nonatomic,retain) MSVLyricsLine * nextLine;                                       //@synthesize nextLine=_nextLine - In the implementation block
@property (nonatomic,retain) NSArray * words;                                                //@synthesize words=_words - In the implementation block
@property (nonatomic,copy) NSString * translationKey;                                        //@synthesize translationKey=_translationKey - In the implementation block
-(id)description;
-(id)init;
-(NSArray *)words;
-(void)setLineIndex:(long long)arg1 ;
-(long long)lineIndex;
-(void)setNextLine:(MSVLyricsLine *)arg1 ;
-(NSString *)translationKey;
-(BOOL)containsTimeOffset:(double)arg1 withErrorMargin:(double)arg2 ;
-(BOOL)isInstrumentalBreak;
-(void)setInstrumentalBreak:(BOOL)arg1 ;
-(long long)originalLineIndex;
-(void)setOriginalLineIndex:(long long)arg1 ;
-(MSVLyricsSection *)parentSection;
-(void)setParentSection:(MSVLyricsSection *)arg1 ;
-(MSVLyricsLine *)nextLine;
-(void)setWords:(NSArray *)arg1 ;
-(void)setTranslationKey:(NSString *)arg1 ;
@end

