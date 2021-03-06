/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmojiFoundation/EmojiFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSLocale, EMFStringStemmer;

@interface EMFQuery : NSObject <NSCopying> {

	NSArray* _queryTokens;
	NSArray* _queryTokensAnalyzed;
	NSString* _normalizedString;
	NSString* _queryString;
	NSLocale* _locale;
	EMFStringStemmer* _stringStemmer;

}

@property (nonatomic,retain) NSString * queryString;                          //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,readonly) NSString * trimmedQueryString; 
@property (nonatomic,readonly) NSString * normalizedQueryString; 
@property (nonatomic,retain) NSArray * tokens; 
@property (nonatomic,readonly) NSLocale * locale;                             //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) EMFStringStemmer * stringStemmer;                //@synthesize stringStemmer=_stringStemmer - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSLocale *)locale;
-(id)initWithLocale:(id)arg1 ;
-(void)reset;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(NSArray *)tokens;
-(void)setTokens:(NSArray *)arg1 ;
-(NSString *)normalizedQueryString;
-(id)initWithQueryString:(id)arg1 andQueryTokens:(id)arg2 andLocale:(id)arg3 ;
-(id)_finalTokenAnalyzed:(BOOL)arg1 ;
-(NSString *)trimmedQueryString;
-(void)setStringStemmer:(EMFStringStemmer *)arg1 ;
-(id)initWithQueryString:(id)arg1 andLocale:(id)arg2 ;
-(id)initWithQueryTokens:(id)arg1 andLocale:(id)arg2 ;
-(id)finalTokenAnalyzed;
-(id)finalTokenUnanalyzed;
-(id)tokenCounts;
-(EMFStringStemmer *)stringStemmer;
@end

