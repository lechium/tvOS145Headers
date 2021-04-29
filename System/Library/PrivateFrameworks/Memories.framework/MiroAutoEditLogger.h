/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableString, NSRegularExpression;

@interface MiroAutoEditLogger : NSObject {

	BOOL _logsToConsole;
	NSMutableString* _log;
	long long _loggingLevel;
	long long _indentationLevel;
	NSRegularExpression* _framesRegex;
	long long _disableLoggingCount;

}

@property (nonatomic,retain) NSMutableString * log;                          //@synthesize log=_log - In the implementation block
@property (assign,nonatomic) long long loggingLevel;                         //@synthesize loggingLevel=_loggingLevel - In the implementation block
@property (assign,nonatomic) long long indentationLevel;                     //@synthesize indentationLevel=_indentationLevel - In the implementation block
@property (nonatomic,retain) NSRegularExpression * framesRegex;              //@synthesize framesRegex=_framesRegex - In the implementation block
@property (assign,nonatomic) long long disableLoggingCount;                  //@synthesize disableLoggingCount=_disableLoggingCount - In the implementation block
@property (assign,nonatomic) BOOL logsToConsole;                             //@synthesize logsToConsole=_logsToConsole - In the implementation block
-(id)init;
-(void)commit;
-(NSMutableString *)log;
-(void)setLog:(NSMutableString *)arg1 ;
-(long long)loggingLevel;
-(void)setIndentationLevel:(long long)arg1 ;
-(void)disableLogging;
-(void)enableLogging;
-(long long)indentationLevel;
-(void)setLoggingLevel:(long long)arg1 ;
-(void)logAndDescribeFrameCounts:(BOOL)arg1 level:(long long)arg2 formatString:(id)arg3 ;
-(void)setFramesRegex:(NSRegularExpression *)arg1 ;
-(long long)disableLoggingCount;
-(NSRegularExpression *)framesRegex;
-(BOOL)logsToConsole;
-(void)setDisableLoggingCount:(long long)arg1 ;
-(void)incrementIndentationLevel;
-(void)decrementIndentationLevel;
-(void)setLogsToConsole:(BOOL)arg1 ;
@end

