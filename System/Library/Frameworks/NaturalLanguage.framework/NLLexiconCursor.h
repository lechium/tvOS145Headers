/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@class NLLexicon, NSString;

@interface NLLexiconCursor : NSObject {

	NLLexicon* _lexicon;
	LXCursorRef _cursor;

}

@property (readonly) BOOL hasEntries; 
@property (readonly) BOOL hasChildren; 
@property (readonly) double prefixProbability; 
@property (readonly) double terminationProbability; 
@property (copy,readonly) NSString * traversedString; 
-(void)dealloc;
-(double)prefixProbability;
-(BOOL)hasEntries;
-(BOOL)hasChildren;
-(double)terminationProbability;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithLexicon:(id)arg1 cursor:(LXCursorRef)arg2 ;
-(void)_enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithLexicon:(id)arg1 string:(id)arg2 ;
-(id)cursorByAdvancingWithString:(id)arg1 ;
-(NSString *)traversedString;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateCompletionsUsingBlock:(/*^block*/id)arg1 ;
@end

