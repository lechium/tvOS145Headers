/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextStorage.h>

@class NSAttributedString, NSLayoutManager, NSTextContainer;

@interface __NSImmutableTextStorage : NSTextStorage {

	NSAttributedString* _contents;
	NSLayoutManager* _layoutManager;
	NSTextContainer* _textContainer;

}

@property (readonly) NSLayoutManager * layoutManager; 
@property (readonly) NSTextContainer * textContainer; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(void)dealloc;
-(id)string;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithAttributedString:(id)arg1 ;
-(NSLayoutManager *)layoutManager;
-(NSTextContainer *)textContainer;
-(void)fixAttributesInRange:(NSRange)arg1 ;
-(void)processEditing;
@end

