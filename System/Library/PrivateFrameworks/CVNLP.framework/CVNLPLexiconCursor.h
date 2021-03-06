/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CVNLP/CVNLP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CVNLPLexiconCursor : NSObject <NSCopying> {

	const LXCursorRef _cursor;
	unsigned long long _priority;

}

@property (nonatomic,readonly) const LXCursorRef cursor;                 //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;              //@synthesize priority=_priority - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)priority;
-(const LXCursorRef)cursor;
-(id)initByAdvancingCursor:(id)arg1 withString:(id)arg2 ;
-(id)initWithCursor:(LXCursorRef)arg1 priority:(unsigned long long)arg2 ;
-(id)newCursorByAdvancingWithString:(id)arg1 ;
-(double)cursorConditionalLogProbability;
@end

