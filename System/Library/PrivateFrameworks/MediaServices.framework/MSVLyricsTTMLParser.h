/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@protocol OS_dispatch_queue;
@class NSData, NSInputStream, NSObject, MSVLyricsSongInfo, NSError, NSMutableArray, MSVLyricsTextElement, NSMutableDictionary, NSString;

@interface MSVLyricsTTMLParser : NSObject <NSXMLParserDelegate> {

	BOOL _linesAreSortedByStartTime;
	NSData* _ttmlData;
	NSInputStream* _inputStream;
	NSObject*<OS_dispatch_queue> _parseQueue;
	MSVLyricsSongInfo* _lyricsInfo;
	NSError* _parserError;
	NSMutableArray* _elementStack;
	NSMutableArray* _lyricLines;
	MSVLyricsTextElement* _currentTextElement;
	NSMutableDictionary* _translationsMap;
	double _currentStartTime;

}

@property (nonatomic,retain) NSData * ttmlData;                                      //@synthesize ttmlData=_ttmlData - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                            //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> parseQueue;                //@synthesize parseQueue=_parseQueue - In the implementation block
@property (nonatomic,retain) MSVLyricsSongInfo * lyricsInfo;                         //@synthesize lyricsInfo=_lyricsInfo - In the implementation block
@property (nonatomic,retain) NSError * parserError;                                  //@synthesize parserError=_parserError - In the implementation block
@property (nonatomic,retain) NSMutableArray * elementStack;                          //@synthesize elementStack=_elementStack - In the implementation block
@property (nonatomic,retain) NSMutableArray * lyricLines;                            //@synthesize lyricLines=_lyricLines - In the implementation block
@property (nonatomic,retain) MSVLyricsTextElement * currentTextElement;              //@synthesize currentTextElement=_currentTextElement - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * translationsMap;                  //@synthesize translationsMap=_translationsMap - In the implementation block
@property (assign,nonatomic) double currentStartTime;                                //@synthesize currentStartTime=_currentStartTime - In the implementation block
@property (assign,nonatomic) BOOL linesAreSortedByStartTime;                         //@synthesize linesAreSortedByStartTime=_linesAreSortedByStartTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(NSError *)parserError;
-(NSInputStream *)inputStream;
-(id)initWithTTMLData:(id)arg1 ;
-(id)initWithTTMLStream:(id)arg1 ;
-(id)parseWithError:(id*)arg1 ;
-(void)parseWithCompletion:(/*^block*/id)arg1 ;
-(NSData *)ttmlData;
-(void)setTtmlData:(NSData *)arg1 ;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(NSObject*<OS_dispatch_queue>)parseQueue;
-(void)setParseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(MSVLyricsSongInfo *)lyricsInfo;
-(void)setLyricsInfo:(MSVLyricsSongInfo *)arg1 ;
-(void)setParserError:(NSError *)arg1 ;
-(NSMutableArray *)elementStack;
-(void)setElementStack:(NSMutableArray *)arg1 ;
-(NSMutableArray *)lyricLines;
-(void)setLyricLines:(NSMutableArray *)arg1 ;
-(MSVLyricsTextElement *)currentTextElement;
-(void)setCurrentTextElement:(MSVLyricsTextElement *)arg1 ;
-(NSMutableDictionary *)translationsMap;
-(void)setTranslationsMap:(NSMutableDictionary *)arg1 ;
-(double)currentStartTime;
-(void)setCurrentStartTime:(double)arg1 ;
-(BOOL)linesAreSortedByStartTime;
-(void)setLinesAreSortedByStartTime:(BOOL)arg1 ;
@end

