/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSSmartPunctuationClient;
#import <Foundation/Foundation-Structs.h>
@class NSSmartQuoteOptions;

@interface NSSmartPunctuationController : NSObject {

	id<NSSmartPunctuationClient> _client;
	NSSmartQuoteOptions* _options;
	unsigned long long _types;

}

@property (assign) id<NSSmartPunctuationClient> client; 
@property (copy) NSSmartQuoteOptions * smartQuoteOptions; 
@property (assign) BOOL smartQuotesEnabled; 
@property (assign) BOOL smartDashesEnabled; 
-(id)init;
-(void)dealloc;
-(id<NSSmartPunctuationClient>)client;
-(BOOL)smartQuotesEnabled;
-(NSSmartQuoteOptions *)smartQuoteOptions;
-(void)setSmartQuoteOptions:(NSSmartQuoteOptions *)arg1 ;
-(void)setSmartQuotesEnabled:(BOOL)arg1 ;
-(BOOL)smartDashesEnabled;
-(void)setSmartDashesEnabled:(BOOL)arg1 ;
-(void)setClient:(id<NSSmartPunctuationClient>)arg1 ;
-(void)clientDidReplaceRange:(NSRange)arg1 changeInLength:(long long)arg2 ;
@end

