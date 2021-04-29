/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ICSPushbackStream, NSMutableData;

@interface ICSTokenizer : NSObject {

	ICSPushbackStream* _data;
	NSMutableData* _token;
	int _tokenType;
	int _expectedNextTokenType;
	BOOL _printedICS;
	int _logCount;

}

@property (assign) BOOL printedICS;              //@synthesize printedICS=_printedICS - In the implementation block
@property (assign) int logCount;                 //@synthesize logCount=_logCount - In the implementation block
-(id)initWithData:(id)arg1 ;
-(int)tokenType;
-(id)nextToken;
-(id)initWithCompressedData:(id)arg1 ;
-(id)currentToken;
-(BOOL)printedICS;
-(void)setPrintedICS:(BOOL)arg1 ;
-(int)logCount;
-(void)setLogCount:(int)arg1 ;
-(BOOL)consumeEOL;
-(void)consumeWhiteSpace;
-(BOOL)consumeChar:(char)arg1 ;
-(BOOL)consumeEscaped:(const char*)arg1 ;
-(void)consumePropName;
-(void)consumeParamName;
-(void)consumeParamValue;
-(void)consumePropValue;
@end
