/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSStringPredicateOperator.h>

@interface NSMatchingPredicateOperator : NSStringPredicateOperator {

	int _contextLock;
	SCD_Struct_NS46* _regexContext;

}
-(void)dealloc;
-(SEL)selector;
-(BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3 ;
-(id)symbol;
-(BOOL)_shouldEscapeForLike;
-(void)_clearContext;
@end

