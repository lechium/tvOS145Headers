/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSSet;

@interface _IKDOMConditionalExpression : NSObject {

	BOOL _isNegated;
	NSArray* _operations;
	NSSet* _dependentPathStrings;

}

@property (nonatomic,copy,readonly) NSSet * dependentPathStrings;              //@synthesize dependentPathStrings=_dependentPathStrings - In the implementation block
+(id)expressionFromString:(id)arg1 ;
+(id)parseExpressionsFromString:(id)arg1 ;
-(BOOL)passesForDataItem:(id)arg1 ;
-(id)initWithOperations:(id)arg1 dependentPathStrings:(id)arg2 isNegated:(BOOL)arg3 ;
-(NSSet *)dependentPathStrings;
@end

