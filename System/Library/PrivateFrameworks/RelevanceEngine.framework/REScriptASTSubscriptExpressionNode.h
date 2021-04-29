/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptASTNode;

@interface REScriptASTSubscriptExpressionNode : REScriptASTNode {

	REScriptASTNode* _expression;
	REScriptASTNode* _startIndex;
	REScriptASTNode* _endIndex;

}

@property (nonatomic,readonly) REScriptASTNode * expression;              //@synthesize expression=_expression - In the implementation block
@property (nonatomic,readonly) REScriptASTNode * startIndex;              //@synthesize startIndex=_startIndex - In the implementation block
@property (nonatomic,readonly) REScriptASTNode * endIndex;                //@synthesize endIndex=_endIndex - In the implementation block
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(id)dependencies;
-(REScriptASTNode *)expression;
-(REScriptASTNode *)endIndex;
-(REScriptASTNode *)startIndex;
-(id)initWithExpression:(id)arg1 startIndex:(id)arg2 endIndex:(id)arg3 ;
@end

