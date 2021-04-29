/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SiriUICore/SiriUICore-Structs.h>
@class NSArray, CALayer, UIImage;

@interface _SUICStreamingWord : NSObject {

	_SUICStreamingWord* _previous;
	long long _insertType;
	NSArray* _emojiRangesInText;
	double _glyphLocationInWordX;
	CALayer* _wordLayer;
	UIImage* _beginImage;
	UIImage* _endImage;
	NSRange _textRange;

}

@property (nonatomic,retain) _SUICStreamingWord * previous;              //@synthesize previous=_previous - In the implementation block
@property (assign,nonatomic) long long insertType;                       //@synthesize insertType=_insertType - In the implementation block
@property (assign,nonatomic) NSRange textRange;                          //@synthesize textRange=_textRange - In the implementation block
@property (nonatomic,retain) NSArray * emojiRangesInText;                //@synthesize emojiRangesInText=_emojiRangesInText - In the implementation block
@property (assign,nonatomic) double glyphLocationInWordX;                //@synthesize glyphLocationInWordX=_glyphLocationInWordX - In the implementation block
@property (nonatomic,retain) CALayer * wordLayer;                        //@synthesize wordLayer=_wordLayer - In the implementation block
@property (nonatomic,retain) UIImage * beginImage;                       //@synthesize beginImage=_beginImage - In the implementation block
@property (nonatomic,retain) UIImage * endImage;                         //@synthesize endImage=_endImage - In the implementation block
-(id)init;
-(_SUICStreamingWord *)previous;
-(NSRange)textRange;
-(void)setPrevious:(_SUICStreamingWord *)arg1 ;
-(void)setTextRange:(NSRange)arg1 ;
-(void)setWordLayer:(CALayer *)arg1 ;
-(long long)insertType;
-(void)setInsertType:(long long)arg1 ;
-(NSArray *)emojiRangesInText;
-(void)setEmojiRangesInText:(NSArray *)arg1 ;
-(double)glyphLocationInWordX;
-(void)setGlyphLocationInWordX:(double)arg1 ;
-(CALayer *)wordLayer;
-(UIImage *)beginImage;
-(void)setBeginImage:(UIImage *)arg1 ;
-(UIImage *)endImage;
-(void)setEndImage:(UIImage *)arg1 ;
@end

