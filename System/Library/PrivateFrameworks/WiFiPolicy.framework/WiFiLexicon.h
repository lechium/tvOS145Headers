/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WiFiPolicy/WiFiPolicy-Structs.h>
@class NSCharacterSet, NSMutableDictionary, NSSet;

@interface WiFiLexicon : NSObject {

	LXLexiconRef _lexiconEnglish;
	LXLexiconRef _lexiconUserLocale;
	NSCharacterSet* _tokenizationCharacterSet;
	NSCharacterSet* _tokenizationCharacterSetWithoutUpperCase;
	NSMutableDictionary* _stringCache;
	NSSet* _unwantedEnglishWords;

}

@property (nonatomic,retain) NSCharacterSet * tokenizationCharacterSet;                              //@synthesize tokenizationCharacterSet=_tokenizationCharacterSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * tokenizationCharacterSetWithoutUpperCase;              //@synthesize tokenizationCharacterSetWithoutUpperCase=_tokenizationCharacterSetWithoutUpperCase - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stringCache;                                      //@synthesize stringCache=_stringCache - In the implementation block
@property (nonatomic,retain) NSSet * unwantedEnglishWords;                                           //@synthesize unwantedEnglishWords=_unwantedEnglishWords - In the implementation block
-(id)init;
-(void)dealloc;
-(NSMutableDictionary *)stringCache;
-(NSSet *)unwantedEnglishWords;
-(id)_tokenizeStringForSpecialCharacters:(id)arg1 ;
-(NSCharacterSet *)tokenizationCharacterSet;
-(NSCharacterSet *)tokenizationCharacterSetWithoutUpperCase;
-(BOOL)stringContainsUnwantedWords:(id)arg1 ;
-(void)setTokenizationCharacterSet:(NSCharacterSet *)arg1 ;
-(void)setTokenizationCharacterSetWithoutUpperCase:(NSCharacterSet *)arg1 ;
-(void)setStringCache:(NSMutableDictionary *)arg1 ;
-(void)setUnwantedEnglishWords:(NSSet *)arg1 ;
@end

