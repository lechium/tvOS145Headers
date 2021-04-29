/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/MTLValueTransformer.h>

@interface MTLReversibleValueTransformer : MTLValueTransformer
+(BOOL)allowsReverseTransformation;
-(id)reverseTransformedValue:(id)arg1 ;
-(id)reverseTransformedValue:(id)arg1 success:(BOOL*)arg2 error:(id*)arg3 ;
-(id)initWithForwardBlock:(/*^block*/id)arg1 reverseBlock:(/*^block*/id)arg2 ;
@end

